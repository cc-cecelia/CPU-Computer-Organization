`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    01:28:26 12/17/2022 
// Design Name: 
// Module Name:    CP0 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
`include "constants.v"
module CP0(
	input clk,
	input reset,
	input CP0_Wr,
	input [4:0] readReg, // mfc0 rd
	input [4:0] writeReg, //mtc0 rd
	input [31:0] V2_M, //mtc0
	input [31:0] PC, //受害指令PC
	input isBD, //是否是延迟槽
	input isExc,
	input [4:0] excCode,
	input [5:0] HWInt, //6个设备中断
	input EXLclear,
	output [31:0] epc,
	output req,//中断请求 = 内部异常+外部中断
	output [31:0] CP0out //mfc0
    );
reg [31:0]SR, Cause, EPC, Prid;
reg[5:0] IM,IP;
reg [4:0] Cau_excCode;
reg IE, EXL;
wire CPU_Exc;

wire [31:0] returnPC = (isBD) ? PC - 4 : PC;

assign Int_Req = |(HWInt[5:0] & IM[5:0]) & IE & !EXL ;
assign CPU_Exc = (isExc) && (excCode != 0) && (!EXL);
assign req = Int_Req || CPU_Exc;	
assign epc = EPC;
assign CP0out = (readReg == `SR) ? SR :
				(readReg == `Cause) ? Cause :
				(readReg == `EPC) ? EPC :
				(readReg == `PRID) ? Prid : 0;
	
initial begin
	SR <= {16'b0, 6'b111111, 8'b0, 1'b0, 1'b1};
	//SR[15:10] <= 6'b111111;
	Cause <= 0;
	//SR[0:1] <= 2'b01;
	EPC <= 0;
	Prid <= 0;
end
/***********put up regs**************/
always @(*) begin
	IM = SR[15:10];
	EXL = SR[1];
	IE = SR[0];
	IP = Cause[15:10];
	Cau_excCode = Cause[6:2];
	/*SR = {16'b0, IM, 8'b0, EXL, IE};
	Cause = {16'b0, IP, 3'b0, Cau_excCode , 2'b0};*/
end
/************************************/
/**********CAUSE REG****************/
always @(posedge clk) begin
	if (reset) begin
		//SR <= {16'b0, 6'b111111, 8'b0, 1'b0, 1'b1};
		//SR[15:10] <= 6'b111111;
		SR <= 0;
		Cause <= 0;
		//SR[0:1] <= 2'b01;
		EPC <= 0;
		Prid <= 0;
	end
	else begin
		Cause[15:10] <= HWInt;
	end
end
/***********************************/
/*********SR,EPC********************/
always @(posedge clk) begin
	if (reset) begin
		//SR <= {16'b0, 6'b111111, 8'b0, 1'b0, 1'b1};
		//SR[15:10] <= 6'b111111;
		SR <= 0;
		Cause <= 0;
		//SR[0:1] <= 2'b01;
		EPC <= 0;
		Prid <= 0;
	end
	else begin
		if (EXLclear) begin
			SR[1] <= 0;
		end
		else begin
			if (req) begin
				Cause[6:2] <= (Int_Req) ? 0 : excCode;
				SR[1] <= 1;
				//EPC <= returnPC;
				EPC <= PC;
				Cause[31] = isBD;
			end
			else if (CP0_Wr) begin
				if (writeReg == `SR) SR <= V2_M;
				else if (writeReg == `EPC) EPC <= V2_M;
				//else if (writeReg == `Cause) Cause <= V2_M;
			end
		end
	end
end	
endmodule

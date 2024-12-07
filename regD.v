`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:41:06 11/08/2022 
// Design Name: 
// Module Name:    regs 
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
module regD(
	input clk,
	input reset,
	input En,
	input [31:0] PC_Start,
	input [5:0] opCode,
	input [4:0] IM25_21,
	input [4:0] IM20_16,
	input [4:0] IM15_11,
	input [25:0] IM25_0,
	input [31:0] ADD4,
	input IFisExc,
	input [4:0] excCode_IF,
	output reg isExc,
	output reg [4:0] rs,
	output reg [4:0] rt,
	output reg [4:0] rd,
	output reg [25:0] imm,
	output reg [31:0] RA,
	output reg [31:0] PC,
	output reg [5:0] opCode_D,
	output reg [4:0] excCode
    );


initial begin
	rs <= 0;
	rt <= 0;
	rd <= 0;
	imm <= 0;
	RA <= 0;
	PC <= 0;
	isExc <= 0;
end
always @(posedge clk) begin
	if (reset) begin
		rs <= 0;
		rt <= 0;
		rd <= 0;
		imm <= 0;
		RA <= 0;
		PC <= 0;
		isExc <= 0;
	end
	else if (En) begin
		rs <= IM25_21;
		rt <= IM20_16;
		rd <= IM15_11;
		imm <= IM25_0;
		RA <= ADD4;
		PC <= PC_Start;
		isExc <= IFisExc;
		excCode <= 10;
		opCode_D <= opCode;
	end
end


endmodule

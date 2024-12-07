`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:48:03 11/08/2022 
// Design Name: 
// Module Name:    regE 
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
module regE(
	input clk,
	input reset,
	input clear,
	input En,
	input [31:0] PC_D,
	input [31:0] RD1,
	input [31:0] RD2,
	input [4:0] A3_D,
	input [31:0] EXT,
	input [31:0] RA_D,
	input [4:0] RD_D,
	input DisExc,
	input [4:0] DExcCode,
	output reg [31:0] V1,
	output reg [31:0] V2,
	output reg [4:0] A3,
	output reg [4:0] RD,
	output reg [31:0] ext,
	output reg [31:0] RA,
	output reg [31:0] PC,
	output reg EisExc,
	output reg [4:0] EExcCode
    );

initial begin
	V1 <= 0;
	V2 <= 0;
	A3 <= 0;
	ext <= 0;
	RA <= 0;
	PC <= 32'h00003000;
	RD <= 0;
	EisExc <= 0;
end
always @(posedge clk) begin
	if (reset) begin
		V1 <= 0;
		V2 <= 0;
		A3 <= 0;
		ext <= 0;
		RA <= 0;
		PC <= 32'h00003000;
		EisExc <= 0;
		end
	else begin
		if(clear) begin
			V1 <= 0;
			V2 <= 0;
			A3 <= 0;
			ext <= 0;
			RA <= 0;
			PC <= 32'h00003000;
			EisExc <= 0;
			RD <= 0;
		end
		else begin
			V1 <= RD1;
			V2 <= RD2;
			A3 <= A3_D;
			RD <= RD_D;
			ext <= EXT;
			RA <= RA_D;
			PC <= PC_D;
			EisExc <= DisExc;
			EExcCode <= DExcCode;
		end
	end
end

endmodule

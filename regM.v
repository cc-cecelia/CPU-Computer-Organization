`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:56:14 11/09/2022 
// Design Name: 
// Module Name:    regM 
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
module regM(
	input clk,
	input reset,
	//input clear,
	input [31:0] PC_E,
    input [31:0] V2_E,
    input [31:0] ALU_C,
    input [4:0] A3_E,
	input [4:0] RD_E,
    input [31:0] RA_E,
	input [31:0] MD,
	input EisExc,
	input [4:0] excCode_E,
	input isOverflow_E,
    output reg [31:0] V2,
    output reg [31:0] AO,
    output reg [4:0] A3,
	output reg [4:0] RD,
    output reg [31:0] RA,
	output reg [31:0] PC,
	output reg [31:0] MD_O,
	output reg isExc,
	output reg [4:0] excCode,
	output reg isOverflow
    );

initial begin
	V2 <= 0;
	AO <= 0;
	A3 <= 0;
	RA <= 0;
	PC <= 32'h00003000;
	MD_O <= 0;
	RD <= 0;
	isExc <= 0;
	isOverflow <= 0;
end

always @(posedge clk) begin
	if (reset) begin
		V2 <= 0;
		AO <= 0;
		A3 <= 0;
		RA <= 0;
		PC <= 32'h00003000;
		MD_O <= 0;
		RD <= 0;
		isExc <= 0;
		isOverflow <= 0;
	end
	else begin
			V2 <= V2_E;
			AO <= ALU_C;
			A3 <= A3_E;
			RA <= RA_E;
			PC <= PC_E;
			MD_O <= MD;
			RD <= RD_E;
			isExc <= EisExc;
			excCode <= excCode_E;
			isOverflow <= isOverflow_E;
	end
end

endmodule

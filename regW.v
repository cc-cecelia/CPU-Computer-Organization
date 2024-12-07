`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:59:10 11/09/2022 
// Design Name: 
// Module Name:    regW 
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
module regW(
	input clk,
	input reset,
	input [31:0] PC_M,
    input [31:0] D,
    input [31:0] AO_M,
    input [4:0] A3_M,
    input [31:0] RA_M,
	input [31:0] MD_M,
	input [31:0] CP0_M,
    output reg [31:0] DR,
    output reg [31:0] AO,
    output reg [4:0] A3,
    output reg [31:0] RA,
	output reg [31:0] PC,
	output reg [31:0] MD,
	output reg [31:0] CP0
    );
initial begin
	DR <= 0;
	AO <= 0;
	A3 <= 0;
	RA <= 0;
	PC <= 32'h3000;
	MD <= 0;
	CP0 <= 0;
end

always @(posedge clk) begin
	if (reset) begin
		DR <= 0;
		AO <= 0;
		A3 <= 0;
		RA <= 0;
		PC <= 32'h3000;
		MD <= 0;
		CP0 <= 0;
	end
	else begin
		DR <= D;
		AO <= AO_M;
		A3 <= A3_M;
		RA <= RA_M;
		PC <= PC_M;
		MD <= MD_M;
		CP0 <= CP0_M;
	end
end

endmodule

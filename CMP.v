`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:05:45 11/11/2022 
// Design Name: 
// Module Name:    CMP 
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
module CMP(
    input [31:0] A,
    input [31:0] B,
	input [1:0] bType,
	output reg isJump
    );
always @(*) begin
	case (bType)
		`beq : isJump = (A == B) ? 1 : 0;
		`bne : isJump = (A != B) ? 1 : 0;
		default : isJump = 0;
		endcase
end
endmodule

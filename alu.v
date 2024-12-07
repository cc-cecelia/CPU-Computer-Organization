`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:33:03 10/27/2022 
// Design Name: 
// Module Name:    alu 
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
module ALU(
	input [31:0] ALU_A,
	input [31:0] ALU_B,
	input [2:0] ALUOp,
	output reg [31:0] ALU_C
    );
reg [32:0] temp;
always @(*) begin
	case (ALUOp)
		`ALU_ADD:
			ALU_C = ALU_A + ALU_B;
		`ALU_SUB:
			ALU_C = ALU_A - ALU_B;
		`ALU_OR:
			ALU_C = ALU_A | ALU_B;
		`ALU_LUI:
			ALU_C = ALU_B << 16;
		`ALU_AND:
			ALU_C = ALU_A & ALU_B;
		`ALU_SLT: begin
			ALU_C = (((ALU_A[31] == 1'd1) && (ALU_B[31] == 1'd0)) ||((ALU_A[31] == ALU_B[31]) &&(ALU_A[30:0] < ALU_B[30:0]))) ? 32'd1 : 32'd0;
			//ALU_C = $signed(ALU_A) < $signed(ALU_B) ? 1 : 0;
			end
		`ALU_SLTU:
			ALU_C = ({1'b0,ALU_A} < {1'b0,ALU_B}) ? 1 : 0;
		endcase
end

function [31:0] opposite;
	input [31:0] temp;
	integer i;
	begin
		for (i = 0; i < 32; i = i + 1) begin
			opposite[i] = !temp[i];
		end
		opposite = opposite + 1'b1; 
	end
endfunction
endmodule

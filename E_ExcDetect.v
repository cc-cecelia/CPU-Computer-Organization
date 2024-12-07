`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:43:31 12/17/2022 
// Design Name: 
// Module Name:    E_ExcDetect 
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
module E_ExcDetect(
	input isE_Exc,
	input [4:0] E_ExcCode,
    input [31:0] ALU_A,
    input [31:0] ALU_B,
    input [1:0] detectType,
	output reg isOverflow,
	output reg isExc,
	output reg [4:0] excCode
    );
reg [32:0] temp;
always @(*) begin
	if (isE_Exc) begin
		isExc <= 1;
		excCode <= E_ExcCode;
	end
	else begin
		case (detectType)
			`add: begin
				temp = {ALU_A[31],ALU_A} + {ALU_B[31],ALU_B} ;
				if (temp[32] != temp[31]) begin
					isOverflow <= 1;
					isExc <= 1;
					excCode <= 12;
					end
				else begin
					isOverflow <= 0;
					isExc <= 0;
					end
				end	
			`sub: begin
				temp = {ALU_A[31],ALU_A} - {ALU_B[31],ALU_B} ;
				if (temp[32] != temp[31]) begin
					isOverflow <= 0;
					isExc <= 1;
					excCode <= 12;
					end
				else begin
					isOverflow <= 0;
					isExc <= 0;
					end
				end	
			default : begin
				isOverflow <= 0;
				isExc <= 0;
				end
		endcase
	end
end
endmodule

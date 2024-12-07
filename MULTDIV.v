`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:08:46 11/20/2022 
// Design Name: 
// Module Name:    MULTDIV 
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
module MULTDIV(
    input clk,
    input reset,
	input [3:0] MD_Op,
    input [31:0] A,
    input [31:0] B,
	output reg busy,
    output reg [31:0] HI,
    output reg [31:0] LO
    );
reg [63:0] temp;
reg [3:0] cnt;
reg [31:0] hi,lo,tempA,tempB;
initial begin
	temp <= 0;
	HI <= 0;
	LO <= 0;
	hi <= 0;
	lo <= 0;
	cnt <= 0;
end
always @(posedge clk) begin
	if (cnt == 0) begin
		case (MD_Op) 
			`ALU_MULT: begin
				busy <= 1;
				cnt <= 5;
				end
			`ALU_MULTU: begin
				busy <= 1;
				cnt <= 5;
				end	
			`ALU_DIV: begin
				busy <= 1;
				cnt <= 10;
				end
			`ALU_DIVU: begin
				busy <= 1;
				cnt <= 10;
				end
			`mthi: HI <= A;
			`mtlo: LO <= A;
			default: begin
				busy <= 0;
				cnt <= 0;
			end
		endcase
	end
	else begin //cnt != 0 还在这个乘除模块里面还在运行mult/div
		case (MD_Op) 
			`ALU_MULT: begin
				busy <= 1;
				cnt <= 5;
				end	
			`ALU_MULTU: begin
				busy <= 1;
				cnt <= 5;
				end	
			`ALU_DIV: begin
				busy <= 1;
				cnt <= 5;
				end
			`ALU_DIVU: begin
				busy <= 1;
				cnt <= 5;
				end
			default:begin
				if (cnt == 1) begin
					busy <= 0;
					cnt <= 0;
					HI <= hi;
					LO <= lo;
					end
				else begin
					cnt <= (cnt == 0) ? 0 : cnt - 1;
					end
				end
		endcase
	end
end
always @(*) begin
	case (MD_Op)
		`ALU_MULT: begin
			tempA = (A[31] == 1) ? opposite(A) : A;
			tempB = (B[31] == 1) ? opposite(B) : B;
			temp = tempA * tempB;
			temp = (A[31] == B[31]) ? temp : ~temp + 1;
			hi = temp[63:32];
			lo = temp[31:0];
			end
		`ALU_MULTU: begin
			temp = {{1'b0},A} * {{1'b0},B};
			hi = temp[63:32];
			lo = temp[31:0];
			end
		`ALU_DIV: begin
			/*tempA = (A[31] == 1) ? opposite(A) : A;
			tempB = (B[31] == 1) ? opposite(B) : B;
			hi = tempA % tempB;
			lo = tempA / tempB;
			//hi = (A[31] == B[31]) ? hi : opposite(hi);
			lo = (A[31] == B[31]) ? lo : opposite(lo);*/
			hi = $signed(A) % $signed(B);
			lo = $signed(A) / $signed(B);
			end
		`ALU_DIVU: begin
			hi = {{1'b0},A} % {{1'b0},B};
			lo = {{1'b0},A} / {{1'b0},B};
			end
		default: begin
			hi = hi;
			lo = lo;
			end
	endcase
end

function [31:0] opposite;
	input [31:0] temp;
	//integer i;
	begin
		/*for (i = 0; i < 32; i = i + 1) begin
			opposite[i] = !temp[i];
		end
		opposite = opposite + 1'b1; */
		opposite = ~temp + 1;
	end
endfunction
endmodule
	
`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:09:12 10/27/2022 
// Design Name: 
// Module Name:    NPC 
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
module NPC(
	input clk,
	input reset,
	input req,
	input En,
    input [31:0] PC,
	input [31:0] RF_RD1,
	input [31:0] EPC,
    input isJump,
	input [25:0] Imm, // jal 25:0 beq 15:0 jr [25:21]
    input [2:0] NPC_Op,
    output reg [31:0] NPC,
	output reg [31:0] RA
    );

wire [2:0] option = NPC_Op;
wire [31:0] branch = {{14{Imm[15]}} , {Imm[15:0] , {2{1'b0}}}}; //符号扩展 + imm[15:0] + 00
wire [31:0] jal = {PC[31:28] , Imm , {2{1'b0}}}; // pc[31:28] + instr_index + 00
wire [31:0] j = {PC[31:28] , Imm , {2{1'b0}}};
initial begin
	NPC <= 32'h00003000;
	RA <= 0;
end
always @(posedge clk) begin 
	if (reset) begin
		NPC <= 32'h00003000;
		RA <= 0;
	end
	else begin
		if (req) begin
			NPC <= 32'h0000_4180;
		end
	else if (En) begin
			case (NPC_Op)
				`other : NPC <= PC + 4;
				`branch : if(isJump) NPC <= PC + branch  ;
					   else NPC <= PC + 4;
				`jal: begin
					NPC <= jal;
					RA <= PC + 4;
					end
				`jr : NPC <= RF_RD1;
				`j : NPC <= j;
				`epc: NPC <= EPC;
				default : NPC <= PC + 4;
				endcase
				end
	end
end	

endmodule
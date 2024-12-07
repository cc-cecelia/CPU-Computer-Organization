`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:42:13 12/16/2022 
// Design Name: 
// Module Name:    BRIDGE 
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
module BRIDGE(
	input [31:0] DM_RD,
	input [31:0] timer0_RD,
	input [31:0] timer1_RD,
	input [31:0] CPU_WD,
	input DIV_Wr,
	input [31:0] addr,
	input [3:0] CPU_Byteen,
	output DM_Wr,
	output [3:0] DM_Byteen,
	output Timer0_Wr,
	output Timer1_Wr,
	output [31:0] DIV_RD,
	output [31:0] DIV_WD
    );

wire hitDM = (32'h0 <= addr && addr <= 32'h0000_2fff) ? 1 : 0;
wire hitTimer0 = (32'h0000_7f00 <= addr && addr <= 32'h0000_7f0b) ? 1 : 0;
wire hitTimer1 = (32'h0000_7f01 <= addr && addr <= 32'h0000_7f1b) ? 1 : 0;

assign DM_Wr = DIV_Wr && hitDM;
assign Timer0_Wr = DIV_Wr && hitTimer0;
assign Timer1_Wr = DIV_Wr && hitTimer1;

assign DM_Byteen = (DM_Wr) ? CPU_Byteen : 4'b0;
assign DIV_RD = (hitDM) ? DM_RD :
				(hitTimer0) ? timer0_RD :
				(hitTimer1) ? timer1_RD : 0 ;
assign DIV_WD = CPU_WD;
endmodule

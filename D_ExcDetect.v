`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:18:02 12/17/2022 
// Design Name: 
// Module Name:    D_ExcDetect 
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
module D_ExcDetect(
	input isD_Exc,
	input [4:0] D_ExcCode,
	input [5:0] opCode,
	output reg isExc,
	output reg [4:0] excCode
    );
wire legal = (opCode == `R 
		   || opCode == `ADDI 
		   || opCode == `ANDI
		   || opCode == `BEQ
		   || opCode == `BNE
		   || opCode == `J
		   || opCode == `JAL
		   || opCode == `LB
		   || opCode == `LH
		   || opCode == `LW
		   || opCode == `LUI
		   || opCode == `ORI
		   || opCode == `MFHI
		   || opCode == `MFLO
		   || opCode == `MTHI
		   || opCode == `MTLO
		   || opCode == `SB
		   || opCode == `SH
		   || opCode == `SW);
always @(*) begin
	if (isD_Exc) begin
		isExc <= 1;
		excCode <= D_ExcCode;
	end
	else begin
		if (!legal) begin
			isExc <= 1;
			excCode <= 10;
		end	
		else begin
			isExc <= 0;
		end
	end
end
endmodule

`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:31:56 12/17/2022 
// Design Name: 
// Module Name:    IF_ExcDetect 
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
module IF_ExcDetect(
	input [31:0] PC,
	output reg isExc,
	output reg [4:0] excCode
    );
always @(*) begin
	if ((32'h00003000 > PC || PC > 32'h00006ffc) || (PC[1:0] != 0)) begin
		isExc = 1;
		excCode = 4;
	end
	else begin
		isExc = 0;
	end
end

endmodule

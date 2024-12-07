`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:49:16 10/28/2022 
// Design Name: 
// Module Name:    GRF 
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
module GRF(
	input clk,
	input reset,
	input WE,
	input [31:0] WD,
	input [4:0] A1,
	input [4:0] A2,
	input [4:0] A3,
	input [31:0] WPC,
	output [31:0] RD1,
	output [31:0] RD2
    );
reg [31:0] register [31:0];
assign RD1 = register[A1];
assign RD2 = register[A2];
integer i;
wire zero = 0;

initial begin
	for (i = 0; i < 32 ; i = i + 1) begin
		register[i] = 0;
	end
end

always @(posedge clk) begin
	if (reset) begin
		for (i = 0; i < 32; i = i + 1) begin
		register[i] = 0;
		end
	end
	else begin 
		if(WE) begin
			/*if (A3 == 0) begin
				//$display("@%h: $%d <= %h", WPC, A3, 0);
				$display("%d@%h: $%d <= %h", $time, WPC, A3, 0 );
				end*/
			//else begin
				register[A3] <= WD;
				//$display("%d@%h: $%d <= %h", $time, WPC, A3, WD);
				//$display("@%h: $%d <= %h", WPC, A3, WD);
				//end
		end
	end
end

endmodule
	
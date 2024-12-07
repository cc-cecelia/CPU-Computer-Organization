`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:12:49 12/17/2022 
// Design Name: 
// Module Name:    M_ExcDetect 
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
module M_ExcDetect(
    input isOverflow,
	input isE_Exc,
	input [31:0] AO_M,
	input [4:0] E_ExcCode,
    input [1:0] loadType,
    input [1:0] storeType,
	output reg isExc,
	output reg [4:0] excCode
    );
wire isBeyond = !((32'h0000_7f20 <= AO_M && AO_M <= 32'h0000_7f23) 
			  ||(32'h0000_7f10 <= AO_M && AO_M <= 32'h0000_7f1b)
			  ||(32'h0000_7f00 <= AO_M && AO_M <= 32'h0000_7f0b)
			  ||(32'h0000_0000 <= AO_M && AO_M <= 32'h0000_2fff));

wire getTimer = (32'h0000_7f10 <= AO_M && AO_M <= 32'h0000_7f1b)
			  ||(32'h0000_7f00 <= AO_M && AO_M <= 32'h0000_7f0b);

always @(*) begin
	if (isE_Exc) begin
		isExc <= isE_Exc;
		excCode <= E_ExcCode;
		end
	else if (loadType == `NONE_Load || storeType == `NONE_Store) begin
		isExc = 0;
		end
	else begin
		case(loadType) 
			`lw : begin
				if (AO_M[1:0] != 0 || isOverflow || isBeyond) begin
					isExc <= 1;
					excCode <= 4;
					end
				else begin
					isExc = 0;
					end
				end
			`lh : begin
				if (AO_M[0] != 0 || isOverflow || isBeyond || getTimer) begin
					isExc <= 1;
					excCode <= 4;
				end
				else begin
					isExc <= 0;
					end
				end
			`lb : begin
				if (isOverflow || isBeyond || getTimer) begin
					isExc <= 1;
					excCode <= 4;
				end
				else begin
					isExc <= 0;
					end
				end
		endcase
		case (storeType) 
			`sw : begin
				if ((AO_M[1:0] != 0 || isOverflow || isBeyond || getTimer) && AO_M[3:2] == 2'd2) begin
					isExc <= 1;
					excCode <= 4;
					end
				else begin
					isExc <= 0;
					end
				end
			`sh : begin
				if (AO_M[0] != 0 || isOverflow || isBeyond || getTimer) begin
					isExc <= 1;
					excCode <= 4;
					end
				else begin
					isExc <= 0;
					end
				end
			`sb : begin
				if (isOverflow || isBeyond || getTimer) begin
					isExc <= 1;
					excCode <= 4;
				end
				else begin
					isExc <= 0;
					end	
				end
		endcase
	end
end
endmodule

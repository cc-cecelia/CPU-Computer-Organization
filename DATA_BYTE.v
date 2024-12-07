`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:21:49 11/20/2022 
// Design Name: 
// Module Name:    DATA_BYTE 
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
module DATA_BYTE(
	input [1:0] type,
	input [31:0] DM_RD,
	input [31:0] tempWD,//V2_M
	input [1:0] lowAddr,
    output reg [3:0] m_data_byteen,
	output reg [31:0] DM_WD
    );
always @(*) begin
	DM_WD = DM_RD;
	case (type)
		`sw : begin
				m_data_byteen = 4'b1111;
				DM_WD = tempWD;
				end
		`sh : begin
			   if (lowAddr[1] == 0) begin
				m_data_byteen = 4'b0011;
				DM_WD[15:0] = tempWD[15:0];
				end
			   else begin
				m_data_byteen = 4'b1100;
				DM_WD[31:16] = tempWD[15:0];
				end
			    end
		`sb : begin
			case(lowAddr)
				0 : begin
					m_data_byteen = 4'b0001;
					DM_WD[7:0] = tempWD[7:0];
					end
				1 : begin
					m_data_byteen = 4'b0010;
					DM_WD[15:8] = tempWD[7:0];
					end
				2 : begin
					m_data_byteen = 4'b0100;
					DM_WD[23:16] = tempWD[7:0];
					end
				3 : begin
					m_data_byteen = 4'b1000;
					DM_WD[31:24] = tempWD[7:0];
					end
			endcase
			end
		default : m_data_byteen = 0;
	endcase
end


endmodule

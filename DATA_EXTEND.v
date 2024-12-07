`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:19:40 11/20/2022 
// Design Name: 
// Module Name:    DATA_EXTEND 
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
module DATA_EXTEND(
    input [1:0] A,
    input [31:0] Din, 
    input [1:0] loadType,
    output reg [31:0] Dout
    );
wire byteLh = A[1];
wire [1:0] byteLb = A;
	
always @(*) begin
	case (loadType)
		`lw : Dout = Din;
		`lh : if (byteLh == 1) Dout = {{16{Din[31]}},Din[31:16]};
			  else Dout = {{16{Din[15]}}, Din[15:0]};
		`lb : begin
			case(byteLb)
				0: Dout = {{24{Din[7]}},Din[7:0]};
				1: Dout = {{24{Din[15]}},Din[15:8]};
				2: Dout = {{24{Din[23]}},Din[23:16]};
				3: Dout = {{24{Din[31]}},Din[31:24]};
				endcase
			end
		default: Dout = Din;
		endcase
end
endmodule

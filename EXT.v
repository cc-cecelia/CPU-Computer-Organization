`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:19:00 10/28/2022 
// Design Name: 
// Module Name:    EXT 
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
module EXT(
    input [15:0] IM_D,
    input EXT_Sel,
    output [31:0] EXT_Ext
    );
assign EXT_Ext = (EXT_Sel == 0) ? {{16{2'b0}},IM_D} : {{16{IM_D[15]}},IM_D};

endmodule

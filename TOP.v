`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    03:12:02 12/18/2022 
// Design Name: 
// Module Name:    TOP 
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
module mips(
	input clk,                    // 时钟信号
    input reset,                  // 同步复位信号
    input interrupt,              // 外部中断信号
    output [31:0] macroscopic_pc, // 宏观 PC

    output [31:0] i_inst_addr,    // IM 读取地址 （取指 PC）
    input  [31:0] i_inst_rdata,   // IM 读取数据
 
    output [31:0] m_data_addr,    // DM 读写地址
    input  [31:0] m_data_rdata,   // DM 读取数据
    output [31:0] m_data_wdata,   // DM 待写入数据
    output [3 :0] m_data_byteen,  // DM 字节使能信号

    output [31:0] m_int_addr,     // 中断发生器待写入地址
    output [3 :0] m_int_byteen,   // 中断发生器字节使能信号

    output [31:0] m_inst_addr,    // M 级 PC

    output w_grf_we,              // GRF 写使能信号
    output [4 :0] w_grf_addr,     // GRF 待写入寄存器编号
    output [31:0] w_grf_wdata,    // GRF 待写入数据

    output [31:0] w_inst_addr     // W 级 PC
    );
	
wire [5:0] HWInt = {{3{1'b0}},interrupt,IRQ1,IRQ0};
wire [31:0] DIV_RD,DIV_WD, timer1_RD, timer0_RD, CPU_WD;
wire [3:0] DIV_Byteen, CPU_Byteen;
assign m_data_wdata = CPU_WD;
assign m_int_addr = m_data_addr;
assign m_int_byteen = CPU_Byteen;
CPU cpu(
	.clk (clk),
	.reset (reset),
    .i_inst_rdata (i_inst_rdata),
    .m_data_rdata (m_data_rdata),
	.HWInt (HWInt),
    .i_inst_addr (i_inst_addr),
    .m_data_addr (m_data_addr),
    .m_data_wdata (CPU_WD),
    .m_data_byteen (CPU_Byteen),
    .m_inst_addr (m_inst_addr),
    .w_grf_we (w_grf_we),
    .w_grf_addr (w_grf_addr),
    .w_grf_wdata (w_grf_wdata),
    .w_inst_addr (w_inst_addr),
	.macroscopic_pc (macroscopic_pc)
	);

wire DIV_Wr = |CPU_Byteen;

BRIDGE bridge(
	.DM_RD (m_data_rdata),
	.timer0_RD (timer0_RD),
	.timer1_RD (timer1_RD),
	.CPU_WD (CPU_WD),
	.DIV_Wr (DIV_Wr),
	.addr (m_data_addr),
	.CPU_Byteen (CPU_Byteen),
	.DM_Wr (DM_Wr),
	.DM_Byteen (m_data_byteen),
	.Timer0_Wr (Timer0_Wr),
	.Timer1_Wr (Timer1_Wr),
	.DIV_RD (DIV_RD),
	.DIV_WD (DIV_WD)
	);

TC timer0(
	.clk(clk), 
    .reset(reset), 
    .Addr(m_data_addr[31:2]), 
    .WE(Timer0_Wr), 
    .Din(DIV_WD), 
    .Dout(timer0_RD), 
    .IRQ(IRQ0)
	);
	
TC timer1(
	.clk(clk), 
    .reset(reset), 
    .Addr(m_data_addr[31:2]), 
    .WE(Timer1_Wr), 
    .Din(DIV_WD), 
    .Dout(timer1_RD), 
    .IRQ(IRQ1)
	);
endmodule

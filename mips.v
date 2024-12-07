`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:15:06 10/27/2022 
// Design Name: 
// Module Name:    mips 
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
module CPU(
    input clk,
    input reset,
	input [5:0] HWInt,
    input [31:0] i_inst_rdata,
    input [31:0] m_data_rdata,
    output [31:0] i_inst_addr,
    output [31:0] m_data_addr,
    output [31:0] m_data_wdata,
    output [3 :0] m_data_byteen,
    output [31:0] m_inst_addr,
    output w_grf_we,
    output [4:0] w_grf_addr,
    output [31:0] w_grf_wdata,
    output [31:0] w_inst_addr,
	output [31:0] macroscopic_pc // 宏观 PC
    );

assign i_inst_addr = PC ; 
assign m_data_addr = AO_M;
assign m_data_wdata = DM_WD;
assign m_inst_addr = PC_M;
assign w_grf_we = RF_Wr;
assign w_grf_addr = A3_W;
assign w_grf_wdata = (A3_W == 0) 		   ? 0:
					 (RF_WD_Sel == `ALU_O) ? AO_W :
					 (RF_WD_Sel == `DM_D) ? DR_W :
					 (RF_WD_Sel == `RA) ? RA_W :
					 (RF_WD_Sel == `MD) ? MD_W : 
					 (RF_WD_Sel == `C0) ? CP0_W : AO_W;
assign w_inst_addr = PC_W;
assign macroscopic_pc = PC_M;

wire EXT_Sel,DM_Wr,RF_Wr,Stall;
//wire [11:0] OpAddr;
wire [31:0] Instr,PC,RA,RD1,RD2,EXT_Ext,DM_D,ALU_C,HI,LO,Dout,Din;
wire [31:0] RA_D, PC_D,
			V1_E, V2_E, EXT_E, RA_E, PC_E,
			V2_M, AO_M, RA_M, PC_M, MD_M,DM_WD,
			DR_W, AO_W, RA_W, PC_W, MD_W,
			CP0_M, CP0_W, epc;
wire [4:0] RS_D,RT_D,RD_D,A3_E,A3_M,A3_W,RD,RD_E,RD_M;
wire [4:0] excCode_D,excCode_toD,excCode_E,excCode_toE,excCode_M,excCode_toM,excCode_toCP0;
wire [1:0] RF_A3_Sel,storeType,loadType,bType,detectType;
wire [2:0] RF_WD_Sel,ALU_Op,NPC_Op;
wire [3:0] MD_Op,CPU_Byteen;
wire [25:0] IMM_D; 
wire AO_M_For_ALU_A,AO_M_For_ALU_B,DR_W_For_ALU_A,DR_W_For_ALU_B,AO_M_For_V2_M,
	 AO_M_For_rs,AO_M_For_rt,DR_W_For_rs,DR_W_For_rt,AO_W_For_rs,AO_W_For_rt;
wire [5:0] opCode_D;
assign Instr = i_inst_rdata;

NPC npc(
	.clk (clk),  
	.reset (reset),
	.En (!DStall),
	.req (req),
	.PC (PC),
	.RF_RD1 ((RA_E_For_rs == 1) ? RA_E :
			 (AO_M_For_rs == 1) ? AO_M :
			 (MD_M_For_rs == 1) ? MD_M :
			 (RA_M_For_rs == 1) ? RA_M :
			 (DR_W_For_rs == 1) ? DR_W :
			 (CP0_W_For_rs == 1) ? CP0_W :
			 (AO_W_For_rs == 1) ? AO_W :
			 (MD_W_For_rs == 1) ? MD_W :
			 (RA_W_For_rs == 1) ? RA_W : RD1),
	.EPC (epc),
	.isJump (isJump),
	.Imm (IMM_D),
	.NPC_Op (NPC_Op),
	.NPC (PC),
	.RA (RA)
	);
	
IF_ExcDetect IF_Exc(
	.PC (PC),
	.isExc (isExc_toD),
	.excCode (excCode_toD)
	);
	
CONTROLLER controller(
	.clk (clk),
	.reset (reset),
	.instr (NPC_Op == `epc ? 0 : Instr),
	.flush (req),
	.busy (busy),
	.AO_M_For_ALU_A (AO_M_For_ALU_A),
	.AO_M_For_ALU_B (AO_M_For_ALU_B),
	.AO_M_For_V2_M (AO_M_For_V2_M),
	.AO_M_For_rs (AO_M_For_rs),
	.AO_M_For_rt (AO_M_For_rt),
	.MD_M_For_ALU_A (MD_M_For_ALU_A),
	.MD_M_For_ALU_B (MD_M_For_ALU_B),
	.MD_M_For_V2_M (MD_M_For_V2_M),
	.MD_M_For_rs (MD_M_For_rs),
	.MD_M_For_rt (MD_M_For_rt),
	.DR_W_For_rs (DR_W_For_rs),
	.DR_W_For_rt (DR_W_For_rt),
	.CP0_W_For_rs (CP0_W_For_rs),
	.CP0_W_For_rt (CP0_W_For_rt),
	.AO_W_For_rs (AO_W_For_rs), 
	.AO_W_For_rt (AO_W_For_rt),
	.MD_W_For_rs (MD_W_For_rs), 
	.MD_W_For_rt (MD_W_For_rt),
	.DR_W_For_ALU_A (DR_W_For_ALU_A),
	.DR_W_For_ALU_B (DR_W_For_ALU_B),
	.DR_W_For_DM_WD (DR_W_For_DM_WD),
	.DR_W_For_V2_M  (DR_W_For_V2_M),
	.CP0_W_For_ALU_A (CP0_W_For_ALU_A),
	.CP0_W_For_ALU_B (CP0_W_For_ALU_B),
	.CP0_W_For_DM_WD (CP0_W_For_DM_WD),
	.CP0_W_For_V2_M  (CP0_W_For_V2_M),
	.RA_E_For_rs (RA_E_For_rs),
	.RA_E_For_rt (RA_E_For_rt),
	.RA_M_For_rs (RA_M_For_rs),
	.RA_M_For_rt (RA_M_For_rt),
	.RA_W_For_rs (RA_W_For_rs),
	.RA_W_For_rt (RA_W_For_rt),
	.Dstop (DStall),
	//.Estop (EStall),
	.RF_A3_Sel (RF_A3_Sel),
	.RF_WD_Sel (RF_WD_Sel),
	.ALU_B_Sel (ALU_B_Sel),
	.EXT_Sel (EXT_Sel),
	.DM_Wr (DM_Wr),
	.CP0_Wr (CP0_Wr),
	.NPC_Op (NPC_Op),
	.RF_Wr (RF_Wr),
	.ALU_Op (ALU_Op),
	.MD_Op (MD_Op),
	.loadType (loadType),
	.storeType (storeType),
	.bType (bType),
	.detectType (detectType),
	.isBD (isBD),
	.isERET (isERET)
	);
	
regD D(
	.clk (clk),
	.reset (reset || req),
	.En (!DStall),
	.PC_Start (PC),
	.IM25_21 (Instr[25:21]),
	.IM20_16 (Instr[20:16]),
	.IM15_11 (Instr[15:11]),
	.IM25_0 (Instr[25:0]),
	.opCode (Instr[31:26]),
	.ADD4 (PC+8),
	.IFisExc (isExc_toD),
	.excCode_IF (excCode_toD),
	.rs (RS_D),
	.rt (RT_D),
	.rd (RD_D),
	.imm (IMM_D),
	.RA (RA_D),
	.PC (PC_D),
	.isExc (DisExc),
	.excCode (excCode_D),
	.opCode_D (opCode_D)
	);
	
D_ExcDetect D_Exc(
	.isD_Exc (DisExc),
	.D_ExcCode (excCode_D),
	.opCode (opCode_D),
	.isExc (isExc_toE),
	.excCode (excCode_toE)
	);
	
CMP cmp(
	.A ((RA_E_For_rs == 1) ? RA_E :
		(AO_M_For_rs == 1) ? AO_M :
		(MD_M_For_rs == 1) ? MD_M :
		(RA_M_For_rs == 1) ? RA_M :
		(DR_W_For_rs == 1) ? DR_W :
		(CP0_W_For_rs == 1) ? CP0_W :
		(AO_W_For_rs == 1) ? AO_W :
		(MD_W_For_rs == 1) ? MD_W :
		(RA_W_For_rs == 1) ? RA_W : RD1),
		
	.B ((RA_E_For_rt == 1) ? RA_E :
		(MD_M_For_rt == 1) ? MD_M :
		(RA_M_For_rt == 1) ? RA_M :
		(AO_M_For_rt == 1) ? AO_M :
		(DR_W_For_rt == 1) ? DR_W :
		(CP0_W_For_rt == 1) ? CP0_W :
		(AO_W_For_rt == 1) ? AO_W :
		(MD_W_For_rt == 1) ? MD_W :
		(RA_W_For_rt == 1) ? RA_W :RD2),
	.bType (bType),
	.isJump (isJump)
	);
	
GRF grf(
	.clk (clk),
	.reset (reset),
	.WE (RF_Wr),
	.WD ((A3_W == 0) ? 0 :
		 (RF_WD_Sel == `ALU_O) ? AO_W :
		 (RF_WD_Sel == `DM_D) ? DR_W :
		 (RF_WD_Sel == `RA) ? RA_W :
		 (RF_WD_Sel == `MD) ? MD_W :
		 (RF_WD_Sel == `C0) ? CP0_W : AO_W),		 
	.A1 (RS_D),
	.A2 (RT_D),
	.A3 (A3_W),
	.WPC (PC_W),
	.RD1 (RD1),
	.RD2 (RD2)	
	);

EXT ext(
	.IM_D (IMM_D[15:0]),
	.EXT_Sel (EXT_Sel),
	.EXT_Ext (EXT_Ext)
	);

regE E(
	.clk (clk),
	.En (!DStall),
	.reset (reset),
	.clear (DStall || req),
	.RD1 ((RA_E_For_rs == 1) ? RA_E :
		  (AO_M_For_rs == 1) ? AO_M :
		  (MD_M_For_rs == 1) ? MD_M :
		  (RA_M_For_rs == 1) ? RA_M :
		  (DR_W_For_rs == 1) ? DR_W :
		  (AO_W_For_rs == 1) ? AO_W :
		  (MD_W_For_rs == 1) ? MD_W :
		  (RA_W_For_rs == 1) ? RA_W : RD1),
	  
	.RD2 ((RA_E_For_rt == 1) ? RA_E :
		  (MD_M_For_rt == 1) ? MD_M :
		  (RA_M_For_rt == 1) ? RA_M :
		  (AO_M_For_rt == 1) ? AO_M :
		  (DR_W_For_rt == 1) ? DR_W :
		  (AO_W_For_rt == 1) ? AO_W :
		  (MD_W_For_rt == 1) ? MD_W :
		  (RA_W_For_rt == 1) ? RA_W :RD2),
		  
	.A3_D ((RF_A3_Sel == `rt) ? RT_D:
		   (RF_A3_Sel == `rd) ? RD_D:
		   (RF_A3_Sel == `ra   ) ? 5'b11111 : RD_D),////2 31 1[15:11] 0[20:16]
	.RD_D (RD_D),
	.EXT (EXT_Ext),
	.RA_D (RA_D),
	.PC_D (PC_D), 
	.DisExc (isExc_toE),
	.DExcCode (excCode_toE),
	.V1 (V1_E),
	.V2 (V2_E),
	.A3 (A3_E),
	.RD (RD_E),
	.ext (EXT_E),
	.RA (RA_E),
	.PC (PC_E),
	.EisExc (EisExc),
	.EExcCode (excCode_E)
	);	

ALU alu(
	.ALU_A ((AO_M_For_ALU_A == 1) ? AO_M : 
			(MD_M_For_ALU_A == 1) ? MD_M :
			(DR_W_For_ALU_A == 1) ? DR_W :
			(CP0_W_For_ALU_A == 1) ? CP0_W: V1_E),
	.ALU_B ((ALU_B_Sel == `EXT) ? EXT_E : 
			(AO_M_For_ALU_B == 1) ? AO_M :
			(MD_M_For_ALU_B == 1) ? MD_M :
			(DR_W_For_ALU_B == 1) ? DR_W :
			(CP0_W_For_ALU_B == 1) ? CP0_W : V2_E),
	.ALUOp (ALU_Op),
	.ALU_C (ALU_C)
	);

MULTDIV md(
	.clk (clk),
	.reset (reset),
	.A ((AO_M_For_ALU_A == 1) ? AO_M : 
		(MD_M_For_ALU_A == 1) ? MD_M :
		(DR_W_For_ALU_A == 1) ? DR_W :
		(CP0_W_For_ALU_A == 1) ? CP0_W: V1_E),
	.B ((ALU_B_Sel == `EXT) ? EXT_E : 
		(AO_M_For_ALU_B == 1) ? AO_M :
		(MD_M_For_ALU_B == 1) ? MD_M :
		(DR_W_For_ALU_B == 1) ? DR_W :
		(CP0_W_For_ALU_B == 1) ? CP0_W : V2_E),
	.MD_Op (MD_Op),
	.busy (busy),
	.HI (HI),
	.LO (LO)
	);
	
E_ExcDetect E_Exc(
	.isE_Exc (EisExc),
	.E_ExcCode (excCode_E),
	.ALU_A ((AO_M_For_ALU_A == 1) ? AO_M : 
			(MD_M_For_ALU_A == 1) ? MD_M :
			(DR_W_For_ALU_A == 1) ? DR_W :
			(CP0_W_For_ALU_A == 1) ? CP0_W :V1_E),
	.ALU_B ((ALU_B_Sel == `EXT) ? EXT_E : 
			(AO_M_For_ALU_B == 1) ? AO_M :
			(MD_M_For_ALU_B == 1) ? MD_M :
			(DR_W_For_ALU_B == 1) ? DR_W :
			(CP0_W_For_ALU_B == 1) ? CP0_W :V2_E),
	.detectType (detectType),
	.isOverflow (isOverflow_toM),
	.isExc (isExc_toM),
	.excCode (excCode_toM)
);	

regM M(
	.clk (clk),
	.reset (reset || req),
	//.clear (EStall),
	.V2_E ((AO_M_For_V2_M == 1) ? AO_M :
		   (MD_M_For_V2_M == 1) ? MD_M :
		   (DR_W_For_V2_M == 1) ? DR_W :
		   (CP0_W_For_V2_M == 1) ? CP0_W : V2_E),
	.ALU_C (ALU_C),
	.A3_E (A3_E),
	.RD_E (RD_E),
	.RA_E (RA_E),
	.PC_E (PC_E),
	.MD ((MD_Op == `mfhi) ? HI :
		 (MD_Op == `mflo) ? LO : 0),
	.EisExc (isExc_toM),
	.excCode_E (excCode_toM),
	.isOverflow_E (isOverflow_toM),
	.V2 (V2_M),
	.AO (AO_M),
	.A3 (A3_M),
	.RD (RD_M),
	.RA (RA_M),
	.PC (PC_M), 
	.MD_O (MD_M),
	.isExc (MisExc),
	.excCode (excCode_M),
	.isOverflow (isOverflow_M)
	);

M_ExcDetect M_Exc(
	.isOverflow (isOverflow_M),
	.isE_Exc (MisExc),
	.AO_M (AO_M),
	.E_ExcCode (excCode_M),
    .loadType (loadType),
    .storeType (storeType),
	.isExc (isExc_toCP0),
	.excCode (excCode_toCP0)
	);

CP0 cp0(
	.clk (clk),
	.reset (reset),
	.CP0_Wr (CP0_Wr),
	.readReg (RD_M), // mfc0
	.writeReg (RD_M), //mtc0
	.V2_M (V2_M), //mtc0
	.PC (PC_M), //受害指令PC
	.isBD (isBD), //是否是延迟槽
	.isExc (isExc_toCP0),//是否内部异常
	.excCode (excCode_toCP0),
	.HWInt (HWInt), //6个设备中断
	.EXLclear (isERET),
	.epc (epc),
	.req (req),//中断请求 = 内部异常+外部中断
	.CP0out (CP0_M) //mfc0
	);
assign m_data_byteen = (req) ? 0 : CPU_Byteen;	
DATA_BYTE data_byte(
	.type (storeType),
	.DM_RD (m_data_rdata),
	.tempWD ((DR_W_For_DM_WD) ? DR_W : V2_M),
	.lowAddr (AO_M[1:0]),
    .m_data_byteen (CPU_Byteen),
	.DM_WD (DM_WD)
	);
	
DATA_EXTEND data_extend(
	.A (AO_M[1:0]),
	.Din (m_data_rdata),
	.loadType (loadType),
	.Dout (Dout)
	);
	
regW W(
	.clk (clk),
	.reset (reset || req),
	.D (Dout),
	.AO_M (AO_M),
	.A3_M (A3_M),
	.RA_M (RA_M),
	.PC_M (PC_M),
	.MD_M (MD_M),
	.CP0_M (CP0_M),
	.DR (DR_W),
	.AO (AO_W),
	.A3 (A3_W),
	.RA (RA_W),
	.PC (PC_W),
	.MD (MD_W),
	.CP0 (CP0_W)
	);

endmodule
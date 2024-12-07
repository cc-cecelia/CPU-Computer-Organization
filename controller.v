`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:53:51 11/10/2022 
// Design Name: 
// Module Name:    controller 
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
`define RS 0
`define RT 1
`define RSRT 2
`define RD 3
`define DM 4
`define NONE 5
`define HILO 6
`define CP0 7
`include "constants.v"
module CONTROLLER(
	input clk,
	input reset,
	input flush,
    input [31:0] instr,
	input busy,
	output AO_M_For_ALU_A,
	output AO_M_For_ALU_B,
	output AO_M_For_V2_M,
	output MD_M_For_ALU_A,
	output MD_M_For_ALU_B,
	output MD_M_For_V2_M,
	output reg AO_M_For_rs,
	output reg AO_M_For_rt,
	output reg MD_M_For_rs,
	output reg MD_M_For_rt, 
	output reg DR_W_For_rs, 
	output reg DR_W_For_rt,
	output reg CP0_W_For_rs,
	output reg CP0_W_For_rt,
	output reg AO_W_For_rs, 
	output reg AO_W_For_rt,
	output reg MD_W_For_rs,
	output reg MD_W_For_rt,
	output reg DR_W_For_ALU_A, 
	output reg DR_W_For_ALU_B,
	output reg DR_W_For_DM_WD,
	output reg DR_W_For_V2_M,
	output reg CP0_W_For_ALU_A, 
	output reg CP0_W_For_ALU_B,
	output reg CP0_W_For_DM_WD,
	output reg CP0_W_For_V2_M,
	output reg RA_E_For_rs,
	output reg RA_E_For_rt,
	output reg RA_M_For_rs,
	output reg RA_M_For_rt,
	output reg RA_W_For_rs,
	output reg RA_W_For_rt,
	output reg Dstop,
	//output reg Estop,
	output [1:0] RF_A3_Sel, //2 31 1[15:11] 0[20:16]
    output [2:0] RF_WD_Sel, //2 npc.pc4 1 DM.RD 0 ALU.C
    output ALU_B_Sel, //1 rf.rd2 0 ext.ext
    output EXT_Sel, //1 signed 0 zero
    output DM_Wr,
	output CP0_Wr,
    output [2:0] NPC_Op, //3 jr 2 jal 1 beq 0 other
	output [1:0] bType,
    output RF_Wr,
	output [2:0] ALU_Op,
	output [3:0] MD_Op,
	output [1:0] loadType,
	output [1:0] storeType,
	output [1:0] detectType,
	output isBD,
	output isERET
    );
reg [31:0] Dinstr, Einstr, Minstr, Winstr;
reg [2:0] Dread,Dwrite,Eread,Ewrite,Mread,Mwrite,Wread,Wwrite;
reg [4:0] Drs, Drt, Drd, Ers, Ert, Erd, Mrs, Mrt, Mrd, Wrs, Wrt, Wrd;
reg DisLW,EisLW,MisLW,WisLW,DisJ,EisJ,MisJ,WisJ,
	DisCP0,EisCP0,MisCP0,WisCP0,DisMTC0,EisMTC0,MisMTC0,WisMTC0,DisERET,EisERET,MisERET,WisERET,
	DisPreBD,DisBD,EisBD,MisBD;
reg [1:0] DrsUse,DrtUse,Dnew,Enew,Mnew;
reg rsStopByE,rtStopByE,rsStopByM,rtStopByM,eretStopByMTC0;
/*************ctrl**********************/
reg [1:0] DRF_A3_Sel,
		  
		  DdetectType,EdetectType,
		  DloadType,EloadType,MloadType,
		  DstoreType,EstoreType,MstoreType;
		  
reg [2:0] DNPC_Op,
		  DRF_WD_Sel,ERF_WD_Sel,MRF_WD_Sel,WRF_WD_Sel,
		  DALU_Op,EALU_Op;
reg [3:0]		  DMD_Op,EMD_Op,MMD_Op,WMD_Op;
		  
reg DRF_Wr,ERF_Wr,MRF_Wr,WRF_Wr,
	DALU_B_Sel,EALU_B_Sel,
	DEXT_Sel,
	DbType,
	DDM_Wr,EDM_Wr,MDM_Wr,WDM_Wr,
	DCP0_Wr,ECP0_Wr,MCP0_Wr,WCP0_Wr,
	DAO_M_For_ALU_A,DAO_M_For_ALU_B,EAO_M_For_ALU_A,EAO_M_For_ALU_B,
	DMD_M_For_ALU_A,DMD_M_For_ALU_B,EMD_M_For_ALU_A,EMD_M_For_ALU_B,
	DAO_M_For_V2_M,EAO_M_For_V2_M,
	DMD_M_For_V2_M,EMD_M_For_V2_M;
	
assign RF_A3_Sel = DRF_A3_Sel;
assign RF_WD_Sel = WRF_WD_Sel;
assign ALU_B_Sel = EALU_B_Sel;
assign EXT_Sel = DEXT_Sel;
assign DM_Wr = MDM_Wr;
assign CP0_Wr = MCP0_Wr;
assign NPC_Op = DNPC_Op;
assign bType = DbType;
assign RF_Wr = WRF_Wr;
assign ALU_Op = EALU_Op;
assign MD_Op = EMD_Op;
assign loadType = MloadType;
assign storeType = MstoreType;
assign detectType = EdetectType;
assign isBD = MisBD;
assign isERET = MisERET;
assign AO_M_For_ALU_A = EAO_M_For_ALU_A;
assign AO_M_For_ALU_B = EAO_M_For_ALU_B;
assign AO_M_For_V2_M = EAO_M_For_V2_M;
assign MD_M_For_ALU_A = EMD_M_For_ALU_A;
assign MD_M_For_ALU_B = EMD_M_For_ALU_B;
assign MD_M_For_V2_M = EMD_M_For_V2_M;

initial begin
	DAO_M_For_ALU_A <= 0;
	DAO_M_For_ALU_B <= 0;
	DMD_M_For_ALU_A <= 0;
	DMD_M_For_ALU_B <= 0;
	EAO_M_For_ALU_A <= 0;
	EAO_M_For_ALU_B <= 0;
	EMD_M_For_ALU_A <= 0;
	EMD_M_For_ALU_B <= 0;
	DAO_M_For_V2_M <= 0;
	EAO_M_For_V2_M <= 0;
	DMD_M_For_V2_M <= 0;
	EMD_M_For_V2_M <= 0;
	AO_M_For_rs <= 0;
	AO_M_For_rt <= 0;
	MD_M_For_rs <= 0;
	MD_M_For_rt <= 0;
	DR_W_For_rs <= 0;
	DR_W_For_rt <= 0;
	AO_W_For_rs <= 0;
	AO_W_For_rt <= 0;
	MD_W_For_rs <= 0;
	MD_W_For_rt <= 0;
	DR_W_For_ALU_A <= 0;
	DR_W_For_ALU_B <= 0;
	RA_M_For_rs <= 0;
	RA_M_For_rt <=0;
	RA_W_For_rs <= 0;
	RA_W_For_rt <=0;
	Dstop <= 0;
	//Estop <= 0;
	Dinstr <= 0;
	Einstr <= 0;
	Minstr <= 0;
	Winstr <= 0;
	Drs <= 0;
	Ers <= 0;
	Mrs <= 0;
	Wrs <= 0;
	Drt <= 0;
	Ert <= 0;
	Mrt <= 0;
	Wrt <= 0;
	Drd <= 0;
	Erd <= 0;
	Mrd <= 0;
	Wrd <= 0;
	Dwrite <= 0;
	Ewrite <= 0;
	Mwrite <= 0;
	Wwrite <= 0;
	EisLW <= 0;
	MisLW <= 0;
	WisLW <= 0;
	EisCP0 <= 0;
	MisCP0 <= 0;
	WisCP0 <= 0;
	Dnew <= 0;
	Enew <= 0;
	Mnew <= 0;
	DrsUse <= 0;
	DrtUse <= 0;	
	DMD_Op <= 0;
	EMD_Op <= 0;
	MMD_Op <= 0;
	WMD_Op <= 0;
end
always @(posedge clk) begin
	if (reset) begin
		Dinstr <= 0;
		Einstr <= 0;
		Minstr <= 0;
		Winstr <= 0;
		Dwrite <= `NONE;
		Ewrite <= `NONE;
		Mwrite <= `NONE;
		Wwrite <= `NONE;
		Dread <= `NONE;
		Eread <= `NONE;
		Mread <= `NONE;
		Wread <= `NONE;
		end
	else if (flush) begin
		Dinstr <= 0;
		Einstr <= 0;
		Minstr <= 0;
		Winstr <= 0;
		Dwrite <= `NONE;
		Ewrite <= `NONE;
		Mwrite <= `NONE;
		Wwrite <= `NONE;
		Dread <= `NONE;
		Eread <= `NONE;
		Mread <= `NONE;
		Wread <= `NONE;
		DDM_Wr <= 0;
		EDM_Wr <= 0;
		MDM_Wr <= 0;
		DCP0_Wr <= 0;
		ECP0_Wr <= 0;
		MCP0_Wr <= 0;
		DRF_Wr <= 0;
		ERF_Wr <= 0;
		MRF_Wr <= 0;
		WRF_Wr <= 0;
		DloadType <= `NONE_Load;
		DstoreType <= `NONE_Store;
		EloadType <= `NONE_Load;
		EstoreType <= `NONE_Store;
		MloadType <= `NONE_Load;
		MstoreType <= `NONE_Store;
		Dstop <= 0;
	end
	else begin 
		if (Dstop == 0) begin
			Dinstr <= instr;
			DisBD <= (DisPreBD) ? 1 : 0;
			Einstr <= Dinstr;
			Ers <= Drs;
			Ert <= Drt;
			Erd <= Drd;
			Eread <= Dread;
			Ewrite <= Dwrite;
			EisLW <= DisLW;
			EisCP0 <= DisCP0;
			EisBD <= DisBD;
			EisERET <= DisERET;
			EisJ <= DisJ;
			Enew <= (Dnew == 0) ? 0 : Dnew - 1;
			ERF_WD_Sel <= DRF_WD_Sel;
			EALU_B_Sel <= DALU_B_Sel;
			EDM_Wr <= DDM_Wr;
			ECP0_Wr <= DCP0_Wr;
			ERF_Wr <= DRF_Wr;
			EMD_Op <= DMD_Op;
			EALU_Op <= DALU_Op;
			EstoreType <= DstoreType;
			EloadType <= DloadType;
			EdetectType <= DdetectType;
			EAO_M_For_ALU_A <= DAO_M_For_ALU_A;
			EAO_M_For_ALU_B <= DAO_M_For_ALU_B;
			EAO_M_For_V2_M  <= DAO_M_For_V2_M;
			EMD_M_For_ALU_A <= DMD_M_For_ALU_A;
			EMD_M_For_ALU_B <= DMD_M_For_ALU_B;
			EMD_M_For_V2_M  <= DMD_M_For_V2_M;
			end
		else if (Dstop == 1) begin
			Dinstr <= Dinstr;
			Einstr <= 0;
			Ers <= 0;
			Ert <= 0;
			Eread <= `NONE;
			Ewrite <= `NONE;
			EisLW <= 0;
			EisJ <= 0;
			EisCP0 <= 0;
			EisBD <= 0;
			EisERET <= 0;
			Enew <= 0;
			EALU_B_Sel <= 0;
			EDM_Wr <= 0;
			ECP0_Wr <= 0;
			ERF_Wr <= 0;
			EMD_Op <= `NONE_MD;
			EALU_Op <= 0;
			EloadType <= `NONE_Load;
			EstoreType <= `NONE_Store;
			EdetectType <= `NONE_Detect;
			EAO_M_For_ALU_A <= 0;
			EAO_M_For_ALU_B <= 0;
			EAO_M_For_V2_M <= 0;
			EMD_M_For_ALU_A <= 0;
			EMD_M_For_ALU_B <= 0;
			EMD_M_For_V2_M <= 0;
			end
			
		Mread <= Eread;
		Minstr <= Einstr;
		Mrs <= Ers;
		Mrt <= Ert;	
		Mrd <= Erd;						
		Mwrite <= Ewrite;		
		MisLW <= EisLW;		
		MisJ <= EisJ;
		MisBD <= EisBD;
		MisERET <= EisERET;
		MisCP0 <= EisCP0;
		MMD_Op <= EMD_Op;			
		Mnew <= (Enew == 0) ? 0 : Enew - 1;
		MRF_WD_Sel <= ERF_WD_Sel;							
		MDM_Wr <= EDM_Wr;	
		MCP0_Wr <= ECP0_Wr;
		MRF_Wr <= ERF_Wr;					
		MloadType <= EloadType;
		MstoreType <= EstoreType;
		
		Wread <= Mread;
		
		Winstr <= Minstr;
		
		Wrs <= Mrs;
		
		Wrt <= Mrt;
		
		Wrd <= Mrd;
		
		Wwrite <= Mwrite;
		
		WisLW <= MisLW;
		
		WisJ <= MisJ;
		
		WisCP0 <= MisCP0;
		
		WisERET <= MisERET;
		
		WMD_Op <= MMD_Op;
		
		WRF_WD_Sel <= MRF_WD_Sel;
				
		WRF_Wr <= MRF_Wr;
end
end
always @(*) begin
	decode(Dinstr, Drs, Drt, Drd, Dread, Dwrite, DisLW, DisJ, DisCP0, DisMTC0, DisERET, DrsUse, DrtUse, Dnew,
		   DRF_A3_Sel, DRF_WD_Sel, DALU_B_Sel, DEXT_Sel, DDM_Wr,DCP0_Wr, DNPC_Op, DRF_Wr, 
		   DALU_Op, DMD_Op, DloadType, DstoreType, DbType, DdetectType, DisPreBD);

	DAO_M_For_ALU_A = (!EisJ) && (EMD_Op == `NONE_MD) && ((DrsUse == Enew) && (Enew == 1))
				  && (Dread == `RSRT || Dread == `RS)
				  && ((Ewrite == `RD && Erd == Drs && Erd != 0) || (Ewrite == `RT && Ert == Drs && Ert!= 0));
	
	/*AO_M_For_ALU_A = (!MisJ) && (MMD_Op == `NONE_MD) && ((ErsUse == Mnew) && (Mnew == 1))
				  && (Eread == `RSRT || Eread == `RS)
				  && ((Mwrite == `RD && Mrd == Ers && Mrd != 0) || (Mwrite == `RT && Mrt == Ers && Mrt!= 0));*/
	
	DAO_M_For_ALU_B = (!EisJ) && (EMD_Op == `NONE_MD) && ((DrtUse == Enew) && (Enew == 1))
				  && ((Dread == `RSRT) || (Dread == `RT))
				  && ((Ewrite == `RD && Erd == Drt && Erd != 0) || (Ewrite == `RT && Ert == Drt && Ert != 0));
	
	DMD_M_For_ALU_A = (EMD_Op == `mfhi || EMD_Op == `mflo)
				  && (Dread == `RSRT || Dread == `RS)
				  && (Ewrite == `RD && Erd == Drs && Erd != 0);

	DMD_M_For_ALU_B = (EMD_Op == `mfhi || EMD_Op == `mflo)
				  && ((Dread == `RSRT) || (Dread == `RT))
				  && (Ewrite == `RD && Erd == Drt && Erd != 0);
	
	RA_E_For_rs = (EisJ)
				  && (Dread == `RSRT || Dread == `RS)
				  && (Ewrite == `RT && Ert == Drs);
				  
	RA_E_For_rt = (EisJ)
				  && ((Dread == `RSRT) || (Dread == `RT))
				  && (Ewrite == `RT && Ert == Drt);
//jal的write是rt			  
	RA_M_For_rs = (MisJ)
				  && (Dread == `RSRT || Dread == `RS)
				  && (Mwrite == `RT && Mrt == Drs)
				  && ((Ewrite == `RD && Erd != Drs) || (Ewrite == `RT && Ert != Drs) || (Ewrite == `NONE) || (Ewrite == `DM) ||(Ewrite == `HILO) || (Mwrite == `CP0));
				  
	RA_M_For_rt = (MisJ)
				  && ((Dread == `RSRT) || (Dread == `RT))
				  && (Mwrite == `RT && Mrt == Drt)
				  && ((Ewrite == `RD && Erd != Drt) || (Ewrite == `RT && Ert != Drt) || (Ewrite == `NONE) ||(Ewrite == `DM)||(Ewrite == `HILO)  || (Mwrite == `CP0));
				  
	RA_W_For_rs = (WisJ)
				  && (Dread == `RSRT || Dread == `RS)
				  && (Wwrite == `RT && Wrt == Drs);
				  
	RA_W_For_rt = (WisJ)
				  && ((Dread == `RSRT) || (Dread == `RT))
				  && (Wwrite == `RT && Wrt == Drt);
				  
//如果D不是sw指令 那么V2的值不会被使用 
	DR_W_For_ALU_A = (WisLW)
				  && (Eread == `RSRT || Eread == `RS)
				  && (Wrt == Ers && Wrt != 0)
				  && (((Mwrite == `RD) && (Mrd != Ers)) || ((Mwrite == `RT) && (Mrt != Ers)) || Mwrite == `NONE || Mwrite == `DM || Mwrite == `HILO || Mwrite == `CP0);
				  
	DR_W_For_ALU_B = (WisLW)
				  && ((Eread == `RSRT) || (Eread == `RT)) 
				  && (Wrt == Ert && Wrt != 0)
				  && (((Mwrite == `RD) && (Mrd != Ert)) || ((Mwrite == `RT) && (Mrt != Ert)) || Mwrite == `NONE || Mwrite == `DM || Mwrite == `HILO || Mwrite == `CP0);
				  
	DR_W_For_V2_M = (WisLW)
				  && ((Eread == `RSRT) || (Eread == `RT))
				  && (Wrt == Ert && Wrt != 0)
				  && (((Mwrite == `RD) && (Mrd != Ert)) || ((Mwrite == `RT) && (Mrt != Ert)) || Mwrite == `NONE || Mwrite == `DM || Mwrite == `HILO || Mwrite == `CP0);

	DR_W_For_DM_WD = (WisLW)
				  && ((Mread ==`RSRT) || (Mread == `RT))
				  && (Wrt == Mrt  && Wrt != 0);
	
	CP0_W_For_ALU_A = (WisCP0)
				  && (Eread == `RSRT || Eread == `RS)
				  && (Wrt == Ers && Wrt != 0)
				  && (((Mwrite == `RD) && (Mrd != Ers)) || ((Mwrite == `RT) && (Mrt != Ers)) || Mwrite == `NONE || Mwrite == `DM || Mwrite == `HILO || Mwrite == `CP0);
				  
	CP0_W_For_ALU_B = (WisCP0)
				  && ((Eread == `RSRT) || (Eread == `RT))
				  && (Wrt == Ert && Wrt != 0)
				  && (((Mwrite == `RD) && (Mrd != Ert)) || ((Mwrite == `RT) && (Mrt != Ert)) || Mwrite == `NONE || Mwrite == `DM || Mwrite == `HILO || Mwrite == `CP0);
				  
	CP0_W_For_V2_M = (WisCP0)
				  && ((Eread == `RSRT) || (Eread == `RT))
				  && (Wrt == Ert && Wrt != 0)
				  && (((Mwrite == `RD) && (Mrd != Ert)) || ((Mwrite == `RT) && (Mrt != Ert)) || Mwrite == `NONE || Mwrite == `DM || Mwrite == `HILO || Mwrite == `CP0);

	CP0_W_For_DM_WD = (WisCP0)
				  && ((Mread ==`RSRT) || (Mread == `RT))
				  && (Wrt == Mrt  && Wrt != 0);
	
	
	DAO_M_For_V2_M =  (!EisJ) && (!EisLW) && (EMD_Op == `NONE_MD)
				  && (DrtUse >= Enew)
				  && ((Dread == `RSRT) || (Dread == `RT))
				  && ((Ewrite == `RD && Erd == Drt && Erd != 0) || (Ewrite == `RT && Ert == Drt && Ert != 0));
	
	DMD_M_For_V2_M = (EMD_Op == `mfhi || EMD_Op == `mflo)
				  && (DrtUse >= Enew)
				  && (Dread == `RSRT || Dread == `RT)
				  && (Ewrite == `RD && Erd == Drt && Erd != 0);
	
	//jal : 
	AO_M_For_rs = (!MisJ) && (Mnew == 0) && (MMD_Op == `NONE_MD)
	           && (Dread == `RSRT || Dread == `RS)
			   && ((Mwrite == `RD && Mrd == Drs && Mrd != 0) || (Mwrite == `RT && Mrt == Drs && Mrt != 0))			
			   && ((Ewrite == `RD && Erd != Drs) || (Ewrite == `RT && Ert != Drs) || Ewrite == `NONE || Ewrite == `DM || Ewrite == `HILO);
	
	MD_M_For_rs = (MMD_Op == `mfhi || MMD_Op == `mflo)
			   && (Dread == `RSRT || Dread == `RS)
			   && (Mwrite == `RD && Mrd == Drs && Mrd != 0)			
			   && ((Ewrite == `RD && Erd != Drs) || (Ewrite == `RT && Ert != Drs) || Ewrite == `NONE || Ewrite == `DM || Ewrite == `HILO);
			   
	AO_M_For_rt = (!MisJ) && (Mnew == 0) && (MMD_Op == `NONE_MD) && (!MisLW)
			   && ((Dread == `RSRT) || (Dread == `RT))
			   && ((Mwrite == `RD && Mrd == Drt && Mrd != 0) || (Mwrite == `RT && Mrt == Drt && Mrt != 0))
			   && ((Ewrite == `RD && Erd != Drt) || (Ewrite == `RT && Ert != Drt) || Ewrite == `NONE || Ewrite == `DM || Ewrite == `HILO);

	MD_M_For_rt = (MMD_Op == `mfhi || MMD_Op == `mflo)
			   && ((Dread == `RSRT) || (Dread == `RT))
			   && (Mwrite == `RD && Mrd == Drt && Mrd != 0)		
			   && ((Ewrite == `RD && Erd != Drt) || (Ewrite == `RT && Ert != Drt) || Ewrite == `NONE || Ewrite == `DM || Ewrite == `HILO);

	DR_W_For_rs = (WisLW)
			   && (Dread == `RSRT || Dread == `RS)
			   && (Wrt == Drs && Wrt != 0);
	
	DR_W_For_rt = (WisLW)
			   && ((Dread == `RSRT) || (Dread == `RT))
			   && (Wrt == Drt && Wrt != 0);
	
	CP0_W_For_rs = (WisCP0)
			   && (Dread == `RSRT || Dread == `RS)
			   && (Wrt == Drs && Wrt != 0);
	
	CP0_W_For_rt = (WisCP0)
			   && ((Dread == `RSRT) || (Dread == `RT))
			   && (Wrt == Drt && Wrt != 0);
	
	AO_W_For_rs = (!WisLW && !WisJ && WMD_Op == `NONE_MD)
			   && (Dread == `RSRT || Dread == `RS)
			   && ((Wwrite == `RD && Wrd == Drs && Wrd !=0 ) || (Wwrite == `RT && Wrt == Drs && Wrt != 0));
	
	MD_W_For_rs = (WMD_Op == `mfhi || WMD_Op == `mflo)
			   && (Dread == `RSRT || Dread == `RS)
			   && (Wwrite == `RD && Wrd == Drs && Wrd !=0 );
	
	AO_W_For_rt = (!WisLW && !WisJ && WMD_Op == `NONE_MD)
			   && ((Dread == `RSRT) || (Dread == `RT))
			   && ((Wwrite == `RD && Wrd == Drt && Wrd != 0) || (Wwrite == `RT && Wrt == Drt && Wrt != 0));
	
	MD_W_For_rt = (WMD_Op == `mfhi || WMD_Op == `mflo)
			   && ((Dread == `RSRT) || (Dread == `RT))
			   && (Wwrite == `RD && Wrd == Drt && Wrd !=0 );
			   
	rsStopByE = (Dread == `RSRT || Dread == `RS) 
			 && (Enew > DrsUse) 
			 && ((Ewrite == `RD && Erd == Drs && Erd != 0 ) || (Ewrite == `RT && Ert == Drs && Ert != 0));
			 
	rsStopByM = (Dread == `RSRT || Dread == `RS) 
			 && (Mnew > DrsUse)
			 && ((Mwrite == `RD && Mrd == Drs && Mrd != 0 ) || (Mwrite == `RT && Mrt == Drs && Mrt != 0));
	
	rtStopByE = (Dread == `RSRT)
			 && (Enew > DrtUse)
			 && ((Ewrite == `RD && Erd == Drt && Erd != 0) || (Ewrite == `RT && Ert == Drt && Ert != 0));
	
	rtStopByM = (Dread == `RSRT)
			 && (Mnew > DrtUse)
			 && ((Mwrite == `RD && Mrd == Drt && Mrd != 0) || (Mwrite == `RT && Mrt == Drt & Mrt != 0));
	
	eretStopByMTC0 = (DisERET) 
			 && ((EisMTC0 && Erd == `EPC) || (MisMTC0 && Mrd == `EPC));
	
	Dstop = (rsStopByE || rsStopByM || rtStopByE || rtStopByM)
		  ||(busy && (DMD_Op == `mfhi || DMD_Op == `mflo || DMD_Op == `mthi || DMD_Op == `mtlo))
		  ||((EMD_Op == `ALU_MULT || EMD_Op == `ALU_MULTU || EMD_Op == `ALU_DIV || EMD_Op == `ALU_DIVU) && (DMD_Op == `mfhi || DMD_Op == `mflo || DMD_Op == `mthi || DMD_Op == `mtlo))
		  || eretStopByMTC0;
	
end

task decode;
	input [31:0] Instr;
	output [4:0] rs;
	output [4:0] rt;
	output [4:0] rd;
	output [2:0] read;
	output [2:0] write;
	output isLW;
	output isJ;
	output isCP0;
	output isMTC0;
	output isERET;
	output [1:0] rsUse;
	output [1:0] rtUse;
	output [1:0] new;
	output [1:0] RF_A3_Sel; //2 31 1[15:11] 0[20:16]
    output [2:0] RF_WD_Sel; //2 npc.pc4 1 DM.RD 0 ALU.C
    output ALU_B_Sel; //1 rf.rd2 0 ext.ext
    output EXT_Sel; //1 signed 0 zero
    output DM_Wr;
	output CP0_Wr;
    output [2:0] NPC_Op; //4 j 3 jr 2 jal 1 beq 0 other
    output RF_Wr;
	output [2:0] ALU_Op;
	output [3:0] MD_Op;
	output [1:0] loadType;
	output [1:0] storeType;
	output [1:0] bType;
	output [1:0] detectType;
	output isPreBD;
	//output getNOP;

reg add, sub, And, Or, slt, sltu, lui, addi, andi, ori, addu, subu,
	lb, lh, lw, sb, sh, sw,
	mult, multu, div, divu, mfhi, mflo, mthi, mtlo,
	beq, bne, jal, jr,j,nop,
	mtc0, mfc0, eret, syscall;
reg [5:0] op,func;
reg [4:0] CP0;

begin	
	op = Instr[31:26];
	func = Instr[5:0];
	CP0 = Instr[25:21];
	
	add = (op == `R) && (func == `ADD);
	addu = (op == `R) && (func == `ADDU);
	addi = (op == `ADDI);
	And = (op == `R) && (func == `AND);
	andi = (op == `ANDI);
	sub = (op == `R) && (func == `SUB);
	subu = (op == `R) && (func == `SUBU);
	Or = (op == `R) && (func == `OR);
	ori = (op == `ORI);
	lui = (op == `LUI);
	slt = (op == `R) && (func == `SLT);
	sltu = (op == `R) && (func == `SLTU);
	
	mult = (op == `R) && (func == `MULT);
	multu = (op == `R) && (func == `MULTU);
	div = (op == `R) && (func == `DIV);
	divu = (op == `R) && (func == `DIVU);
	mfhi = (op == `R) && (func == `MFHI);
	mflo = (op == `R) && (func == `MFLO);
	mthi = (op == `R) && (func == `MTHI);
	mtlo = (op == `R) && (func == `MTLO);
	
	beq = (op == `BEQ);
	bne = (op == `BNE);
	
	lb = (op == `LB);
	lh = (op == `LH);
	lw = (op == `LW);
	sb = (op == `SB);
	sh = (op == `SH);
	sw = (op == `SW);
	
	jal = (op == `JAL);
	jr = (op == `R) && (func == `JR);
	j = (op == `J);
	nop = (Instr == 0);
	
	mtc0 = (op == `COP0) && (CP0 == `MTC0);
	mfc0 = (op == `COP0) && (CP0 == `MFC0);
	eret = (op == `COP0) && (func == `ERET);
	syscall = (op == `R) && (func == `SYSCALL);
/***********************************************************************/
	
	rs = Instr[25:21];
	rt = (jal) ? 31 : Instr[20:16];
	rd = Instr[15:11];
	isLW = lw || lh || lb;
	isJ = jal || j;
	
	isPreBD = beq || bne ;
	
	RF_A3_Sel =    					  (ori || lui || lw || addi || andi || mfc0) ? `rt :
				(add || addu || sub || subu	|| And || Or || slt || sltu || mfhi || mflo) ? `rd :
																		(jal) ? `ra : `rt;
										
	RF_WD_Sel = (add || addu || sub || subu || ori || lui || addi || And || andi || Or || slt || sltu) ? `ALU_O :
																					  (lw || lh || lb) ? `DM_D :
																								 (jal) ? `RA : 
																						(mfhi || mflo) ? `MD : 
																								(mfc0) ? `C0 : `ALU_O;
													 
	ALU_B_Sel = (add || sub || addu || subu || beq || Or || And || slt || sltu || mult || multu || div || divu) ? `RF_RD2 : `EXT;
	
	EXT_Sel = (lw || lh || lb || sw || sh || sb || addi) ? `SIGNED : `ZERO;
	
	DM_Wr = sw || sh || sb; 
	
	NPC_Op = (beq || bne) ? `branch :
			 (jal) ? `jal :
			 (jr)  ? `jr  :
			 (j)   ? `j : 
			 (eret)? `epc : `other;
			 

	bType = (beq) ? `beq : 
			(bne) ? `bne : `noneBranch;
			
	RF_Wr = add ||addi || And || andi || slt || sltu || sub || addu|| subu || Or || ori 
			|| lw || lb || lh || lui || jal || addi || mfhi || mflo || mfc0;
	
	MD_Op = (mult ) ? `ALU_MULT :
			(div )  ? `ALU_DIV  : 
			(multu) ? `ALU_MULTU :
			(divu) 	? `ALU_DIVU :
			(mthi)	? `mthi		:
			(mtlo)	? `mtlo		: 
			(mfhi)	? `mfhi		:
			(mflo)	? `mflo		: `NONE_MD;
	
	isCP0 = mfc0;
	isMTC0 = mtc0;
	isERET = eret;
	CP0_Wr = mtc0;
	ALU_Op = (add || addu || lw ||lh || lb || sw || sh || sb || addi) ? `ALU_ADD :
						  (sub || subu || beq) ? `ALU_SUB :
								   (ori || Or) ? `ALU_OR : 
										 (lui) ? `ALU_LUI : 
								 (And || andi) ? `ALU_AND:
										  (slt)? `ALU_SLT: 
										 (sltu)? `ALU_SLTU :`ALU_ADD;
									
	storeType = (sw) ? `sw:
				(sh) ? `sh:
				(sb) ? `sb: `NONE_Store;
				
	loadType = (lw) ? `lw:
			   (lh) ? `lh:
			   (lb) ? `lb : `NONE_Load;
	
	detectType = (add || addi) ? `add :
				 (sub)		   ? `sub : `NONE_Detect;
		    
	
	
	if (add || sub || addu || subu || Or || And || slt || sltu) begin
		read = `RSRT;
		write = `RD;
		rsUse = 1;
		rtUse = 1;
		new = 2;
		end
	else if (ori || addi || andi) begin
		read = `RS;
		write = `RT;
		rsUse = 1;
		new = 2;
		end
	else if (lw || lh || lb) begin
		read = `RS;
		write = `RT;
		rsUse = 1;
		new = 3;
		end
	else if (sw || sh || sb) begin
		read = `RSRT;
		write = `DM;
		rsUse = 1;
		rtUse = 2;
		end
	else if (beq || bne) begin
		read = `RSRT;
		write = `NONE;
		rsUse = 0;
		rtUse = 0;
		end
	else if (lui) begin
		read = `NONE;
		write = `RT;
		rsUse = 1;
		new = 2;
		end
	else if (jal) begin
		read = `NONE;
		write = `RT;
		new = 0;
		end
	else if (jr) begin
		read = `RS;
		write = `NONE;
		rsUse = 0;
		end
	else if (mthi || mtlo) begin
		read = `RS;
		write = `HILO;
		rsUse = 1;
		end
	else if (mult || multu || div || divu) begin
		read = `RSRT;
		write = `HILO;
		rsUse = 1;
		rtUse = 1;
		end
	else if (mfhi || mflo) begin
		read = `HILO;
		write = `RD;
		new = 2;
		end
	else if (mtc0) begin
		read = `RT;
		write = `CP0;
		rtUse = 3;
		new = 3;
	end
	else if (mfc0) begin
		read = `CP0;
		write = `RT;
		//cp0Use = 3;
		new = 3;
	end 
	else if (eret) begin
		read = `CP0;
		write = `NONE;
		//cp0Use = 0;
	end
	else begin
		read = `NONE;
		write = `NONE;
	end	
	
	end
endtask
endmodule 
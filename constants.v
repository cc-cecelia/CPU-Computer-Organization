`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:11:07 11/09/2022 
// Design Name: 
// Module Name:    constants 
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
/*******Instr Code && Func***********/
`define R 6'b000000
`define ADD 6'b100000
`define ADDU 6'b100001
`define ADDI 6'b001000
`define AND 6'b100100
`define ANDI 6'b001100
`define BEQ 6'b 000100
`define BNE 6'b 000101
`define DIV 6'b011010
`define DIVU 6'b011011
`define J 6'b000010
`define JAL 6'b000011
`define JR 6'b001000
`define LB 6'b100000
`define LH 6'b100001
`define LW 6'b100011
`define LUI 6'b001111
`define OR 6'b100101
`define ORI 6'b001101
`define MULT 6'b011000
`define MULTU 6'b011001
`define MFHI 6'b010000
`define MFLO 6'b010010
`define MTHI 6'b010001
`define MTLO 6'b010011
`define SB 6'b101000
`define SH 6'b101001
`define SW 6'b101011
`define SLT 6'b101010
`define SLTU 6'b101011
`define SUB 6'b100010
`define SUBU 6'b100011
`define COP0 6'b010000
`define MFC0 5'b00000
`define MTC0 5'b00100
`define ERET 6'b011000
`define SYSCALL 6'b001100
/***************************/
/*******ALUOp***************/
`define ALU_ADD 0
`define ALU_SUB 1
`define ALU_OR 2
`define ALU_LUI 3
`define ALU_AND 4
`define ALU_SLT 5
`define ALU_SLTU 6
/***************************/
/*******RF_A3_Sel***********/
`define rt 0
`define rd 1
`define ra 2
`define pc 3
/***************************/
/*******RF_WD_Sel***********/
`define ALU_O 0
`define DM_D 1
`define RA 2
`define MD 3
`define C0 4
/***************************/
/******* ALU_B_Sel**********/
`define EXT 0
`define RF_RD2 1
/***************************/
/*******EXT_Sel*************/
`define ZERO 0
`define SIGNED 1
/***************************/
/********NPC_Op*************/
`define other 0
`define branch 1
`define jal 2
`define jr 3
`define j 4
`define epc 5
`define exc 6
/***************************/
/********branchType*********/
`define beq 0
`define bne 1
`define noneBranch 2
/************MD_Op**********/
`define ALU_MULT 0
`define ALU_DIV 1
`define ALU_MULTU 2
`define ALU_DIVU 3
`define mthi 4
`define mtlo 5
`define mfhi 6
`define mflo 7
`define NONE_MD 8
/**************************/
/*********MD_WD_Sel*********/
`define MD_ALU_hi 0
`define MD_ALU_lo 0
`define RD1 1
/***********Load/Store Type********/ 
`define lw 0
`define lh 1
`define lb 2
`define NONE_Load 3
`define sw 0
`define sh 1
`define sb 2
`define NONE_Store 3
/****************************/
/**********detectType********/
`define add 0
`define sub 1
`define NONE_Detect 2
/*****************************/
/***********CP0 regs**********/
`define SR 12
`define Cause 13
`define EPC 14
`define PRID 15
/*****************************/
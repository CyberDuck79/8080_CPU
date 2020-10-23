/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instruction_bus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flavienhenrion <flavienhenrion@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/10 17:06:01 by flavienhenr       #+#    #+#             */
/*   Updated: 2020/05/16 11:17:40 by flavienhenr      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INSTRUCTIONS_BUS_H
# define INSTRUCTIONS_BUS_H

# include "emulator.h"

void	NOP(t_cpu *cpu);		// 0x00
void	LXI_B(t_cpu *cpu);		// 0x01
void	STAX_B(t_cpu *cpu);		// 0x02
void	INX_B(t_cpu *cpu);		// 0x03
void	INR_B(t_cpu *cpu);		// 0x04
void	DCR_B(t_cpu *cpu);		// 0x05
void	MVI_B(t_cpu *cpu);		// 0x06
void	RLC(t_cpu *cpu);		// 0x07
//	NOP 0x08
void	DAD_B(t_cpu *cpu);		// 0x09
void	LDAX_B(t_cpu *cpu);		// 0x0A
void	DCX_B(t_cpu *cpu);		// 0x0B
void	INR_C(t_cpu *cpu);		// 0x0C
void	DCR_C(t_cpu *cpu);		// 0x0D
void	MVI_C(t_cpu *cpu);		// 0x0E
void	RRC(t_cpu *cpu);		// 0x0F
//	NOP 0x10
void	LXI_D(t_cpu *cpu);		// 0x11
void	STAX_D(t_cpu *cpu);		// 0x12
void	INX_D(t_cpu *cpu);		// 0x13
void	INR_D(t_cpu *cpu);		// 0x14
void	DCR_D(t_cpu *cpu);		// 0x15
void	MVI_D(t_cpu *cpu);		// 0x16
void	RAL(t_cpu *cpu);		// 0x17
//	NOP 0x18
void	DAD_D(t_cpu *cpu);		// 0x19
void	LDAX_D(t_cpu *cpu);		// 0x1A
void	DCX_D(t_cpu *cpu);		// 0x1B
void	INR_E(t_cpu *cpu);		// 0x1C
void	DCR_E(t_cpu *cpu);		// 0x1D
void	MVI_E(t_cpu *cpu);		// 0x1E
void	RAR(t_cpu *cpu);		// 0x1F
//	NOP 0x20
void	LXI_H(t_cpu *cpu);		// 0x21
void	SHLD(t_cpu *cpu);		// 0x22
void	INX_H(t_cpu *cpu);		// 0x23
void	INR_H(t_cpu *cpu);		// 0x24
void	DCR_H(t_cpu *cpu);		// 0x25
void	MVI_H(t_cpu *cpu);		// 0x26
void	DAA(t_cpu *cpu);		// 0x27
//	NOP 0x28
void	DAD_H(t_cpu *cpu);		// 0x29
void	LHLD(t_cpu *cpu);		// 0x2A
void	DCX_H(t_cpu *cpu);		// 0x2B
void	INR_L(t_cpu *cpu);		// 0x2C
void	DCR_L(t_cpu *cpu);		// 0x2D
void	MVI_L(t_cpu *cpu);		// 0x2E
void	CMA(t_cpu *cpu);		// 0x2F
//	NOP 0x30
void	LXI_SP(t_cpu *cpu);		// 0x31
void	STA(t_cpu *cpu);		// 0x32
void	INX_SP(t_cpu *cpu);		// 0x33
void	INR_M(t_cpu *cpu);		// 0x34
void	DCR_M(t_cpu *cpu);		// 0x35
void	MVI_M(t_cpu *cpu);		// 0x36
void	STC(t_cpu *cpu);		// 0x37
//	NOP 0x38
void	DAD_SP(t_cpu *cpu);		// 0x39
void	LDA(t_cpu *cpu);		// 0x3A
void	DCX_SP(t_cpu *cpu);		// 0x3B
void	INR_A(t_cpu *cpu);		// 0x3C
void	DCR_A(t_cpu *cpu);		// 0x3D
void	MVI_A(t_cpu *cpu);		// 0x3E
void	CMC(t_cpu *cpu);		// 0x3F
void	MOV_BB(t_cpu *cpu);		// 0x40
void	MOV_BC(t_cpu *cpu);		// 0x41
void	MOV_BD(t_cpu *cpu);		// 0x42
void	MOV_BE(t_cpu *cpu);		// 0x43
void	MOV_BH(t_cpu *cpu);		// 0x44
void	MOV_BL(t_cpu *cpu);		// 0x45
void	MOV_BM(t_cpu *cpu);		// 0x46
void	MOV_BA(t_cpu *cpu);		// 0x47
void	MOV_CB(t_cpu *cpu);		// 0x48
void	MOV_CC(t_cpu *cpu);		// 0x49
void	MOV_CD(t_cpu *cpu);		// 0x4A
void	MOV_CE(t_cpu *cpu);		// 0x4B
void	MOV_CH(t_cpu *cpu);		// 0x4C
void	MOV_CL(t_cpu *cpu);		// 0x4D
void	MOV_CM(t_cpu *cpu);		// 0x4E
void	MOV_CA(t_cpu *cpu);		// 0x4F
void	MOV_DB(t_cpu *cpu);		// 0x50
void	MOV_DC(t_cpu *cpu);		// 0x51
void	MOV_DD(t_cpu *cpu);		// 0x52
void	MOV_DE(t_cpu *cpu);		// 0x53
void	MOV_DH(t_cpu *cpu);		// 0x54
void	MOV_DL(t_cpu *cpu);		// 0x55
void	MOV_DM(t_cpu *cpu);		// 0x56
void	MOV_DA(t_cpu *cpu);		// 0x57
void	MOV_EB(t_cpu *cpu);		// 0x58
void	MOV_EC(t_cpu *cpu);		// 0x59
void	MOV_ED(t_cpu *cpu);		// 0x5A
void	MOV_EE(t_cpu *cpu);		// 0x5B
void	MOV_EH(t_cpu *cpu);		// 0x5C
void	MOV_EL(t_cpu *cpu);		// 0x5D
void	MOV_EM(t_cpu *cpu);		// 0x5E
void	MOV_EA(t_cpu *cpu);		// 0x5F
void	MOV_HB(t_cpu *cpu);		// 0x60
void	MOV_HC(t_cpu *cpu);		// 0x61
void	MOV_HD(t_cpu *cpu);		// 0x62
void	MOV_HE(t_cpu *cpu);		// 0x63
void	MOV_HH(t_cpu *cpu);		// 0x64
void	MOV_HL(t_cpu *cpu);		// 0x65
void	MOV_HM(t_cpu *cpu);		// 0x66
void	MOV_HA(t_cpu *cpu);		// 0x67
void	MOV_LB(t_cpu *cpu);		// 0x68
void	MOV_LC(t_cpu *cpu);		// 0x69
void	MOV_LD(t_cpu *cpu);		// 0x6A
void	MOV_LE(t_cpu *cpu);		// 0x6B
void	MOV_LH(t_cpu *cpu);		// 0x6C
void	MOV_LL(t_cpu *cpu);		// 0x6D
void	MOV_LM(t_cpu *cpu);		// 0x6E
void	MOV_LA(t_cpu *cpu);		// 0x6F
void	MOV_MB(t_cpu *cpu);		// 0x70
void	MOV_MC(t_cpu *cpu);		// 0x71
void	MOV_MD(t_cpu *cpu);		// 0x72
void	MOV_ME(t_cpu *cpu);		// 0x73
void	MOV_MH(t_cpu *cpu);		// 0x74
void	MOV_ML(t_cpu *cpu);		// 0x75
void	HLT(t_cpu *cpu);		// 0x76
void	MOV_MA(t_cpu *cpu);		// 0x77
void	MOV_AB(t_cpu *cpu);		// 0x78
void	MOV_AC(t_cpu *cpu);		// 0x79
void	MOV_AD(t_cpu *cpu);		// 0x7A
void	MOV_AE(t_cpu *cpu);		// 0x7B
void	MOV_AH(t_cpu *cpu);		// 0x7C
void	MOV_AL(t_cpu *cpu);		// 0x7D
void	MOV_AM(t_cpu *cpu);		// 0x7E
void	MOV_AA(t_cpu *cpu);		// 0x7F
void	ADD_B(t_cpu *cpu);		// 0x80
void	ADD_C(t_cpu *cpu);		// 0x81
void	ADD_D(t_cpu *cpu);		// 0x82
void	ADD_E(t_cpu *cpu);		// 0x83
void	ADD_H(t_cpu *cpu);		// 0x84
void	ADD_L(t_cpu *cpu);		// 0x85
void	ADD_M(t_cpu *cpu);		// 0x86
void	ADD_A(t_cpu *cpu);		// 0x87
void	ADC_B(t_cpu *cpu);		// 0x88
void	ADC_C(t_cpu *cpu);		// 0x89
void	ADC_D(t_cpu *cpu);		// 0x8A
void	ADC_E(t_cpu *cpu);		// 0x8B
void	ADC_H(t_cpu *cpu);		// 0x8C
void	ADC_L(t_cpu *cpu);		// 0x8D
void	ADC_M(t_cpu *cpu);		// 0x8E
void	ADC_A(t_cpu *cpu);		// 0x8F
void	SUB_B(t_cpu *cpu);		// 0x90
void	SUB_C(t_cpu *cpu);		// 0x91
void	SUB_D(t_cpu *cpu);		// 0x92
void	SUB_E(t_cpu *cpu);		// 0x93
void	SUB_H(t_cpu *cpu);		// 0x94
void	SUB_L(t_cpu *cpu);		// 0x95
void	SUB_M(t_cpu *cpu);		// 0x96
void	SUB_A(t_cpu *cpu);		// 0x97
void	SSB_B(t_cpu *cpu);		// 0x98
void	SSB_C(t_cpu *cpu);		// 0x99
void	SSB_D(t_cpu *cpu);		// 0x9A
void	SSB_E(t_cpu *cpu);		// 0x9B
void	SSB_H(t_cpu *cpu);		// 0x9C
void	SSB_L(t_cpu *cpu);		// 0x9D
void	SSB_M(t_cpu *cpu);		// 0x9E
void	SSB_A(t_cpu *cpu);		// 0x9F
void	ANA_B(t_cpu *cpu);		// 0xA0
void	ANA_C(t_cpu *cpu);		// 0xA1
void	ANA_D(t_cpu *cpu);		// 0xA2
void	ANA_E(t_cpu *cpu);		// 0xA3
void	ANA_H(t_cpu *cpu);		// 0xA4
void	ANA_L(t_cpu *cpu);		// 0xA5
void	ANA_M(t_cpu *cpu);		// 0xA6
void	ANA_A(t_cpu *cpu);		// 0xA7
void	XRA_B(t_cpu *cpu);		// 0xA8
void	XRA_C(t_cpu *cpu);		// 0xA9
void	XRA_D(t_cpu *cpu);		// 0xAA
void	XRA_E(t_cpu *cpu);		// 0xAB
void	XRA_H(t_cpu *cpu);		// 0xAC
void	XRA_L(t_cpu *cpu);		// 0xAD
void	XRA_M(t_cpu *cpu);		// 0xAE
void	XRA_A(t_cpu *cpu);		// 0xAF
void	ORA_B(t_cpu *cpu);		// 0xB0
void	ORA_C(t_cpu *cpu);		// 0xB1
void	ORA_D(t_cpu *cpu);		// 0xB2
void	ORA_E(t_cpu *cpu);		// 0xB3
void	ORA_H(t_cpu *cpu);		// 0xB4
void	ORA_L(t_cpu *cpu);		// 0xB5
void	ORA_M(t_cpu *cpu);		// 0xB6
void	ORA_A(t_cpu *cpu);		// 0xB7
void	CMP_B(t_cpu *cpu);		// 0xB8
void	CMP_C(t_cpu *cpu);		// 0xB9
void	CMP_D(t_cpu *cpu);		// 0xBA
void	CMP_E(t_cpu *cpu);		// 0xBB
void	CMP_H(t_cpu *cpu);		// 0xBC
void	CMP_L(t_cpu *cpu);		// 0xBD
void	CMP_M(t_cpu *cpu);		// 0xBE
void	CMP_A(t_cpu *cpu);		// 0xBF
void	RNZ(t_cpu *cpu);		// 0xC0
void	POP_B(t_cpu *cpu);		// 0xC1
void	JNZ(t_cpu *cpu);		// 0xC2
void	JMP(t_cpu *cpu);		// 0xC3
void	CNZ(t_cpu *cpu);		// 0xC4
void	PUSH_B(t_cpu *cpu);		// 0xC5
void	ADI(t_cpu *cpu);		// 0xC6
void	RST_0(t_cpu *cpu);		// 0xC7
void	RZ(t_cpu *cpu);			// 0xC8
void	RET(t_cpu *cpu);		// 0xC9
void	JZ(t_cpu *cpu);			// 0xCA
//	NOP 0xCB
void	CZ(t_cpu *cpu);			// 0xCC
void	CALL(t_cpu *cpu);		// 0xCD
void	ACI(t_cpu *cpu);		// 0xCE
void	RST_1(t_cpu *cpu);		// 0xCF
void	RNC(t_cpu *cpu);		// 0xD0
void	POP_D(t_cpu *cpu);		// 0xD1
void	JNC(t_cpu *cpu);		// 0xD2
//  OUT 0xD3
void	CNC(t_cpu *cpu);		// 0xD4
void	PUSH_D(t_cpu *cpu);		// 0xD5
void	SUI(t_cpu *cpu);		// 0xD6
void	RST_2(t_cpu *cpu);		// 0xD7
void	RC(t_cpu *cpu);			// 0xD8
//	NOP 0xD9
void	JC(t_cpu *cpu);			// 0xDA
//  IN 0xDB
void	CC(t_cpu *cpu);			// 0xDC
//	NOP 0xDD
void	SBI(t_cpu *cpu);		// 0xDE
void	RST_3(t_cpu *cpu);		// 0xDF
void	RPO(t_cpu *cpu);		// 0xE0
void	POP_H(t_cpu *cpu);		// 0xE1
void	JPO(t_cpu *cpu);		// 0xE2
void	XTHL(t_cpu *cpu);		// 0xE3
void	CPO(t_cpu *cpu);		// 0xE4
void	PUSH_H(t_cpu *cpu);		// 0xE5
void	ANI(t_cpu *cpu);		// 0xE6
void	RST_4(t_cpu *cpu);		// 0xE7
void	RPE(t_cpu *cpu);		// 0xE8
void	PCHL(t_cpu *cpu);		// 0xE9
void	JPE(t_cpu *cpu);		// 0xEA
void	XCHG(t_cpu *cpu);		// 0xEB
void	CPE(t_cpu *cpu);		// 0xEC
//	NOP 0xED
void	XRI(t_cpu *cpu);		// 0xEE
void	RST_5(t_cpu *cpu);		// 0xEF
void	RP(t_cpu *cpu);			// 0xF0
void	POP_PSW(t_cpu *cpu);	// 0xF1
void	JP(t_cpu *cpu);			// 0xF2
void	DI(t_cpu *cpu);			// 0xF3
void	CP(t_cpu *cpu);			// 0xF4
void	PUSH_PSW(t_cpu *cpu);	// 0xF5
void	ORI(t_cpu *cpu);		// 0xF6
void	RST_6(t_cpu *cpu);		// 0xF7
void	RM(t_cpu *cpu);			// 0xF8
void	SPHL(t_cpu *cpu);		// 0xF9
void	JM(t_cpu *cpu);			// 0xFA
void	EI(t_cpu *cpu);			// 0xFB
void	CM(t_cpu *cpu);			// 0xFC
//	NOP 0xFD
void	CPI(t_cpu *cpu);		// 0xFE
void	RST_7(t_cpu *cpu);		// 0xFF

#endif

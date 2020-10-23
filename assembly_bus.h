/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   assembly_bus.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flavienhenrion <flavienhenrion@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/10 16:55:09 by flavienhenr       #+#    #+#             */
/*   Updated: 2020/05/16 11:16:51 by flavienhenr      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASSEMBLY_BUS_H
# define ASSEMBLY_BUS_H

# include "emulator.h"

//// redo order by instructions address
t_opsize	ASM_NOP(uint8_t *mem);		// 0x00
t_opsize	ASM_LXI_B(uint8_t *mem);	// 0x01
t_opsize	ASM_STAX_B(uint8_t *mem);	// 0x02
t_opsize	ASM_INX_B(uint8_t *mem);	// 0x03
t_opsize	ASM_INR_B(uint8_t *mem);	// 0x04
t_opsize	ASM_DCR_B(uint8_t *mem);	// 0x05
t_opsize	ASM_MVI_B(uint8_t *mem);	// 0x06
t_opsize	ASM_RLC(uint8_t *mem);		// 0x07
//	NOP 0x08
t_opsize	ASM_DAD_B(uint8_t *mem);	// 0x09
t_opsize	ASM_LDAX_B(uint8_t *mem);	// 0x0A
t_opsize	ASM_DCX_B(uint8_t *mem);	// 0x0B
t_opsize	ASM_INR_C(uint8_t *mem);	// 0x0C
t_opsize	ASM_DCR_C(uint8_t *mem);	// 0x0D
t_opsize	ASM_MVI_C(uint8_t *mem);	// 0x0E
t_opsize	ASM_RRC(uint8_t *mem);		// 0x0F
//	NOP 0x10
t_opsize	ASM_LXI_D(uint8_t *mem);	// 0x11
t_opsize	ASM_STAX_D(uint8_t *mem);	// 0x12
t_opsize	ASM_INX_D(uint8_t *mem);	// 0x13
t_opsize	ASM_INR_D(uint8_t *mem);	// 0x14
t_opsize	ASM_DCR_D(uint8_t *mem);	// 0x15
t_opsize	ASM_MVI_D(uint8_t *mem);	// 0x16
t_opsize	ASM_RAL(uint8_t *mem);		// 0x17
//	NOP 0x18
t_opsize	ASM_DAD_D(uint8_t *mem);	// 0x19
t_opsize	ASM_LDAX_D(uint8_t *mem);	// 0x1A
t_opsize	ASM_DCX_D(uint8_t *mem);	// 0x1B
t_opsize	ASM_INR_E(uint8_t *mem);	// 0x1C
t_opsize	ASM_DCR_E(uint8_t *mem);	// 0x1D
t_opsize	ASM_MVI_E(uint8_t *mem);	// 0x1E
t_opsize	ASM_RAR(uint8_t *mem);		// 0x1F
//	NOP 0x20
t_opsize	ASM_LXI_H(uint8_t *mem);	// 0x21
t_opsize	ASM_SHLD(uint8_t *mem);		// 0x22
t_opsize	ASM_INX_H(uint8_t *mem);	// 0x23
t_opsize	ASM_INR_H(uint8_t *mem);	// 0x24
t_opsize	ASM_DCR_H(uint8_t *mem);	// 0x25
t_opsize	ASM_MVI_H(uint8_t *mem);	// 0x26
t_opsize	ASM_DAA(uint8_t *mem);		// 0x27
//	NOP 0x28
t_opsize	ASM_DAD_H(uint8_t *mem);	// 0x29
t_opsize	ASM_LHLD(uint8_t *mem);		// 0x2A
t_opsize	ASM_DCX_H(uint8_t *mem);	// 0x2B
t_opsize	ASM_INR_L(uint8_t *mem);	// 0x2C
t_opsize	ASM_DCR_L(uint8_t *mem);	// 0x2D
t_opsize	ASM_MVI_L(uint8_t *mem);	// 0x2E
t_opsize	ASM_CMA(uint8_t *mem);		// 0x2F
//	NOP 0x30
t_opsize	ASM_LXI_SP(uint8_t *mem);	// 0x31
t_opsize	ASM_STA(uint8_t *mem);		// 0x32
t_opsize	ASM_INX_SP(uint8_t *mem);	// 0x33
t_opsize	ASM_INR_M(uint8_t *mem);	// 0x34
t_opsize	ASM_DCR_M(uint8_t *mem);	// 0x35
t_opsize	ASM_MVI_M(uint8_t *mem);	// 0x36
t_opsize	ASM_STC(uint8_t *mem);		// 0x37
//	NOP 0x38
t_opsize	ASM_DAD_SP(uint8_t *mem);	// 0x39
t_opsize	ASM_LDA(uint8_t *mem);		// 0x3A
t_opsize	ASM_DCX_SP(uint8_t *mem);	// 0x3B
t_opsize	ASM_INR_A(uint8_t *mem);	// 0x3C
t_opsize	ASM_DCR_A(uint8_t *mem);	// 0x3D
t_opsize	ASM_MVI_A(uint8_t *mem);	// 0x3E
t_opsize	ASM_CMC(uint8_t *mem);		// 0x3F
t_opsize	ASM_MOV_BB(uint8_t *mem);	// 0x40
t_opsize	ASM_MOV_BC(uint8_t *mem);	// 0x41
t_opsize	ASM_MOV_BD(uint8_t *mem);	// 0x42
t_opsize	ASM_MOV_BE(uint8_t *mem);	// 0x43
t_opsize	ASM_MOV_BH(uint8_t *mem);	// 0x44
t_opsize	ASM_MOV_BL(uint8_t *mem);	// 0x45
t_opsize	ASM_MOV_BM(uint8_t *mem);	// 0x46
t_opsize	ASM_MOV_BA(uint8_t *mem);	// 0x47
t_opsize	ASM_MOV_CB(uint8_t *mem);	// 0x48
t_opsize	ASM_MOV_CC(uint8_t *mem);	// 0x49
t_opsize	ASM_MOV_CD(uint8_t *mem);	// 0x4A
t_opsize	ASM_MOV_CE(uint8_t *mem);	// 0x4B
t_opsize	ASM_MOV_CH(uint8_t *mem);	// 0x4C
t_opsize	ASM_MOV_CL(uint8_t *mem);	// 0x4D
t_opsize	ASM_MOV_CM(uint8_t *mem);	// 0x4E
t_opsize	ASM_MOV_CA(uint8_t *mem);	// 0x4F
t_opsize	ASM_MOV_DB(uint8_t *mem);	// 0x50
t_opsize	ASM_MOV_DC(uint8_t *mem);	// 0x51
t_opsize	ASM_MOV_DD(uint8_t *mem);	// 0x52
t_opsize	ASM_MOV_DE(uint8_t *mem);	// 0x53
t_opsize	ASM_MOV_DH(uint8_t *mem);	// 0x54
t_opsize	ASM_MOV_DL(uint8_t *mem);	// 0x55
t_opsize	ASM_MOV_DM(uint8_t *mem);	// 0x56
t_opsize	ASM_MOV_DA(uint8_t *mem);	// 0x57
t_opsize	ASM_MOV_EB(uint8_t *mem);	// 0x58
t_opsize	ASM_MOV_EC(uint8_t *mem);	// 0x59
t_opsize	ASM_MOV_ED(uint8_t *mem);	// 0x5A
t_opsize	ASM_MOV_EE(uint8_t *mem);	// 0x5B
t_opsize	ASM_MOV_EH(uint8_t *mem);	// 0x5C
t_opsize	ASM_MOV_EL(uint8_t *mem);	// 0x5D
t_opsize	ASM_MOV_EM(uint8_t *mem);	// 0x5E
t_opsize	ASM_MOV_EA(uint8_t *mem);	// 0x5F
t_opsize	ASM_MOV_HB(uint8_t *mem);	// 0x60
t_opsize	ASM_MOV_HC(uint8_t *mem);	// 0x61
t_opsize	ASM_MOV_HD(uint8_t *mem);	// 0x62
t_opsize	ASM_MOV_HE(uint8_t *mem);	// 0x63
t_opsize	ASM_MOV_HH(uint8_t *mem);	// 0x64
t_opsize	ASM_MOV_HL(uint8_t *mem);	// 0x65
t_opsize	ASM_MOV_HM(uint8_t *mem);	// 0x66
t_opsize	ASM_MOV_HA(uint8_t *mem);	// 0x67
t_opsize	ASM_MOV_LB(uint8_t *mem);	// 0x68
t_opsize	ASM_MOV_LC(uint8_t *mem);	// 0x69
t_opsize	ASM_MOV_LD(uint8_t *mem);	// 0x6A
t_opsize	ASM_MOV_LE(uint8_t *mem);	// 0x6B
t_opsize	ASM_MOV_LH(uint8_t *mem);	// 0x6C
t_opsize	ASM_MOV_LL(uint8_t *mem);	// 0x6D
t_opsize	ASM_MOV_LM(uint8_t *mem);	// 0x6E
t_opsize	ASM_MOV_LA(uint8_t *mem);	// 0x6F
t_opsize	ASM_MOV_MB(uint8_t *mem);	// 0x70
t_opsize	ASM_MOV_MC(uint8_t *mem);	// 0x71
t_opsize	ASM_MOV_MD(uint8_t *mem);	// 0x72
t_opsize	ASM_MOV_ME(uint8_t *mem);	// 0x73
t_opsize	ASM_MOV_MH(uint8_t *mem);	// 0x74
t_opsize	ASM_MOV_ML(uint8_t *mem);	// 0x75
t_opsize	ASM_HLT(uint8_t *mem);		// 0x76
t_opsize	ASM_MOV_MA(uint8_t *mem);	// 0x77
t_opsize	ASM_MOV_AB(uint8_t *mem);	// 0x78
t_opsize	ASM_MOV_AC(uint8_t *mem);	// 0x79
t_opsize	ASM_MOV_AD(uint8_t *mem);	// 0x7A
t_opsize	ASM_MOV_AE(uint8_t *mem);	// 0x7B
t_opsize	ASM_MOV_AH(uint8_t *mem);	// 0x7C
t_opsize	ASM_MOV_AL(uint8_t *mem);	// 0x7D
t_opsize	ASM_MOV_AM(uint8_t *mem);	// 0x7E
t_opsize	ASM_MOV_AA(uint8_t *mem);	// 0x7F
t_opsize	ASM_ADD_B(uint8_t *mem);	// 0x80
t_opsize	ASM_ADD_C(uint8_t *mem);	// 0x81
t_opsize	ASM_ADD_D(uint8_t *mem);	// 0x82
t_opsize	ASM_ADD_E(uint8_t *mem);	// 0x83
t_opsize	ASM_ADD_H(uint8_t *mem);	// 0x84
t_opsize	ASM_ADD_L(uint8_t *mem);	// 0x85
t_opsize	ASM_ADD_M(uint8_t *mem);	// 0x86
t_opsize	ASM_ADD_A(uint8_t *mem);	// 0x87
t_opsize	ASM_ADC_B(uint8_t *mem);	// 0x88
t_opsize	ASM_ADC_C(uint8_t *mem);	// 0x89
t_opsize	ASM_ADC_D(uint8_t *mem);	// 0x8A
t_opsize	ASM_ADC_E(uint8_t *mem);	// 0x8B
t_opsize	ASM_ADC_H(uint8_t *mem);	// 0x8C
t_opsize	ASM_ADC_L(uint8_t *mem);	// 0x8D
t_opsize	ASM_ADC_M(uint8_t *mem);	// 0x8E
t_opsize	ASM_ADC_A(uint8_t *mem);	// 0x8F
t_opsize	ASM_SUB_B(uint8_t *mem);	// 0x90
t_opsize	ASM_SUB_C(uint8_t *mem);	// 0x91
t_opsize	ASM_SUB_D(uint8_t *mem);	// 0x92
t_opsize	ASM_SUB_E(uint8_t *mem);	// 0x93
t_opsize	ASM_SUB_H(uint8_t *mem);	// 0x94
t_opsize	ASM_SUB_L(uint8_t *mem);	// 0x95
t_opsize	ASM_SUB_M(uint8_t *mem);	// 0x96
t_opsize	ASM_SUB_A(uint8_t *mem);	// 0x97
t_opsize	ASM_SSB_B(uint8_t *mem);	// 0x98
t_opsize	ASM_SSB_C(uint8_t *mem);	// 0x99
t_opsize	ASM_SSB_D(uint8_t *mem);	// 0x9A
t_opsize	ASM_SSB_E(uint8_t *mem);	// 0x9B
t_opsize	ASM_SSB_H(uint8_t *mem);	// 0x9C
t_opsize	ASM_SSB_L(uint8_t *mem);	// 0x9D
t_opsize	ASM_SSB_M(uint8_t *mem);	// 0x9E
t_opsize	ASM_SSB_A(uint8_t *mem);	// 0x9F
t_opsize	ASM_ANA_B(uint8_t *mem);	// 0xA0
t_opsize	ASM_ANA_C(uint8_t *mem);	// 0xA1
t_opsize	ASM_ANA_D(uint8_t *mem);	// 0xA2
t_opsize	ASM_ANA_E(uint8_t *mem);	// 0xA3
t_opsize	ASM_ANA_H(uint8_t *mem);	// 0xA4
t_opsize	ASM_ANA_L(uint8_t *mem);	// 0xA5
t_opsize	ASM_ANA_M(uint8_t *mem);	// 0xA6
t_opsize	ASM_ANA_A(uint8_t *mem);	// 0xA7
t_opsize	ASM_XRA_B(uint8_t *mem);	// 0xA8
t_opsize	ASM_XRA_C(uint8_t *mem);	// 0xA9
t_opsize	ASM_XRA_D(uint8_t *mem);	// 0xAA
t_opsize	ASM_XRA_E(uint8_t *mem);	// 0xAB
t_opsize	ASM_XRA_H(uint8_t *mem);	// 0xAC
t_opsize	ASM_XRA_L(uint8_t *mem);	// 0xAD
t_opsize	ASM_XRA_M(uint8_t *mem);	// 0xAE
t_opsize	ASM_XRA_A(uint8_t *mem);	// 0xAF
t_opsize	ASM_ORA_B(uint8_t *mem);	// 0xB0
t_opsize	ASM_ORA_C(uint8_t *mem);	// 0xB1
t_opsize	ASM_ORA_D(uint8_t *mem);	// 0xB2
t_opsize	ASM_ORA_E(uint8_t *mem);	// 0xB3
t_opsize	ASM_ORA_H(uint8_t *mem);	// 0xB4
t_opsize	ASM_ORA_L(uint8_t *mem);	// 0xB5
t_opsize	ASM_ORA_M(uint8_t *mem);	// 0xB6
t_opsize	ASM_ORA_A(uint8_t *mem);	// 0xB7
t_opsize	ASM_CMP_B(uint8_t *mem);	// 0xB8
t_opsize	ASM_CMP_C(uint8_t *mem);	// 0xB9
t_opsize	ASM_CMP_D(uint8_t *mem);	// 0xBA
t_opsize	ASM_CMP_E(uint8_t *mem);	// 0xBB
t_opsize	ASM_CMP_H(uint8_t *mem);	// 0xBC
t_opsize	ASM_CMP_L(uint8_t *mem);	// 0xBD
t_opsize	ASM_CMP_M(uint8_t *mem);	// 0xBE
t_opsize	ASM_CMP_A(uint8_t *mem);	// 0xBF
t_opsize	ASM_RNZ(uint8_t *mem);		// 0xC0
t_opsize	ASM_POP_B(uint8_t *mem);	// 0xC1
t_opsize	ASM_JNZ(uint8_t *mem);		// 0xC2
t_opsize	ASM_JMP(uint8_t *mem);		// 0xC3
t_opsize	ASM_CNZ(uint8_t *mem);		// 0xC4
t_opsize	ASM_PUSH_B(uint8_t *mem);	// 0xC5
t_opsize	ASM_ADI(uint8_t *mem);		// 0xC6
t_opsize	ASM_RST_0(uint8_t *mem);	// 0xC7
t_opsize	ASM_RZ(uint8_t *mem);		// 0xC8
t_opsize	ASM_RET(uint8_t *mem);		// 0xC9
t_opsize	ASM_JZ(uint8_t *mem);		// 0xCA
//	NOP 0xCB
t_opsize	ASM_CZ(uint8_t *mem);		// 0xCC
t_opsize	ASM_CALL(uint8_t *mem);		// 0xCD
t_opsize	ASM_ACI(uint8_t *mem);		// 0xCE
t_opsize	ASM_RST_1(uint8_t *mem);	// 0xCF
t_opsize	ASM_RNC(uint8_t *mem);		// 0xD0
t_opsize	ASM_POP_D(uint8_t *mem);	// 0xD1
t_opsize	ASM_JNC(uint8_t *mem);		// 0xD2
t_opsize	ASM_OUT(uint8_t *mem);		// 0xD3
t_opsize	ASM_CNC(uint8_t *mem);		// 0xD4
t_opsize	ASM_PUSH_D(uint8_t *mem);	// 0xD5
t_opsize	ASM_SUI(uint8_t *mem);		// 0xD6
t_opsize	ASM_RST_2(uint8_t *mem);	// 0xD7
t_opsize	ASM_RC(uint8_t *mem);		// 0xD8
//	NOP 0xD9
t_opsize	ASM_JC(uint8_t *mem);		// 0xDA
t_opsize	ASM_IN(uint8_t *mem);		// 0xDB
t_opsize	ASM_CC(uint8_t *mem);		// 0xDC
//	NOP 0xDD
t_opsize	ASM_SBI(uint8_t *mem);		// 0xDE
t_opsize	ASM_RST_3(uint8_t *mem);	// 0xDF
t_opsize	ASM_RPO(uint8_t *mem);		// 0xE0
t_opsize	ASM_POP_H(uint8_t *mem);	// 0xE1
t_opsize	ASM_JPO(uint8_t *mem);		// 0xE2
t_opsize	ASM_XTHL(uint8_t *mem);		// 0xE3
t_opsize	ASM_CPO(uint8_t *mem);		// 0xE4
t_opsize	ASM_PUSH_H(uint8_t *mem);	// 0xE5
t_opsize	ASM_ANI(uint8_t *mem);		// 0xE6
t_opsize	ASM_RST_4(uint8_t *mem);	// 0xE7
t_opsize	ASM_RPE(uint8_t *mem);		// 0xE8
t_opsize	ASM_PCHL(uint8_t *mem);		// 0xE9
t_opsize	ASM_JPE(uint8_t *mem);		// 0xEA
t_opsize	ASM_XCHG(uint8_t *mem);		// 0xEB
t_opsize	ASM_CPE(uint8_t *mem);		// 0xEC
//	NOP 0xED
t_opsize	ASM_XRI(uint8_t *mem);		// 0xEE
t_opsize	ASM_RST_5(uint8_t *mem);	// 0xEF
t_opsize	ASM_RP(uint8_t *mem);		// 0xF0
t_opsize	ASM_POP_PSW(uint8_t *mem);	// 0xF1
t_opsize	ASM_JP(uint8_t *mem);		// 0xF2
t_opsize	ASM_DI(uint8_t *mem);		// 0xF3
t_opsize	ASM_CP(uint8_t *mem);		// 0xF4
t_opsize	ASM_PUSH_PSW(uint8_t *mem);	// 0xF5
t_opsize	ASM_ORI(uint8_t *mem);		// 0xF6
t_opsize	ASM_RST_6(uint8_t *mem);	// 0xF7
t_opsize	ASM_RM(uint8_t *mem);		// 0xF8
t_opsize	ASM_SPHL(uint8_t *mem);		// 0xF9
t_opsize	ASM_JM(uint8_t *mem);		// 0xFA
t_opsize	ASM_EI(uint8_t *mem);		// 0xFB
t_opsize	ASM_CM(uint8_t *mem);		// 0xFC
//	NOP 0xFD
t_opsize	ASM_CPI(uint8_t *mem);		// 0xFE
t_opsize	ASM_RST_7(uint8_t *mem);	// 0xFF

#endif

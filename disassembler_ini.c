/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   disassembler_ini.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhenrion <fhenrion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/09 12:14:50 by fhenrion          #+#    #+#             */
/*   Updated: 2020/01/11 10:36:43 by fhenrion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "disassembler_ini.h"
#include "asm_instructions.h"

void	disassemble_instructions_ini(t_asm_inst intructions_bus[0xFF])
{
	intructions_bus[0x00] = NOP;
	intructions_bus[0x01] = LXI_B;
	intructions_bus[0x02] = STAX_B;
	intructions_bus[0x03] = INX_B;
	intructions_bus[0x04] = INR_B;
	intructions_bus[0x05] = DCR_B;
	intructions_bus[0x06] = MVI_B;
	intructions_bus[0x07] = RLC;
	intructions_bus[0x08] = NOP;
	intructions_bus[0x09] = DAD_B;
	intructions_bus[0x0A] = LDAX_B;
	intructions_bus[0x0B] = DCX_B;
	intructions_bus[0x0C] = INR_C;
	intructions_bus[0x0D] = DCR_C;
	intructions_bus[0x0E] = MVI_C;
	intructions_bus[0x0F] = RRC;
	intructions_bus[0x10] = NOP;
	intructions_bus[0x11] = LXI_D;
	intructions_bus[0x12] = STAX_D;
	intructions_bus[0x13] = INX_D;
	intructions_bus[0x14] = INR_D;
	intructions_bus[0x15] = DCR_D;
	intructions_bus[0x16] = MVI_D;
	intructions_bus[0x17] = RAL;
	intructions_bus[0x18] = NOP;
	intructions_bus[0x19] = DAD_D;
	intructions_bus[0x1A] = LDAX_D;
	intructions_bus[0x1B] = DCX_D;
	intructions_bus[0x1C] = INR_E;
	intructions_bus[0x1D] = DCR_E;
	intructions_bus[0x1E] = MVI_E;
	intructions_bus[0x1F] = RAR;
	intructions_bus[0x20] = NOP;
	intructions_bus[0x21] = NOP;
	intructions_bus[0x22] = LXI_H;
	intructions_bus[0x23] = SHLD;
	intructions_bus[0x24] = INX_H;
	intructions_bus[0x25] = INR_H;
	intructions_bus[0x26] = DCR_H;
	intructions_bus[0x27] = MVI_H;
	intructions_bus[0x28] = NOP;
	intructions_bus[0x29] = DAD_H;
	intructions_bus[0x2A] = LHLD;
	intructions_bus[0x2B] = DCX_H;
	intructions_bus[0x2C] = INR_L;
	intructions_bus[0x2D] = DCR_L;
	intructions_bus[0x2E] = MVI_L;
	intructions_bus[0x2F] = CMA;
	intructions_bus[0x30] = NOP;
	intructions_bus[0x31] = LXI_SP;
	intructions_bus[0x32] = STA;
	intructions_bus[0x33] = INX_SP;
	intructions_bus[0x34] = INR_M;
	intructions_bus[0x35] = DCR_M;
	intructions_bus[0x36] = MVI_M;
	intructions_bus[0x37] = STC;
	intructions_bus[0x38] = NOP;
	intructions_bus[0x39] = DAD_SP;
	intructions_bus[0x3A] = LDA;
	intructions_bus[0x3B] = DCX_SP;
	intructions_bus[0x3C] = INR_A;
	intructions_bus[0x3D] = DCR_A;
	intructions_bus[0x3E] = MVI_A;
	intructions_bus[0x3F] = CMC;
	intructions_bus[0x40] = MOV_BB;
	intructions_bus[0x41] = MOV_BC;
	intructions_bus[0x42] = MOV_BD;
	intructions_bus[0x43] = MOV_BE;
	intructions_bus[0x44] = MOV_BH;
	intructions_bus[0x45] = MOV_BL;
	intructions_bus[0x46] = MOV_BM;
	intructions_bus[0x47] = MOV_BA;
	intructions_bus[0x48] = MOV_CB;
	intructions_bus[0x49] = MOV_CC;
	intructions_bus[0x4A] = MOV_CD;
	intructions_bus[0x4B] = MOV_CE;
	intructions_bus[0x4C] = MOV_CH;
	intructions_bus[0x4D] = MOV_CL;
	intructions_bus[0x4E] = MOV_CM;
	intructions_bus[0x4F] = MOV_CA;
	intructions_bus[0x50] = MOV_DB;
	intructions_bus[0x51] = MOV_DC;
	intructions_bus[0x52] = MOV_DD;
	intructions_bus[0x53] = MOV_DE;
	intructions_bus[0x54] = MOV_DH;
	intructions_bus[0x55] = MOV_DL;
	intructions_bus[0x56] = MOV_DM;
	intructions_bus[0x57] = MOV_DA;
	intructions_bus[0x58] = MOV_EB;
	intructions_bus[0x59] = MOV_EC;
	intructions_bus[0x5A] = MOV_ED;
	intructions_bus[0x5B] = MOV_EE;
	intructions_bus[0x5C] = MOV_EH;
	intructions_bus[0x5D] = MOV_EL;
	intructions_bus[0x5E] = MOV_EM;
	intructions_bus[0x5F] = MOV_EA;
	intructions_bus[0x60] = MOV_HB;
	intructions_bus[0x61] = MOV_HC;
	intructions_bus[0x62] = MOV_HD;
	intructions_bus[0x63] = MOV_HE;
	intructions_bus[0x64] = MOV_HH;
	intructions_bus[0x65] = MOV_HL;
	intructions_bus[0x66] = MOV_HM;
	intructions_bus[0x67] = MOV_HA;
	intructions_bus[0x68] = MOV_LB;
	intructions_bus[0x69] = MOV_LC;
	intructions_bus[0x6A] = MOV_LD;
	intructions_bus[0x6B] = MOV_LE;
	intructions_bus[0x6C] = MOV_LH;
	intructions_bus[0x6D] = MOV_LL;
	intructions_bus[0x6E] = MOV_LM;
	intructions_bus[0x6F] = MOV_LA;
	intructions_bus[0x70] = MOV_MB;
	intructions_bus[0x71] = MOV_MC;
	intructions_bus[0x72] = MOV_MD;
	intructions_bus[0x73] = MOV_ME;
	intructions_bus[0x74] = MOV_MH;
	intructions_bus[0x75] = MOV_ML;
	intructions_bus[0x76] = HLT;
	intructions_bus[0x77] = MOV_MA;
	intructions_bus[0x78] = MOV_AB;
	intructions_bus[0x79] = MOV_AC;
	intructions_bus[0x7A] = MOV_AD;
	intructions_bus[0x7B] = MOV_AE;
	intructions_bus[0x7C] = MOV_AH;
	intructions_bus[0x7D] = MOV_AL;
	intructions_bus[0x7E] = MOV_AM;
	intructions_bus[0x7F] = MOV_AA;
	intructions_bus[0x80] = ADD_B;
	intructions_bus[0x81] = ADD_C;
	intructions_bus[0x82] = ADD_D;
	intructions_bus[0x83] = ADD_E;
	intructions_bus[0x84] = ADD_H;
	intructions_bus[0x85] = ADD_L;
	intructions_bus[0x86] = ADD_M;
	intructions_bus[0x87] = ADD_A;
	intructions_bus[0x88] = ADC_B;
	intructions_bus[0x89] = ADC_C;
	intructions_bus[0x8A] = ADC_D;
	intructions_bus[0x8B] = ADC_E;
	intructions_bus[0x8C] = ADC_H;
	intructions_bus[0x8D] = ADC_L;
	intructions_bus[0x8E] = ADC_M;
	intructions_bus[0x8F] = ADC_A;
	intructions_bus[0x90] = SUB_B;
	intructions_bus[0x91] = SUB_C;
	intructions_bus[0x92] = SUB_D;
	intructions_bus[0x93] = SUB_E;
	intructions_bus[0x94] = SUB_H;
	intructions_bus[0x95] = SUB_L;
	intructions_bus[0x96] = SUB_M;
	intructions_bus[0x97] = SUB_A;
	intructions_bus[0x98] = SSB_B;
	intructions_bus[0x99] = SSB_C;
	intructions_bus[0x9A] = SSB_D;
	intructions_bus[0x9B] = SSB_E;
	intructions_bus[0x9C] = SSB_H;
	intructions_bus[0x9D] = SSB_L;
	intructions_bus[0x9E] = SSB_M;
	intructions_bus[0x9F] = SSB_A;
	intructions_bus[0xA0] = ANA_B;
	intructions_bus[0xA1] = ANA_C;
	intructions_bus[0xA2] = ANA_D;
	intructions_bus[0xA3] = ANA_E;
	intructions_bus[0xA4] = ANA_H;
	intructions_bus[0xA5] = ANA_L;
	intructions_bus[0xA6] = ANA_M;
	intructions_bus[0xA7] = ANA_A;
	intructions_bus[0xA8] = XRA_B;
	intructions_bus[0xA9] = XRA_C;
	intructions_bus[0xAA] = XRA_D;
	intructions_bus[0xAB] = XRA_E;
	intructions_bus[0xAC] = XRA_H;
	intructions_bus[0xAD] = XRA_L;
	intructions_bus[0xAE] = XRA_M;
	intructions_bus[0xAF] = XRA_A;
	intructions_bus[0xB0] = ORA_B;
	intructions_bus[0xB1] = ORA_C;
	intructions_bus[0xB2] = ORA_D;
	intructions_bus[0xB3] = ORA_E;
	intructions_bus[0xB4] = ORA_H;
	intructions_bus[0xB5] = ORA_L;
	intructions_bus[0xB6] = ORA_M;
	intructions_bus[0xB7] = ORA_A;
	intructions_bus[0xB8] = CMP_B;
	intructions_bus[0xB9] = CMP_C;
	intructions_bus[0xBA] = CMP_D;
	intructions_bus[0xBB] = CMP_E;
	intructions_bus[0xBC] = CMP_H;
	intructions_bus[0xBD] = CMP_L;
	intructions_bus[0xBE] = CMP_M;
	intructions_bus[0xBF] = CMP_A;
	intructions_bus[0xC0] = RNZ;
	intructions_bus[0xC1] = POP_B;
	intructions_bus[0xC2] = JNZ;
	intructions_bus[0xC3] = JMP;
	intructions_bus[0xC4] = CNZ;
	intructions_bus[0xC5] = PUSH_B;
	intructions_bus[0xC6] = ADI;
	intructions_bus[0xC7] = RST_0;
	intructions_bus[0xC8] = RZ;
	intructions_bus[0xC9] = RET;
	intructions_bus[0xCA] = JZ;
	intructions_bus[0xCB] = JMP;
	intructions_bus[0xCC] = CZ;
	intructions_bus[0xCD] = CALL;
	intructions_bus[0xCE] = ACI;
	intructions_bus[0xCF] = RST_1;
	intructions_bus[0xD0] = RNC;
	intructions_bus[0xD1] = POP_D;
	intructions_bus[0xD2] = JNC;
	intructions_bus[0xD3] = OUT;
	intructions_bus[0xD4] = CNC;
	intructions_bus[0xD5] = PUSH_D;
	intructions_bus[0xD6] = SUI;
	intructions_bus[0xD7] = RST_2;
	intructions_bus[0xD8] = RC;
	intructions_bus[0xD9] = RET;
	intructions_bus[0xDA] = JC;
	intructions_bus[0xDB] = IN;
	intructions_bus[0xDC] = CC;
	intructions_bus[0xDD] = CALL;
	intructions_bus[0xDE] = SBI;
	intructions_bus[0xDF] = RST_3;
	/*
	0xe0: printf("RPO");
	0xe1: printf("POP    H");
	0xe2: printf("JPO    $%02x%02x",code[2],code[1]); opbytes = 3;
	0xe3: printf("XTHL");break;
	0xe4: printf("CPO    $%02x%02x",code[2],code[1]); opbytes = 3;
	0xe5: printf("PUSH   H");
	0xe6: printf("ANI    #$%02x",code[1]); opbytes = 2;
	0xe7: printf("RST    4");
	0xe8: printf("RPE");
	0xe9: printf("PCHL");break;
	0xea: printf("JPE    $%02x%02x",code[2],code[1]); opbytes = 3;
	0xeb: printf("XCHG");
	0xec: printf("CPE     $%02x%02x",code[2],code[1]); opbytes = 3;
	0xed: printf("CALL   $%02x%02x",code[2],code[1]); opbytes = 3;
	0xee: printf("XRI    #$%02x",code[1]); opbytes = 2;
	0xef: printf("RST    5");
	0xf0: printf("RP"); 
	0xf1: printf("POP    PSW");
	0xf2: printf("JP     $%02x%02x",code[2],code[1]); opbytes = 3;
	0xf3: printf("DI"); 
	0xf4: printf("CP     $%02x%02x",code[2],code[1]); opbytes = 3;
	0xf5: printf("PUSH   PSW");
	0xf6: printf("ORI    #$%02x",code[1]); opbytes = 2;
	0xf7: printf("RST    6");
	0xf8: printf("RM"); 
	0xf9: printf("SPHL");break;
	0xfa: printf("JM     $%02x%02x",code[2],code[1]); opbytes = 3;
	0xfb: printf("EI"); 
	0xfc: printf("CM     $%02x%02x",code[2],code[1]); opbytes = 3;
	0xfd: printf("CALL   $%02x%02x",code[2],code[1]); opbytes = 3;
	0xfe: printf("CPI    #$%02x",code[1]); opbytes = 2;
	0xff: printf("RST    7");
	*/
}
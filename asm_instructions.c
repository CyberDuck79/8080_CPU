/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   asm_instructions.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhenrion <fhenrion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/09 12:08:59 by fhenrion          #+#    #+#             */
/*   Updated: 2020/01/11 12:45:05 by fhenrion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "asm_instructions.h"

t_opsize	NOP(t_memory *mem)
{
	printf(": %02X | NOP\n", *mem);
	return (1);
}

t_opsize	RLC(t_memory *mem)
{
	printf(": %02X | RLC\n", *mem);
	return (1);
}

t_opsize	STC(t_memory *mem)
{
	printf(": %02X | STC\n", *mem);
	return (1);
}

t_opsize	CMC(t_memory *mem)
{
	printf(": %02X | CMC\n", *mem);
	return (1);
}

t_opsize	HLT(t_memory *mem)
{
	printf(": %02X | HLT\n", *mem);
	return (1);
}

t_opsize	XTHL(t_memory *mem)
{
	printf(": %02X | XTHL\n", *mem);
	return (1);
}

t_opsize	SPHL(t_memory *mem)
{
	printf(": %02X | SPHL\n", *mem);
	return (1);
}

t_opsize	XCHG(t_memory *mem)
{
	printf(": %02X | XCHG\n", *mem);
	return (1);
}

t_opsize	PCHL(t_memory *mem)
{
	printf(": %02X | PCHL\n", *mem);
	return (1);
}

t_opsize	RNZ(t_memory *mem)
{
	printf(": %02X | RNZ\n", *mem);
	return (1);
}

t_opsize	RNC(t_memory *mem)
{
	printf(": %02X | RNC\n", *mem);
	return (1);
}

t_opsize	RP(t_memory *mem)
{
	printf(": %02X | RP\n", *mem);
	return (1);
}

t_opsize	RPO(t_memory *mem)
{
	printf(": %02X | RPO\n", *mem);
	return (1);
}

t_opsize	RPE(t_memory *mem)
{
	printf(": %02X | RPE\n", *mem);
	return (1);
}

t_opsize	RZ(t_memory *mem)
{
	printf(": %02X | RZ\n", *mem);
	return (1);
}

t_opsize	RC(t_memory *mem)
{
	printf(": %02X | RC\n", *mem);
	return (1);
}

t_opsize	RM(t_memory *mem)
{
	printf(": %02X | RM\n", *mem);
	return (1);
}

t_opsize	DI(t_memory *mem)
{
	printf(": %02X | DI\n", *mem);
	return (1);
}

t_opsize	EI(t_memory *mem)
{
	printf(": %02X | EI\n", *mem);
	return (1);
}

t_opsize	RET(t_memory *mem)
{
	printf(": %02X | RET\n", *mem);
	return (1);
}

t_opsize	LXI_B(t_memory *mem)
{
	printf(": %02X | LXI    B,#$%02X%02X\n", *mem, mem[2], mem[1]);
	return (3);
}

t_opsize	LXI_D(t_memory *mem)
{
	printf(": %02X | LXI    D,#$%02X%02X\n", *mem, mem[2], mem[1]);
	return (3);
}

t_opsize	LXI_H(t_memory *mem)
{
	printf(": %02X | LXI    H,#$%02X%02X\n", *mem, mem[2], mem[1]);
	return (3);
}

t_opsize	LXI_SP(t_memory *mem)
{
	printf(": %02X | LXI   SP,#$%02X%02X\n", *mem, mem[2], mem[1]);
	return (3);
}

t_opsize	STAX_B(t_memory *mem)
{
	printf(": %02X | STAX   B\n", *mem);
	return (1);
}

t_opsize	STAX_D(t_memory *mem)
{
	printf(": %02X | STAX   D\n", *mem);
	return (1);
}

t_opsize	INX_B(t_memory *mem)
{
	printf(": %02X | INX    B\n", *mem);
	return (1);
}

t_opsize	INX_D(t_memory *mem)
{
	printf(": %02X | INX    D\n", *mem);
	return (1);
}

t_opsize	INX_H(t_memory *mem)
{
	printf(": %02X | INX    H\n", *mem);
	return (1);
}

t_opsize	INX_SP(t_memory *mem)
{
	printf(": %02X | INX   SP\n", *mem);
	return (1);
}

t_opsize	INR_A(t_memory *mem)
{
	printf(": %02X | INR    A\n", *mem);
	return (1);
}

t_opsize	INR_B(t_memory *mem)
{
	printf(": %02X | INR    B\n", *mem);
	return (1);
}

t_opsize	INR_C(t_memory *mem)
{
	printf(": %02X | INR    C\n", *mem);
	return (1);
}

t_opsize	INR_D(t_memory *mem)
{
	printf(": %02X | INR    D\n", *mem);
	return (1);
}

t_opsize	INR_E(t_memory *mem)
{
	printf(": %02X | INR    E\n", *mem);
	return (1);
}

t_opsize	INR_H(t_memory *mem)
{
	printf(": %02X | INR    H\n", *mem);
	return (1);
}

t_opsize	INR_L(t_memory *mem)
{
	printf(": %02X | INR    L\n", *mem);
	return (1);
}

t_opsize	INR_M(t_memory *mem)
{
	printf(": %02X | INR    M\n", *mem);
	return (1);
}

t_opsize	DCR_A(t_memory *mem)
{
	printf(": %02X | DCR    A\n", *mem);
	return (1);
}

t_opsize	DCR_B(t_memory *mem)
{
	printf(": %02X | DCR    B\n", *mem);
	return (1);
}

t_opsize	DCR_C(t_memory *mem)
{
	printf(": %02X | DCR    C\n", *mem);
	return (1);
}

t_opsize	DCR_D(t_memory *mem)
{
	printf(": %02X | DCR    D\n", *mem);
	return (1);
}

t_opsize	DCR_E(t_memory *mem)
{
	printf(": %02X | DCR    E\n", *mem);
	return (1);
}

t_opsize	DCR_H(t_memory *mem)
{
	printf(": %02X | DCR    H\n", *mem);
	return (1);
}

t_opsize	DCR_L(t_memory *mem)
{
	printf(": %02X | DCR    L\n", *mem);
	return (1);
}

t_opsize	DCR_M(t_memory *mem)
{
	printf(": %02X | DCR    M\n", *mem);
	return (1);
}

t_opsize	MVI_A(t_memory *mem)
{
	printf(": %02X | MVI    A,#$%02X\n", *mem, mem[1]);
	return (2);
}

t_opsize	MVI_B(t_memory *mem)
{
	printf(": %02X | MVI    B,#$%02X\n", *mem, mem[1]);
	return (2);
}

t_opsize	MVI_C(t_memory *mem)
{
	printf(": %02X | MVI    C,#$%02X\n", *mem, mem[1]);
	return (2);
}

t_opsize	MVI_D(t_memory *mem)
{
	printf(": %02X | MVI    D,#$%02X\n", *mem, mem[1]);
	return (2);
}

t_opsize	MVI_E(t_memory *mem)
{
	printf(": %02X | MVI    E,#$%02X\n", *mem, mem[1]);
	return (2);
}

t_opsize	MVI_H(t_memory *mem)
{
	printf(": %02X | MVI    H,#$%02X\n", *mem, mem[1]);
	return (2);
}

t_opsize	MVI_L(t_memory *mem)
{
	printf(": %02X | MVI    L,#$%02X\n", *mem, mem[1]);
	return (2);
}

t_opsize	MVI_M(t_memory *mem)
{
	printf(": %02X | MVI    M,#$%02X\n", *mem, mem[1]);
	return (2);
}

t_opsize	DAD_B(t_memory *mem)
{
	printf(": %02X | DAD    B\n", *mem);
	return (1);
}

t_opsize	DAD_D(t_memory *mem)
{
	printf(": %02X | DAD    D\n", *mem);
	return (1);
}

t_opsize	DAD_H(t_memory *mem)
{
	printf(": %02X | DAD    H\n", *mem);
	return (1);
}

t_opsize	DAD_SP(t_memory *mem)
{
	printf(": %02X | DAD   SP\n", *mem);
	return (1);
}

t_opsize	LDAX_B(t_memory *mem)
{
	printf(": %02X | LDAX   B\n", *mem);
	return (1);
}

t_opsize	LDAX_D(t_memory *mem)
{
	printf(": %02X | LDAX   D\n", *mem);
	return (1);
}

t_opsize	DCX_B(t_memory *mem)
{
	printf(": %02X | DCX    B\n", *mem);
	return (1);
}

t_opsize	DCX_D(t_memory *mem)
{
	printf(": %02X | DCX    D\n", *mem);
	return (1);
}

t_opsize	DCX_H(t_memory *mem)
{
	printf(": %02X | DCX    H\n", *mem);
	return (1);
}

t_opsize	DCX_SP(t_memory *mem)
{
	printf(": %02X | DCX   SP\n", *mem);
	return (1);
}

t_opsize	RRC(t_memory *mem)
{
	printf(": %02X | RRC\n", *mem);
	return (1);
}

t_opsize	RAL(t_memory *mem)
{
	printf(": %02X | RAL\n", *mem);
	return (1);
}

t_opsize	RAR(t_memory *mem)
{
	printf(": %02X | RAR\n", *mem);
	return (1);
}

t_opsize	CMA(t_memory *mem)
{
	printf(": %02X | CMA\n", *mem);
	return (1);
}

t_opsize	SHLD(t_memory *mem)
{
	printf(": %02X | SHLD   $%02X%02X\n", *mem, mem[2], mem[1]);
	return (3);
}

t_opsize	LHLD(t_memory *mem)
{
	printf(": %02X | LHLD   $%02X%02X\n", *mem, mem[2], mem[1]);
	return (3);
}

t_opsize	STA(t_memory *mem)
{
	printf(": %02X | STA    $%02X%02X\n", *mem, mem[2], mem[1]);
	return (3);
}

t_opsize	LDA(t_memory *mem)
{
	printf(": %02X | LDA    $%02X%02X\n", *mem, mem[2], mem[1]);
	return (3);
}

t_opsize	MOV_AA(t_memory *mem)
{
	printf(": %02X | MOV    A,A\n", *mem);
	return (1);
}

t_opsize	MOV_AB(t_memory *mem)
{
	printf(": %02X | MOV    A,B\n", *mem);
	return (1);
}

t_opsize	MOV_AC(t_memory *mem)
{
	printf(": %02X | MOV    A,C\n", *mem);
	return (1);
}

t_opsize	MOV_AD(t_memory *mem)
{
	printf(": %02X | MOV    A,D\n", *mem);
	return (1);
}

t_opsize	MOV_AE(t_memory *mem)
{
	printf(": %02X | MOV    A,E\n", *mem);
	return (1);
}

t_opsize	MOV_AH(t_memory *mem)
{
	printf(": %02X | MOV    A,H\n", *mem);
	return (1);
}
t_opsize	MOV_AL(t_memory *mem)
{
	printf(": %02X | MOV    A,L\n", *mem);
	return (1);
}

t_opsize	MOV_AM(t_memory *mem)
{
	printf(": %02X | MOV    A,M\n", *mem);
	return (1);
}

t_opsize	MOV_BA(t_memory *mem)
{
	printf(": %02X | MOV    B,A\n", *mem);
	return (1);
}

t_opsize	MOV_BB(t_memory *mem)
{
	printf(": %02X | MOV    B,B\n", *mem);
	return (1);
}

t_opsize	MOV_BC(t_memory *mem)
{
	printf(": %02X | MOV    B,C\n", *mem);
	return (1);
}

t_opsize	MOV_BD(t_memory *mem)
{
	printf(": %02X | MOV    B,D\n", *mem);
	return (1);
}

t_opsize	MOV_BE(t_memory *mem)
{
	printf(": %02X | MOV    B,E\n", *mem);
	return (1);
}

t_opsize	MOV_BH(t_memory *mem)
{
	printf(": %02X | MOV    B,H\n", *mem);
	return (1);
}
t_opsize	MOV_BL(t_memory *mem)
{
	printf(": %02X | MOV    B,L\n", *mem);
	return (1);
}

t_opsize	MOV_BM(t_memory *mem)
{
	printf(": %02X | MOV    B,M\n", *mem);
	return (1);
}

t_opsize	MOV_CA(t_memory *mem)
{
	printf(": %02X | MOV    C,A\n", *mem);
	return (1);
}

t_opsize	MOV_CB(t_memory *mem)
{
	printf(": %02X | MOV    C,B\n", *mem);
	return (1);
}

t_opsize	MOV_CC(t_memory *mem)
{
	printf(": %02X | MOV    C,C\n", *mem);
	return (1);
}

t_opsize	MOV_CD(t_memory *mem)
{
	printf(": %02X | MOV    C,D\n", *mem);
	return (1);
}

t_opsize	MOV_CE(t_memory *mem)
{
	printf(": %02X | MOV    C,E\n", *mem);
	return (1);
}

t_opsize	MOV_CH(t_memory *mem)
{
	printf(": %02X | MOV    C,H\n", *mem);
	return (1);
}
t_opsize	MOV_CL(t_memory *mem)
{
	printf(": %02X | MOV    C,L\n", *mem);
	return (1);
}

t_opsize	MOV_CM(t_memory *mem)
{
	printf(": %02X | MOV    C,M\n", *mem);
	return (1);
}

t_opsize	MOV_DA(t_memory *mem)
{
	printf(": %02X | MOV    D,A\n", *mem);
	return (1);
}

t_opsize	MOV_DB(t_memory *mem)
{
	printf(": %02X | MOV    D,B\n", *mem);
	return (1);
}

t_opsize	MOV_DC(t_memory *mem)
{
	printf(": %02X | MOV    D,C\n", *mem);
	return (1);
}

t_opsize	MOV_DD(t_memory *mem)
{
	printf(": %02X | MOV    D,D\n", *mem);
	return (1);
}

t_opsize	MOV_DE(t_memory *mem)
{
	printf(": %02X | MOV    D,E\n", *mem);
	return (1);
}

t_opsize	MOV_DH(t_memory *mem)
{
	printf(": %02X | MOV    D,H\n", *mem);
	return (1);
}
t_opsize	MOV_DL(t_memory *mem)
{
	printf(": %02X | MOV    D,L\n", *mem);
	return (1);
}

t_opsize	MOV_DM(t_memory *mem)
{
	printf(": %02X | MOV    D,M\n", *mem);
	return (1);
}

t_opsize	MOV_EA(t_memory *mem)
{
	printf(": %02X | MOV    E,A\n", *mem);
	return (1);
}

t_opsize	MOV_EB(t_memory *mem)
{
	printf(": %02X | MOV    E,B\n", *mem);
	return (1);
}

t_opsize	MOV_EC(t_memory *mem)
{
	printf(": %02X | MOV    E,C\n", *mem);
	return (1);
}

t_opsize	MOV_ED(t_memory *mem)
{
	printf(": %02X | MOV    E,D\n", *mem);
	return (1);
}

t_opsize	MOV_EE(t_memory *mem)
{
	printf(": %02X | MOV    E,E\n", *mem);
	return (1);
}

t_opsize	MOV_EH(t_memory *mem)
{
	printf(": %02X | MOV    E,H\n", *mem);
	return (1);
}
t_opsize	MOV_EL(t_memory *mem)
{
	printf(": %02X | MOV    E,L\n", *mem);
	return (1);
}

t_opsize	MOV_EM(t_memory *mem)
{
	printf(": %02X | MOV    E,M\n", *mem);
	return (1);
}

t_opsize	MOV_HA(t_memory *mem)
{
	printf(": %02X | MOV    H,A\n", *mem);
	return (1);
}

t_opsize	MOV_HB(t_memory *mem)
{
	printf(": %02X | MOV    H,B\n", *mem);
	return (1);
}

t_opsize	MOV_HC(t_memory *mem)
{
	printf(": %02X | MOV    H,C\n", *mem);
	return (1);
}

t_opsize	MOV_HD(t_memory *mem)
{
	printf(": %02X | MOV    H,D\n", *mem);
	return (1);
}

t_opsize	MOV_HE(t_memory *mem)
{
	printf(": %02X | MOV    H,E\n", *mem);
	return (1);
}

t_opsize	MOV_HH(t_memory *mem)
{
	printf(": %02X | MOV    H,H\n", *mem);
	return (1);
}
t_opsize	MOV_HL(t_memory *mem)
{
	printf(": %02X | MOV    H,L\n", *mem);
	return (1);
}

t_opsize	MOV_HM(t_memory *mem)
{
	printf(": %02X | MOV    H,M\n", *mem);
	return (1);
}

t_opsize	MOV_LA(t_memory *mem)
{
	printf(": %02X | MOV    L,A\n", *mem);
	return (1);
}

t_opsize	MOV_LB(t_memory *mem)
{
	printf(": %02X | MOV    L,B\n", *mem);
	return (1);
}

t_opsize	MOV_LC(t_memory *mem)
{
	printf(": %02X | MOV    L,C\n", *mem);
	return (1);
}

t_opsize	MOV_LD(t_memory *mem)
{
	printf(": %02X | MOV    L,D\n", *mem);
	return (1);
}

t_opsize	MOV_LE(t_memory *mem)
{
	printf(": %02X | MOV    L,E\n", *mem);
	return (1);
}

t_opsize	MOV_LH(t_memory *mem)
{
	printf(": %02X | MOV    L,H\n", *mem);
	return (1);
}
t_opsize	MOV_LL(t_memory *mem)
{
	printf(": %02X | MOV    L,L\n", *mem);
	return (1);
}

t_opsize	MOV_LM(t_memory *mem)
{
	printf(": %02X | MOV    L,M", *mem);
	return (1);
}

t_opsize	MOV_MA(t_memory *mem)
{
	printf(": %02X | MOV    M,A\n", *mem);
	return (1);
}

t_opsize	MOV_MB(t_memory *mem)
{
	printf(": %02X | MOV    M,B\n", *mem);
	return (1);
}

t_opsize	MOV_MC(t_memory *mem)
{
	printf(": %02X | MOV    M,C\n", *mem);
	return (1);
}

t_opsize	MOV_MD(t_memory *mem)
{
	printf(": %02X | MOV    M,D\n", *mem);
	return (1);
}

t_opsize	MOV_ME(t_memory *mem)
{
	printf(": %02X | MOV    M,E\n", *mem);
	return (1);
}

t_opsize	MOV_MH(t_memory *mem)
{
	printf(": %02X | MOV    M,H\n", *mem);
	return (1);
}
t_opsize	MOV_ML(t_memory *mem)
{
	printf(": %02X | MOV    M,L\n", *mem);
	return (1);
}

t_opsize	MOV_MM(t_memory *mem)
{
	printf(": %02X | MOV    M,M\n", *mem);
	return (1);
}

t_opsize	ADD_A(t_memory *mem)
{
	printf(": %02X | ADD    A\n", *mem);
	return (1);
}

t_opsize	ADD_B(t_memory *mem)
{
	printf(": %02X | ADD    B\n", *mem);
	return (1);
}

t_opsize	ADD_C(t_memory *mem)
{
	printf(": %02X | ADD    C\n", *mem);
	return (1);
}

t_opsize	ADD_D(t_memory *mem)
{
	printf(": %02X | ADD    D\n", *mem);
	return (1);
}

t_opsize	ADD_E(t_memory *mem)
{
	printf(": %02X | ADD    E\n", *mem);
	return (1);
}

t_opsize	ADD_H(t_memory *mem)
{
	printf(": %02X | ADD    H\n", *mem);
	return (1);
}

t_opsize	ADD_L(t_memory *mem)
{
	printf(": %02X | ADD    L\n", *mem);
	return (1);
}

t_opsize	ADD_M(t_memory *mem)
{
	printf(": %02X | ADD    M\n", *mem);
	return (1);
}

t_opsize	ADC_A(t_memory *mem)
{
	printf(": %02X | ADC    A\n", *mem);
	return (1);
}

t_opsize	ADC_B(t_memory *mem)
{
	printf(": %02X | ADC    B\n", *mem);
	return (1);
}

t_opsize	ADC_C(t_memory *mem)
{
	printf(": %02X | ADC    C\n", *mem);
	return (1);
}

t_opsize	ADC_D(t_memory *mem)
{
	printf(": %02X | ADC    D\n", *mem);
	return (1);
}

t_opsize	ADC_E(t_memory *mem)
{
	printf(": %02X | ADC    E\n", *mem);
	return (1);
}

t_opsize	ADC_H(t_memory *mem)
{
	printf(": %02X | ADC    H\n", *mem);
	return (1);
}

t_opsize	ADC_L(t_memory *mem)
{
	printf(": %02X | ADC    L\n", *mem);
	return (1);
}

t_opsize	ADC_M(t_memory *mem)
{
	printf(": %02X | ADC    M\n", *mem);
	return (1);
}

t_opsize	SUB_A(t_memory *mem)
{
	printf(": %02X | SUB    A\n", *mem);
	return (1);
}

t_opsize	SUB_B(t_memory *mem)
{
	printf(": %02X | SUB    B\n", *mem);
	return (1);
}

t_opsize	SUB_C(t_memory *mem)
{
	printf(": %02X | SUB    C\n", *mem);
	return (1);
}

t_opsize	SUB_D(t_memory *mem)
{
	printf(": %02X | SUB    D\n", *mem);
	return (1);
}

t_opsize	SUB_E(t_memory *mem)
{
	printf(": %02X | SUB    E\n", *mem);
	return (1);
}

t_opsize	SUB_H(t_memory *mem)
{
	printf(": %02X | SUB    H\n", *mem);
	return (1);
}

t_opsize	SUB_L(t_memory *mem)
{
	printf(": %02X | SUB    L\n", *mem);
	return (1);
}

t_opsize	SUB_M(t_memory *mem)
{
	printf(": %02X | SUB    M\n", *mem);
	return (1);
}

t_opsize	SSB_A(t_memory *mem)
{
	printf(": %02X | SSB    A\n", *mem);
	return (1);
}

t_opsize	SSB_B(t_memory *mem)
{
	printf(": %02X | SSB    B\n", *mem);
	return (1);
}

t_opsize	SSB_C(t_memory *mem)
{
	printf(": %02X | SSB    C\n", *mem);
	return (1);
}

t_opsize	SSB_D(t_memory *mem)
{
	printf(": %02X | SSB    D\n", *mem);
	return (1);
}

t_opsize	SSB_E(t_memory *mem)
{
	printf(": %02X | SSB    E\n", *mem);
	return (1);
}

t_opsize	SSB_H(t_memory *mem)
{
	printf(": %02X | SSB    H\n", *mem);
	return (1);
}

t_opsize	SSB_L(t_memory *mem)
{
	printf(": %02X | SSB    L\n", *mem);
	return (1);
}

t_opsize	SSB_M(t_memory *mem)
{
	printf(": %02X | SSB    M\n", *mem);
	return (1);
}

t_opsize	ANA_A(t_memory *mem)
{
	printf(": %02X | ANA    A\n", *mem);
	return (1);
}

t_opsize	ANA_B(t_memory *mem)
{
	printf(": %02X | ANA    B\n", *mem);
	return (1);
}

t_opsize	ANA_C(t_memory *mem)
{
	printf(": %02X | ANA    C\n", *mem);
	return (1);
}

t_opsize	ANA_D(t_memory *mem)
{
	printf(": %02X | ANA    D\n", *mem);
	return (1);
}

t_opsize	ANA_E(t_memory *mem)
{
	printf(": %02X | ANA    E\n", *mem);
	return (1);
}

t_opsize	ANA_H(t_memory *mem)
{
	printf(": %02X | ANA    H\n", *mem);
	return (1);
}

t_opsize	ANA_L(t_memory *mem)
{
	printf(": %02X | ANA    L\n", *mem);
	return (1);
}

t_opsize	ANA_M(t_memory *mem)
{
	printf(": %02X | ANA    M\n", *mem);
	return (1);
}

t_opsize	XRA_A(t_memory *mem)
{
	printf(": %02X | XRA    A\n", *mem);
	return (1);
}

t_opsize	XRA_B(t_memory *mem)
{
	printf(": %02X | XRA    B\n", *mem);
	return (1);
}

t_opsize	XRA_C(t_memory *mem)
{
	printf(": %02X | XRA    C\n", *mem);
	return (1);
}

t_opsize	XRA_D(t_memory *mem)
{
	printf(": %02X | XRA    D\n", *mem);
	return (1);
}

t_opsize	XRA_E(t_memory *mem)
{
	printf(": %02X | XRA    E\n", *mem);
	return (1);
}

t_opsize	XRA_H(t_memory *mem)
{
	printf(": %02X | XRA    H\n", *mem);
	return (1);
}

t_opsize	XRA_L(t_memory *mem)
{
	printf(": %02X | XRA    L\n", *mem);
	return (1);
}

t_opsize	XRA_M(t_memory *mem)
{
	printf(": %02X | XRA    M\n", *mem);
	return (1);
}

t_opsize	ORA_A(t_memory *mem)
{
	printf(": %02X | ORA    A\n", *mem);
	return (1);
}

t_opsize	ORA_B(t_memory *mem)
{
	printf(": %02X | ORA    B\n", *mem);
	return (1);
}

t_opsize	ORA_C(t_memory *mem)
{
	printf(": %02X | ORA    C\n", *mem);
	return (1);
}

t_opsize	ORA_D(t_memory *mem)
{
	printf(": %02X | ORA    D\n", *mem);
	return (1);
}

t_opsize	ORA_E(t_memory *mem)
{
	printf(": %02X | ORA    E\n", *mem);
	return (1);
}

t_opsize	ORA_H(t_memory *mem)
{
	printf(": %02X | ORA    H\n", *mem);
	return (1);
}

t_opsize	ORA_L(t_memory *mem)
{
	printf(": %02X | ORA    L\n", *mem);
	return (1);
}

t_opsize	ORA_M(t_memory *mem)
{
	printf(": %02X | ORA    M\n", *mem);
	return (1);
}

t_opsize	CMP_A(t_memory *mem)
{
	printf(": %02X | CMP    A\n", *mem);
	return (1);
}

t_opsize	CMP_B(t_memory *mem)
{
	printf(": %02X | CMP    B\n", *mem);
	return (1);
}

t_opsize	CMP_C(t_memory *mem)
{
	printf(": %02X | CMP    C\n", *mem);
	return (1);
}

t_opsize	CMP_D(t_memory *mem)
{
	printf(": %02X | CMP    D\n", *mem);
	return (1);
}

t_opsize	CMP_E(t_memory *mem)
{
	printf(": %02X | CMP    E\n", *mem);
	return (1);
}

t_opsize	CMP_H(t_memory *mem)
{
	printf(": %02X | CMP    H\n", *mem);
	return (1);
}

t_opsize	CMP_L(t_memory *mem)
{
	printf(": %02X | CMP    L\n", *mem);
	return (1);
}

t_opsize	CMP_M(t_memory *mem)
{
	printf(": %02X | CMP    M\n", *mem);
	return (1);
}

t_opsize	POP_B(t_memory *mem)
{
	printf(": %02X | POP    B\n", *mem);
	return (1);
}

t_opsize	POP_D(t_memory *mem)
{
	printf(": %02X | POP    B\n", *mem);
	return (1);
}

t_opsize	POP_H(t_memory *mem)
{
	printf(": %02X | POP    H\n", *mem);
	return (1);
}

t_opsize	POP_PSW(t_memory *mem)
{
	printf(": %02X | POP    PSW\n", *mem);
	return (1);
}

t_opsize	PUSH_B(t_memory *mem)
{
	printf(": %02X | PUSH   B\n", *mem);
	return (1);
}

t_opsize	PUSH_D(t_memory *mem)
{
	printf(": %02X | PUSH   D\n", *mem);
	return (1);
}

t_opsize	PUSH_H(t_memory *mem)
{
	printf(": %02X | PUSH   H\n", *mem);
	return (1);
}

t_opsize	PUSH_PSW(t_memory *mem)
{
	printf(": %02X | PUSH   PSW\n", *mem);
	return (1);
}

t_opsize	JNZ(t_memory *mem)
{
	printf(": %02X | JNZ    $%02X%02X\n", *mem, mem[2], mem[1]);
	return (3);
}

t_opsize	JNC(t_memory *mem)
{
	printf(": %02X | JNC    $%02X%02X\n", *mem, mem[2], mem[1]);
	return (3);
}

t_opsize	JM(t_memory *mem)
{
	printf(": %02X | JM     $%02X%02X\n", *mem, mem[2], mem[1]);
	return (3);
}

t_opsize	JMP(t_memory *mem)
{
	printf(": %02X | JMP    $%02X%02X\n", *mem, mem[2], mem[1]);
	return (3);
}

t_opsize	JP(t_memory *mem)
{
	printf(": %02X | JP     $%02X%02X\n", *mem, mem[2], mem[1]);
	return (3);
}

t_opsize	JPO(t_memory *mem)
{
	printf(": %02X | JPO    $%02X%02X\n", *mem, mem[2], mem[1]);
	return (3);
}

t_opsize	JPE(t_memory *mem)
{
	printf(": %02X | JPE    $%02X%02X\n", *mem, mem[2], mem[1]);
	return (3);
}

t_opsize	CP(t_memory *mem)
{
	printf(": %02X | CP     $%02X%02X\n", *mem, mem[2], mem[1]);
	return (3);
}

t_opsize	CM(t_memory *mem)
{
	printf(": %02X | CM     $%02X%02X\n", *mem, mem[2], mem[1]);
	return (3);
}

t_opsize	CPO(t_memory *mem)
{
	printf(": %02X | CPO    $%02X%02X\n", *mem, mem[2], mem[1]);
	return (3);
}

t_opsize	CPE(t_memory *mem)
{
	printf(": %02X | CPE    $%02X%02X\n", *mem, mem[2], mem[1]);
	return (3);
}

t_opsize	CNZ(t_memory *mem)
{
	printf(": %02X | CNZ    $%02X%02X\n", *mem, mem[2], mem[1]);
	return (3);
}

t_opsize	CNC(t_memory *mem)
{
	printf(": %02X | CNC    $%02X%02X\n", *mem, mem[2], mem[1]);
	return (3);
}

t_opsize	JZ(t_memory *mem)
{
	printf(": %02X | JZ     $%02X%02X\n", *mem, mem[2], mem[1]);
	return (3);
}

t_opsize	JC(t_memory *mem)
{
	printf(": %02X | JC     $%02X%02X\n", *mem, mem[2], mem[1]);
	return (3);
}

t_opsize	CZ(t_memory *mem)
{
	printf(": %02X | CZ     $%02X%02X\n", *mem, mem[2], mem[1]);
	return (3);
}

t_opsize	CC(t_memory *mem)
{
	printf(": %02X | CC     $%02X%02X\n", *mem, mem[2], mem[1]);
	return (3);
}

t_opsize	CALL(t_memory *mem)
{
	printf(": %02X | CALL    $%02X%02X\n", *mem, mem[2], mem[1]);
	return (3);
}

t_opsize	ADI(t_memory *mem)
{
	printf(": %02X | ADI    $%02X\n", *mem, mem[1]);
	return (2);
}

t_opsize	ACI(t_memory *mem)
{
	printf(": %02X | ACI    $%02X\n", *mem, mem[1]);
	return (2);
}

t_opsize	SUI(t_memory *mem)
{
	printf(": %02X | SUI    $%02X\n", *mem, mem[1]);
	return (2);
}

t_opsize	SBI(t_memory *mem)
{
	printf(": %02X | SBI    $%02X\n", *mem, mem[1]);
	return (2);
}

t_opsize	ANI(t_memory *mem)
{
	printf(": %02X | ANI    $%02X\n", *mem, mem[1]);
	return (2);
}

t_opsize	XRI(t_memory *mem)
{
	printf(": %02X | XRI    $%02X\n", *mem, mem[1]);
	return (2);
}

t_opsize	ORI(t_memory *mem)
{
	printf(": %02X | ORI    $%02X\n", *mem, mem[1]);
	return (2);
}

t_opsize	CPI(t_memory *mem)
{
	printf(": %02X | CPI    $%02X\n", *mem, mem[1]);
	return (2);
}

t_opsize	IN(t_memory *mem)
{
	printf(": %02X | IN     $%02X\n", *mem, mem[1]);
	return (2);
}

t_opsize	OUT(t_memory *mem)
{
	printf(": %02X | OUT    $%02X\n", *mem, mem[1]);
	return (2);
}

t_opsize	RST_0(t_memory *mem)
{
	printf(": %02X | RST    0\n", *mem);
	return (1);
}

t_opsize	RST_1(t_memory *mem)
{
	printf(": %02X | RST    1\n", *mem);
	return (1);
}

t_opsize	RST_2(t_memory *mem)
{
	printf(": %02X | RST    2\n", *mem);
	return (1);
}

t_opsize	RST_3(t_memory *mem)
{
	printf(": %02X | RST    3\n", *mem);
	return (1);
}

t_opsize	RST_4(t_memory *mem)
{
	printf(": %02X | RST    4\n", *mem);
	return (1);
}

t_opsize	RST_5(t_memory *mem)
{
	printf(": %02X | RST    5\n", *mem);
	return (1);
}

t_opsize	RST_6(t_memory *mem)
{
	printf(": %02X | RST    6\n", *mem);
	return (1);
}

t_opsize	RST_7(t_memory *mem)
{
	printf(": %02X | RST    7\n", *mem);
	return (1);
}

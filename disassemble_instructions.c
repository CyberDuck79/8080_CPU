/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   disassemble_instructions.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhenrion <fhenrion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/09 12:08:59 by fhenrion          #+#    #+#             */
/*   Updated: 2020/01/10 18:06:05 by fhenrion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "disassemble_instructions.h"

t_opsize	NOP(t_memory *mem)
{
	printf("$%02x: NOP\n", *mem);
	return (1);
}

t_opsize	RLC(t_memory *mem)
{
	printf("$%02x: RLC\n", *mem);
	return (1);
}

t_opsize	STC(t_memory *mem)
{
	printf("$%02x: STC\n", *mem);
	return (1);
}

t_opsize	CMC(t_memory *mem)
{
	printf("$%02x: CMC\n", *mem);
	return (1);
}

t_opsize	HLT(t_memory *mem)
{
	printf("$%02x: HLT\n", *mem);
	return (1);
}

t_opsize	RNZ(t_memory *mem)
{
	printf("$%02x: RZN\n", *mem);
	return (1);
}

t_opsize	RZ(t_memory *mem)
{
	printf("$%02x: RZN\n", *mem);
	return (1);
}

t_opsize	RET(t_memory *mem)
{
	printf("$%02x: RZN\n", *mem);
	return (1);
}

t_opsize	LXI_B(t_memory *mem)
{
	printf("$%02x: LXI    B,#$%02x%02x\n", *mem, mem[2], mem[1]);
	return (3);
}

t_opsize	LXI_D(t_memory *mem)
{
	printf("$%02x: LXI    D,#$%02x%02x\n", *mem, mem[2], mem[1]);
	return (3);
}

t_opsize	LXI_H(t_memory *mem)
{
	printf("$%02x: LXI    H,#$%02x%02x\n", *mem, mem[2], mem[1]);
	return (3);
}

t_opsize	LXI_SP(t_memory *mem)
{
	printf("$%02x: LXI   SP,#$%02x%02x\n", *mem, mem[2], mem[1]);
	return (3);
}

t_opsize	STAX_B(t_memory *mem)
{
	printf("$%02x: STAX   B\n", *mem);
	return (1);
}

t_opsize	STAX_D(t_memory *mem)
{
	printf("$%02x: STAX   D\n", *mem);
	return (1);
}

t_opsize	INX_B(t_memory *mem)
{
	printf("$%02x: INX    B\n", *mem);
	return (1);
}

t_opsize	INX_D(t_memory *mem)
{
	printf("$%02x: INX    D\n", *mem);
	return (1);
}

t_opsize	INX_H(t_memory *mem)
{
	printf("$%02x: INX    H\n", *mem);
	return (1);
}

t_opsize	INX_SP(t_memory *mem)
{
	printf("$%02x: INX   SP\n", *mem);
	return (1);
}

t_opsize	INR_A(t_memory *mem)
{
	printf("$%02x: INR    A\n", *mem);
	return (1);
}

t_opsize	INR_B(t_memory *mem)
{
	printf("$%02x: INR    B\n", *mem);
	return (1);
}

t_opsize	INR_C(t_memory *mem)
{
	printf("$%02x: INR    C\n", *mem);
	return (1);
}

t_opsize	INR_D(t_memory *mem)
{
	printf("$%02x: INR    D\n", *mem);
	return (1);
}

t_opsize	INR_E(t_memory *mem)
{
	printf("$%02x: INR    E\n", *mem);
	return (1);
}

t_opsize	INR_H(t_memory *mem)
{
	printf("$%02x: INR    H\n", *mem);
	return (1);
}

t_opsize	INR_L(t_memory *mem)
{
	printf("$%02x: INR    L\n", *mem);
	return (1);
}

t_opsize	INR_M(t_memory *mem)
{
	printf("$%02x: INR    M\n", *mem);
	return (1);
}

t_opsize	DCR_A(t_memory *mem)
{
	printf("$%02x: DCR    A\n", *mem);
	return (1);
}

t_opsize	DCR_B(t_memory *mem)
{
	printf("$%02x: DCR    B\n", *mem);
	return (1);
}

t_opsize	DCR_C(t_memory *mem)
{
	printf("$%02x: DCR    C\n", *mem);
	return (1);
}

t_opsize	DCR_D(t_memory *mem)
{
	printf("$%02x: DCR    D\n", *mem);
	return (1);
}

t_opsize	DCR_E(t_memory *mem)
{
	printf("$%02x: DCR    E\n", *mem);
	return (1);
}

t_opsize	DCR_H(t_memory *mem)
{
	printf("$%02x: DCR    H\n", *mem);
	return (1);
}

t_opsize	DCR_L(t_memory *mem)
{
	printf("$%02x: DCR    L\n", *mem);
	return (1);
}

t_opsize	DCR_M(t_memory *mem)
{
	printf("$%02x: DCR    M\n", *mem);
	return (1);
}

t_opsize	MVI_A(t_memory *mem)
{
	printf("$%02x: MVI    A,#$%02x\n", *mem, mem[1]);
	return (2);
}

t_opsize	MVI_B(t_memory *mem)
{
	printf("$%02x: MVI    B,#$%02x\n", *mem, mem[1]);
	return (2);
}

t_opsize	MVI_C(t_memory *mem)
{
	printf("$%02x: MVI    C,#$%02x\n", *mem, mem[1]);
	return (2);
}

t_opsize	MVI_D(t_memory *mem)
{
	printf("$%02x: MVI    D,#$%02x\n", *mem, mem[1]);
	return (2);
}

t_opsize	MVI_E(t_memory *mem)
{
	printf("$%02x: MVI    E,#$%02x\n", *mem, mem[1]);
	return (2);
}

t_opsize	MVI_H(t_memory *mem)
{
	printf("$%02x: MVI    H,#$%02x\n", *mem, mem[1]);
	return (2);
}

t_opsize	MVI_L(t_memory *mem)
{
	printf("$%02x: MVI    H,#$%02x\n", *mem, mem[1]);
	return (2);
}

t_opsize	MVI_M(t_memory *mem)
{
	printf("$%02x: MVI    M,#$%02x\n", *mem, mem[1]);
	return (2);
}

t_opsize	DAD_B(t_memory *mem)
{
	printf("$%02x: DAD    B\n", *mem);
	return (1);
}

t_opsize	DAD_D(t_memory *mem)
{
	printf("$%02x: DAD    D\n", *mem);
	return (1);
}

t_opsize	DAD_H(t_memory *mem)
{
	printf("$%02x: DAD    H\n", *mem);
	return (1);
}

t_opsize	DAD_SP(t_memory *mem)
{
	printf("$%02x: DAD   SP\n", *mem);
	return (1);
}

t_opsize	LDAX_B(t_memory *mem)
{
	printf("$%02x: LDAX   B\n", *mem);
	return (1);
}

t_opsize	LDAX_D(t_memory *mem)
{
	printf("$%02x: LDAX   D\n", *mem);
	return (1);
}

t_opsize	DCX_B(t_memory *mem)
{
	printf("$%02x: DCX    B\n", *mem);
	return (1);
}

t_opsize	DCX_D(t_memory *mem)
{
	printf("$%02x: DCX    D\n", *mem);
	return (1);
}

t_opsize	DCX_H(t_memory *mem)
{
	printf("$%02x: DCX    H\n", *mem);
	return (1);
}

t_opsize	DCX_SP(t_memory *mem)
{
	printf("$%02x: DCX   SP\n", *mem);
	return (1);
}

t_opsize	RRC(t_memory *mem)
{
	printf("$%02x: RRC\n", *mem);
	return (1);
}

t_opsize	RAL(t_memory *mem)
{
	printf("$%02x: RAL\n", *mem);
	return (1);
}

t_opsize	RAR(t_memory *mem)
{
	printf("$%02x: RAR\n", *mem);
	return (1);
}

t_opsize	CMA(t_memory *mem)
{
	printf("$%02x: CMA\n", *mem);
	return (1);
}

t_opsize	SHLD(t_memory *mem)
{
	printf("$%02x: SHLD    $%02x%02x\n", *mem, mem[2], mem[1]);
	return (3);
}

t_opsize	LHLD(t_memory *mem)
{
	printf("$%02x: LHLD    $%02x%02x\n", *mem, mem[2], mem[1]);
	return (3);
}

t_opsize	STA(t_memory *mem)
{
	printf("$%02x: STA     $%02x%02x\n", *mem, mem[2], mem[1]);
	return (3);
}

t_opsize	LDA(t_memory *mem)
{
	printf("$%02x: LDA     $%02x%02x\n", *mem, mem[2], mem[1]);
	return (3);
}

t_opsize	MOV_AA(t_memory *mem)
{
	printf("$%02x: MOV    A,A", *mem);
	return (1);
}

t_opsize	MOV_AB(t_memory *mem)
{
	printf("$%02x: MOV    A,B", *mem);
	return (1);
}

t_opsize	MOV_AC(t_memory *mem)
{
	printf("$%02x: MOV    A,C", *mem);
	return (1);
}

t_opsize	MOV_AD(t_memory *mem)
{
	printf("$%02x: MOV    A,D", *mem);
	return (1);
}

t_opsize	MOV_AE(t_memory *mem)
{
	printf("$%02x: MOV    A,E", *mem);
	return (1);
}

t_opsize	MOV_AH(t_memory *mem)
{
	printf("$%02x: MOV    A,H", *mem);
	return (1);
}
t_opsize	MOV_AL(t_memory *mem)
{
	printf("$%02x: MOV    A,L", *mem);
	return (1);
}

t_opsize	MOV_AM(t_memory *mem)
{
	printf("$%02x: MOV    A,M", *mem);
	return (1);
}

t_opsize	MOV_BA(t_memory *mem)
{
	printf("$%02x: MOV    B,A", *mem);
	return (1);
}

t_opsize	MOV_BB(t_memory *mem)
{
	printf("$%02x: MOV    B,B", *mem);
	return (1);
}

t_opsize	MOV_BC(t_memory *mem)
{
	printf("$%02x: MOV    B,C", *mem);
	return (1);
}

t_opsize	MOV_BD(t_memory *mem)
{
	printf("$%02x: MOV    B,D", *mem);
	return (1);
}

t_opsize	MOV_BE(t_memory *mem)
{
	printf("$%02x: MOV    B,E", *mem);
	return (1);
}

t_opsize	MOV_BH(t_memory *mem)
{
	printf("$%02x: MOV    B,H", *mem);
	return (1);
}
t_opsize	MOV_BL(t_memory *mem)
{
	printf("$%02x: MOV    B,L", *mem);
	return (1);
}

t_opsize	MOV_BM(t_memory *mem)
{
	printf("$%02x: MOV    B,M", *mem);
	return (1);
}

t_opsize	MOV_CA(t_memory *mem)
{
	printf("$%02x: MOV    C,A", *mem);
	return (1);
}

t_opsize	MOV_CB(t_memory *mem)
{
	printf("$%02x: MOV    C,B", *mem);
	return (1);
}

t_opsize	MOV_CC(t_memory *mem)
{
	printf("$%02x: MOV    C,C", *mem);
	return (1);
}

t_opsize	MOV_CD(t_memory *mem)
{
	printf("$%02x: MOV    C,D", *mem);
	return (1);
}

t_opsize	MOV_CE(t_memory *mem)
{
	printf("$%02x: MOV    C,E", *mem);
	return (1);
}

t_opsize	MOV_CH(t_memory *mem)
{
	printf("$%02x: MOV    C,H", *mem);
	return (1);
}
t_opsize	MOV_CL(t_memory *mem)
{
	printf("$%02x: MOV    C,L", *mem);
	return (1);
}

t_opsize	MOV_CM(t_memory *mem)
{
	printf("$%02x: MOV    C,M", *mem);
	return (1);
}

t_opsize	MOV_DA(t_memory *mem)
{
	printf("$%02x: MOV    D,A", *mem);
	return (1);
}

t_opsize	MOV_DB(t_memory *mem)
{
	printf("$%02x: MOV    D,B", *mem);
	return (1);
}

t_opsize	MOV_DC(t_memory *mem)
{
	printf("$%02x: MOV    D,C", *mem);
	return (1);
}

t_opsize	MOV_DD(t_memory *mem)
{
	printf("$%02x: MOV    D,D", *mem);
	return (1);
}

t_opsize	MOV_DE(t_memory *mem)
{
	printf("$%02x: MOV    D,E", *mem);
	return (1);
}

t_opsize	MOV_DH(t_memory *mem)
{
	printf("$%02x: MOV    D,H", *mem);
	return (1);
}
t_opsize	MOV_DL(t_memory *mem)
{
	printf("$%02x: MOV    D,L", *mem);
	return (1);
}

t_opsize	MOV_DM(t_memory *mem)
{
	printf("$%02x: MOV    D,M", *mem);
	return (1);
}

t_opsize	MOV_EA(t_memory *mem)
{
	printf("$%02x: MOV    E,A", *mem);
	return (1);
}

t_opsize	MOV_EB(t_memory *mem)
{
	printf("$%02x: MOV    E,B", *mem);
	return (1);
}

t_opsize	MOV_EC(t_memory *mem)
{
	printf("$%02x: MOV    E,C", *mem);
	return (1);
}

t_opsize	MOV_ED(t_memory *mem)
{
	printf("$%02x: MOV    E,D", *mem);
	return (1);
}

t_opsize	MOV_EE(t_memory *mem)
{
	printf("$%02x: MOV    E,E", *mem);
	return (1);
}

t_opsize	MOV_EH(t_memory *mem)
{
	printf("$%02x: MOV    E,H", *mem);
	return (1);
}
t_opsize	MOV_EL(t_memory *mem)
{
	printf("$%02x: MOV    E,L", *mem);
	return (1);
}

t_opsize	MOV_EM(t_memory *mem)
{
	printf("$%02x: MOV    E,M", *mem);
	return (1);
}

t_opsize	MOV_HA(t_memory *mem)
{
	printf("$%02x: MOV    H,A", *mem);
	return (1);
}

t_opsize	MOV_HB(t_memory *mem)
{
	printf("$%02x: MOV    H,B", *mem);
	return (1);
}

t_opsize	MOV_HC(t_memory *mem)
{
	printf("$%02x: MOV    H,C", *mem);
	return (1);
}

t_opsize	MOV_HD(t_memory *mem)
{
	printf("$%02x: MOV    H,D", *mem);
	return (1);
}

t_opsize	MOV_HE(t_memory *mem)
{
	printf("$%02x: MOV    H,E", *mem);
	return (1);
}

t_opsize	MOV_HH(t_memory *mem)
{
	printf("$%02x: MOV    H,H", *mem);
	return (1);
}
t_opsize	MOV_HL(t_memory *mem)
{
	printf("$%02x: MOV    H,L", *mem);
	return (1);
}

t_opsize	MOV_HM(t_memory *mem)
{
	printf("$%02x: MOV    H,M", *mem);
	return (1);
}

t_opsize	MOV_LA(t_memory *mem)
{
	printf("$%02x: MOV    L,A", *mem);
	return (1);
}

t_opsize	MOV_LB(t_memory *mem)
{
	printf("$%02x: MOV    L,B", *mem);
	return (1);
}

t_opsize	MOV_LC(t_memory *mem)
{
	printf("$%02x: MOV    L,C", *mem);
	return (1);
}

t_opsize	MOV_LD(t_memory *mem)
{
	printf("$%02x: MOV    L,D", *mem);
	return (1);
}

t_opsize	MOV_LE(t_memory *mem)
{
	printf("$%02x: MOV    L,E", *mem);
	return (1);
}

t_opsize	MOV_LH(t_memory *mem)
{
	printf("$%02x: MOV    L,H", *mem);
	return (1);
}
t_opsize	MOV_LL(t_memory *mem)
{
	printf("$%02x: MOV    L,L", *mem);
	return (1);
}

t_opsize	MOV_LM(t_memory *mem)
{
	printf("$%02x: MOV    L,M", *mem);
	return (1);
}

t_opsize	MOV_MA(t_memory *mem)
{
	printf("$%02x: MOV    M,A", *mem);
	return (1);
}

t_opsize	MOV_MB(t_memory *mem)
{
	printf("$%02x: MOV    M,B", *mem);
	return (1);
}

t_opsize	MOV_MC(t_memory *mem)
{
	printf("$%02x: MOV    M,C", *mem);
	return (1);
}

t_opsize	MOV_MD(t_memory *mem)
{
	printf("$%02x: MOV    M,D", *mem);
	return (1);
}

t_opsize	MOV_ME(t_memory *mem)
{
	printf("$%02x: MOV    M,E", *mem);
	return (1);
}

t_opsize	MOV_MH(t_memory *mem)
{
	printf("$%02x: MOV    M,H", *mem);
	return (1);
}
t_opsize	MOV_ML(t_memory *mem)
{
	printf("$%02x: MOV    M,L", *mem);
	return (1);
}

t_opsize	MOV_MM(t_memory *mem)
{
	printf("$%02x: MOV    M,M", *mem);
	return (1);
}

t_opsize	ADD_A(t_memory *mem)
{
	printf("$%02x: ADD    A\n", *mem);
	return (1);
}

t_opsize	ADD_B(t_memory *mem)
{
	printf("$%02x: ADD    B\n", *mem);
	return (1);
}

t_opsize	ADD_C(t_memory *mem)
{
	printf("$%02x: ADD    C\n", *mem);
	return (1);
}

t_opsize	ADD_D(t_memory *mem)
{
	printf("$%02x: ADD    D\n", *mem);
	return (1);
}

t_opsize	ADD_E(t_memory *mem)
{
	printf("$%02x: ADD    E\n", *mem);
	return (1);
}

t_opsize	ADD_H(t_memory *mem)
{
	printf("$%02x: ADD    H\n", *mem);
	return (1);
}

t_opsize	ADD_L(t_memory *mem)
{
	printf("$%02x: ADD    L\n", *mem);
	return (1);
}

t_opsize	ADD_M(t_memory *mem)
{
	printf("$%02x: ADD    M\n", *mem);
	return (1);
}

t_opsize	ADC_A(t_memory *mem)
{
	printf("$%02x: ADC    A\n", *mem);
	return (1);
}

t_opsize	ADC_B(t_memory *mem)
{
	printf("$%02x: ADC    B\n", *mem);
	return (1);
}

t_opsize	ADC_C(t_memory *mem)
{
	printf("$%02x: ADC    C\n", *mem);
	return (1);
}

t_opsize	ADC_D(t_memory *mem)
{
	printf("$%02x: ADC    D\n", *mem);
	return (1);
}

t_opsize	ADC_E(t_memory *mem)
{
	printf("$%02x: ADC    E\n", *mem);
	return (1);
}

t_opsize	ADC_H(t_memory *mem)
{
	printf("$%02x: ADC    H\n", *mem);
	return (1);
}

t_opsize	ADC_L(t_memory *mem)
{
	printf("$%02x: ADC    L\n", *mem);
	return (1);
}

t_opsize	ADC_M(t_memory *mem)
{
	printf("$%02x: ADC    M\n", *mem);
	return (1);
}

t_opsize	SUB_A(t_memory *mem)
{
	printf("$%02x: SUB    A\n", *mem);
	return (1);
}

t_opsize	SUB_B(t_memory *mem)
{
	printf("$%02x: SUB    B\n", *mem);
	return (1);
}

t_opsize	SUB_C(t_memory *mem)
{
	printf("$%02x: SUB    C\n", *mem);
	return (1);
}

t_opsize	SUB_D(t_memory *mem)
{
	printf("$%02x: SUB    D\n", *mem);
	return (1);
}

t_opsize	SUB_E(t_memory *mem)
{
	printf("$%02x: SUB    E\n", *mem);
	return (1);
}

t_opsize	SUB_H(t_memory *mem)
{
	printf("$%02x: SUB    H\n", *mem);
	return (1);
}

t_opsize	SUB_L(t_memory *mem)
{
	printf("$%02x: SUB    L\n", *mem);
	return (1);
}

t_opsize	SUB_M(t_memory *mem)
{
	printf("$%02x: SUB    M\n", *mem);
	return (1);
}

t_opsize	SSB_A(t_memory *mem)
{
	printf("$%02x: SSB    A\n", *mem);
	return (1);
}

t_opsize	SSB_B(t_memory *mem)
{
	printf("$%02x: SSB    B\n", *mem);
	return (1);
}

t_opsize	SSB_C(t_memory *mem)
{
	printf("$%02x: SSB    C\n", *mem);
	return (1);
}

t_opsize	SSB_D(t_memory *mem)
{
	printf("$%02x: SSB    D\n", *mem);
	return (1);
}

t_opsize	SSB_E(t_memory *mem)
{
	printf("$%02x: SSB    E\n", *mem);
	return (1);
}

t_opsize	SSB_H(t_memory *mem)
{
	printf("$%02x: SSB    H\n", *mem);
	return (1);
}

t_opsize	SSB_L(t_memory *mem)
{
	printf("$%02x: SSB    L\n", *mem);
	return (1);
}

t_opsize	SSB_M(t_memory *mem)
{
	printf("$%02x: SSB    M\n", *mem);
	return (1);
}

t_opsize	ANA_A(t_memory *mem)
{
	printf("$%02x: ANA    A\n", *mem);
	return (1);
}

t_opsize	ANA_B(t_memory *mem)
{
	printf("$%02x: ANA    B\n", *mem);
	return (1);
}

t_opsize	ANA_C(t_memory *mem)
{
	printf("$%02x: ANA    C\n", *mem);
	return (1);
}

t_opsize	ANA_D(t_memory *mem)
{
	printf("$%02x: ANA    D\n", *mem);
	return (1);
}

t_opsize	ANA_E(t_memory *mem)
{
	printf("$%02x: ANA    E\n", *mem);
	return (1);
}

t_opsize	ANA_H(t_memory *mem)
{
	printf("$%02x: ANA    H\n", *mem);
	return (1);
}

t_opsize	ANA_L(t_memory *mem)
{
	printf("$%02x: ANA    L\n", *mem);
	return (1);
}

t_opsize	ANA_M(t_memory *mem)
{
	printf("$%02x: ANA    M\n", *mem);
	return (1);
}

t_opsize	XRA_A(t_memory *mem)
{
	printf("$%02x: XRA    A\n", *mem);
	return (1);
}

t_opsize	XRA_B(t_memory *mem)
{
	printf("$%02x: XRA    B\n", *mem);
	return (1);
}

t_opsize	XRA_C(t_memory *mem)
{
	printf("$%02x: XRA    C\n", *mem);
	return (1);
}

t_opsize	XRA_D(t_memory *mem)
{
	printf("$%02x: XRA    D\n", *mem);
	return (1);
}

t_opsize	XRA_E(t_memory *mem)
{
	printf("$%02x: XRA    E\n", *mem);
	return (1);
}

t_opsize	XRA_H(t_memory *mem)
{
	printf("$%02x: XRA    H\n", *mem);
	return (1);
}

t_opsize	XRA_L(t_memory *mem)
{
	printf("$%02x: XRA    L\n", *mem);
	return (1);
}

t_opsize	XRA_M(t_memory *mem)
{
	printf("$%02x: XRA    M\n", *mem);
	return (1);
}

t_opsize	ORA_A(t_memory *mem)
{
	printf("$%02x: ORA    A\n", *mem);
	return (1);
}

t_opsize	ORA_B(t_memory *mem)
{
	printf("$%02x: ORA    B\n", *mem);
	return (1);
}

t_opsize	ORA_C(t_memory *mem)
{
	printf("$%02x: ORA    C\n", *mem);
	return (1);
}

t_opsize	ORA_D(t_memory *mem)
{
	printf("$%02x: ORA    D\n", *mem);
	return (1);
}

t_opsize	ORA_E(t_memory *mem)
{
	printf("$%02x: ORA    E\n", *mem);
	return (1);
}

t_opsize	ORA_H(t_memory *mem)
{
	printf("$%02x: ORA    H\n", *mem);
	return (1);
}

t_opsize	ORA_L(t_memory *mem)
{
	printf("$%02x: ORA    L\n", *mem);
	return (1);
}

t_opsize	ORA_M(t_memory *mem)
{
	printf("$%02x: ORA    M\n", *mem);
	return (1);
}

t_opsize	CMP_A(t_memory *mem)
{
	printf("$%02x: ORA    A\n", *mem);
	return (1);
}

t_opsize	CMP_B(t_memory *mem)
{
	printf("$%02x: ORA    B\n", *mem);
	return (1);
}

t_opsize	CMP_C(t_memory *mem)
{
	printf("$%02x: ORA    C\n", *mem);
	return (1);
}

t_opsize	CMP_D(t_memory *mem)
{
	printf("$%02x: ORA    D\n", *mem);
	return (1);
}

t_opsize	CMP_E(t_memory *mem)
{
	printf("$%02x: ORA    E\n", *mem);
	return (1);
}

t_opsize	CMP_H(t_memory *mem)
{
	printf("$%02x: ORA    H\n", *mem);
	return (1);
}

t_opsize	CMP_L(t_memory *mem)
{
	printf("$%02x: ORA    L\n", *mem);
	return (1);
}

t_opsize	CMP_M(t_memory *mem)
{
	printf("$%02x: ORA    M\n", *mem);
	return (1);
}

t_opsize	POP_B(t_memory *mem)
{
	printf("$%02x: POP    B\n", *mem);
	return (1);
}

t_opsize	PUSH_B(t_memory *mem)
{
	printf("$%02x: POP    B\n", *mem);
	return (1);
}

t_opsize	JNZ(t_memory *mem)
{
	printf("$%02x: JNZ     $%02x%02x\n", *mem, mem[2], mem[1]);
	return (3);
}

t_opsize	JMP(t_memory *mem)
{
	printf("$%02x: JMP     $%02x%02x\n", *mem, mem[2], mem[1]);
	return (3);
}

t_opsize	CNZ(t_memory *mem)
{
	printf("$%02x: CNZ     $%02x%02x\n", *mem, mem[2], mem[1]);
	return (3);
}

t_opsize	JZ(t_memory *mem)
{
	printf("$%02x: JZ      $%02x%02x\n", *mem, mem[2], mem[1]);
	return (3);
}

t_opsize	CZ(t_memory *mem)
{
	printf("$%02x: CZ      $%02x%02x\n", *mem, mem[2], mem[1]);
	return (3);
}

t_opsize	CALL(t_memory *mem)
{
	printf("$%02x: CALL    $%02x%02x\n", *mem, mem[2], mem[1]);
	return (3);
}

t_opsize	ADI(t_memory *mem)
{
	printf("$%02x: ADI     $%02x\n", *mem, mem[1]);
	return (2);
}

t_opsize	ACI(t_memory *mem)
{
	printf("$%02x: ACI     $%02x\n", *mem, mem[1]);
	return (2);
}

t_opsize	RST_0(t_memory *mem)
{
	printf("$%02x: RST    0\n", *mem);
	return (1);
}

t_opsize	RST_1(t_memory *mem)
{
	printf("$%02x: RST    1\n", *mem);
	return (1);
}

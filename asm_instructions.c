/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   asm_instructions.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhenrion <fhenrion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/09 12:08:59 by fhenrion          #+#    #+#             */
/*   Updated: 2020/01/17 11:15:24 by fhenrion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "asm_instructions.h"

//// redo order by instructions address (WIP)

t_opsize	ASM_NOP(t_memory *mem)
{
	printf(": %02X | NOP\n", *mem);
	return (1);
}

t_opsize	ASM_LXI_B(t_memory *mem)
{
	printf(": %02X | LXI    B,#$%02X%02X\n", *mem, mem[2], mem[1]);
	return (3);
}

t_opsize	ASM_STAX_B(t_memory *mem)
{
	printf(": %02X | STAX   B\n", *mem);
	return (1);
}

t_opsize	ASM_INX_B(t_memory *mem)
{
	printf(": %02X | INX    B\n", *mem);
	return (1);
}

t_opsize	ASM_INR_B(t_memory *mem)
{
	printf(": %02X | INR    B\n", *mem);
	return (1);
}

t_opsize	ASM_DCR_B(t_memory *mem)
{
	printf(": %02X | DCR    B\n", *mem);
	return (1);
}

t_opsize	ASM_MVI_B(t_memory *mem)
{
	printf(": %02X | MVI    B,#$%02X\n", *mem, mem[1]);
	return (2);
}

t_opsize	ASM_RLC(t_memory *mem)
{
	printf(": %02X | RLC\n", *mem);
	return (1);
}

t_opsize	ASM_DAD_B(t_memory *mem)
{
	printf(": %02X | DAD    B\n", *mem);
	return (1);
}

t_opsize	ASM_LDAX_B(t_memory *mem)
{
	printf(": %02X | LDAX   B\n", *mem);
	return (1);
}

t_opsize	ASM_DCX_B(t_memory *mem)
{
	printf(": %02X | DCX    B\n", *mem);
	return (1);
}

// Reorder (WIP)

t_opsize	ASM_STC(t_memory *mem)
{
	printf(": %02X | STC\n", *mem);
	return (1);
}

t_opsize	ASM_CMC(t_memory *mem)
{
	printf(": %02X | CMC\n", *mem);
	return (1);
}

t_opsize	ASM_HLT(t_memory *mem)
{
	printf(": %02X | HLT\n", *mem);
	return (1);
}

t_opsize	ASM_XTHL(t_memory *mem)
{
	printf(": %02X | XTHL\n", *mem);
	return (1);
}

t_opsize	ASM_SPHL(t_memory *mem)
{
	printf(": %02X | SPHL\n", *mem);
	return (1);
}

t_opsize	ASM_XCHG(t_memory *mem)
{
	printf(": %02X | XCHG\n", *mem);
	return (1);
}

t_opsize	ASM_PCHL(t_memory *mem)
{
	printf(": %02X | PCHL\n", *mem);
	return (1);
}

t_opsize	ASM_RNZ(t_memory *mem)
{
	printf(": %02X | RNZ\n", *mem);
	return (1);
}

t_opsize	ASM_RNC(t_memory *mem)
{
	printf(": %02X | RNC\n", *mem);
	return (1);
}

t_opsize	ASM_RP(t_memory *mem)
{
	printf(": %02X | RP\n", *mem);
	return (1);
}

t_opsize	ASM_RPO(t_memory *mem)
{
	printf(": %02X | RPO\n", *mem);
	return (1);
}

t_opsize	ASM_RPE(t_memory *mem)
{
	printf(": %02X | RPE\n", *mem);
	return (1);
}

t_opsize	ASM_RZ(t_memory *mem)
{
	printf(": %02X | RZ\n", *mem);
	return (1);
}

t_opsize	ASM_RC(t_memory *mem)
{
	printf(": %02X | RC\n", *mem);
	return (1);
}

t_opsize	ASM_RM(t_memory *mem)
{
	printf(": %02X | RM\n", *mem);
	return (1);
}

t_opsize	ASM_DI(t_memory *mem)
{
	printf(": %02X | DI\n", *mem);
	return (1);
}

t_opsize	ASM_EI(t_memory *mem)
{
	printf(": %02X | EI\n", *mem);
	return (1);
}

t_opsize	ASM_RET(t_memory *mem)
{
	printf(": %02X | RET\n", *mem);
	return (1);
}

t_opsize	ASM_LXI_D(t_memory *mem)
{
	printf(": %02X | LXI    D,#$%02X%02X\n", *mem, mem[2], mem[1]);
	return (3);
}

t_opsize	ASM_LXI_H(t_memory *mem)
{
	printf(": %02X | LXI    H,#$%02X%02X\n", *mem, mem[2], mem[1]);
	return (3);
}

t_opsize	ASM_LXI_SP(t_memory *mem)
{
	printf(": %02X | LXI    SP,#$%02X%02X\n", *mem, mem[2], mem[1]);
	return (3);
}

t_opsize	ASM_STAX_D(t_memory *mem)
{
	printf(": %02X | STAX   D\n", *mem);
	return (1);
}

t_opsize	ASM_INX_D(t_memory *mem)
{
	printf(": %02X | INX    D\n", *mem);
	return (1);
}

t_opsize	ASM_INX_H(t_memory *mem)
{
	printf(": %02X | INX    H\n", *mem);
	return (1);
}

t_opsize	ASM_INX_SP(t_memory *mem)
{
	printf(": %02X | INX   SP\n", *mem);
	return (1);
}

t_opsize	ASM_INR_A(t_memory *mem)
{
	printf(": %02X | INR    A\n", *mem);
	return (1);
}

t_opsize	ASM_INR_C(t_memory *mem)
{
	printf(": %02X | INR    C\n", *mem);
	return (1);
}

t_opsize	ASM_INR_D(t_memory *mem)
{
	printf(": %02X | INR    D\n", *mem);
	return (1);
}

t_opsize	ASM_INR_E(t_memory *mem)
{
	printf(": %02X | INR    E\n", *mem);
	return (1);
}

t_opsize	ASM_INR_H(t_memory *mem)
{
	printf(": %02X | INR    H\n", *mem);
	return (1);
}

t_opsize	ASM_INR_L(t_memory *mem)
{
	printf(": %02X | INR    L\n", *mem);
	return (1);
}

t_opsize	ASM_INR_M(t_memory *mem)
{
	printf(": %02X | INR    M\n", *mem);
	return (1);
}

t_opsize	ASM_DCR_A(t_memory *mem)
{
	printf(": %02X | DCR    A\n", *mem);
	return (1);
}

t_opsize	ASM_DCR_C(t_memory *mem)
{
	printf(": %02X | DCR    C\n", *mem);
	return (1);
}

t_opsize	ASM_DCR_D(t_memory *mem)
{
	printf(": %02X | DCR    D\n", *mem);
	return (1);
}

t_opsize	ASM_DCR_E(t_memory *mem)
{
	printf(": %02X | DCR    E\n", *mem);
	return (1);
}

t_opsize	ASM_DCR_H(t_memory *mem)
{
	printf(": %02X | DCR    H\n", *mem);
	return (1);
}

t_opsize	ASM_DCR_L(t_memory *mem)
{
	printf(": %02X | DCR    L\n", *mem);
	return (1);
}

t_opsize	ASM_DCR_M(t_memory *mem)
{
	printf(": %02X | DCR    M\n", *mem);
	return (1);
}

t_opsize	ASM_MVI_A(t_memory *mem)
{
	printf(": %02X | MVI    A,#$%02X\n", *mem, mem[1]);
	return (2);
}

t_opsize	ASM_MVI_C(t_memory *mem)
{
	printf(": %02X | MVI    C,#$%02X\n", *mem, mem[1]);
	return (2);
}

t_opsize	ASM_MVI_D(t_memory *mem)
{
	printf(": %02X | MVI    D,#$%02X\n", *mem, mem[1]);
	return (2);
}

t_opsize	ASM_MVI_E(t_memory *mem)
{
	printf(": %02X | MVI    E,#$%02X\n", *mem, mem[1]);
	return (2);
}

t_opsize	ASM_MVI_H(t_memory *mem)
{
	printf(": %02X | MVI    H,#$%02X\n", *mem, mem[1]);
	return (2);
}

t_opsize	ASM_MVI_L(t_memory *mem)
{
	printf(": %02X | MVI    L,#$%02X\n", *mem, mem[1]);
	return (2);
}

t_opsize	ASM_MVI_M(t_memory *mem)
{
	printf(": %02X | MVI    M,#$%02X\n", *mem, mem[1]);
	return (2);
}

t_opsize	ASM_DAD_D(t_memory *mem)
{
	printf(": %02X | DAD    D\n", *mem);
	return (1);
}

t_opsize	ASM_DAD_H(t_memory *mem)
{
	printf(": %02X | DAD    H\n", *mem);
	return (1);
}

t_opsize	ASM_DAD_SP(t_memory *mem)
{
	printf(": %02X | DAD   SP\n", *mem);
	return (1);
}

t_opsize	ASM_LDAX_D(t_memory *mem)
{
	printf(": %02X | LDAX   D\n", *mem);
	return (1);
}

t_opsize	ASM_DCX_D(t_memory *mem)
{
	printf(": %02X | DCX    D\n", *mem);
	return (1);
}

t_opsize	ASM_DCX_H(t_memory *mem)
{
	printf(": %02X | DCX    H\n", *mem);
	return (1);
}

t_opsize	ASM_DCX_SP(t_memory *mem)
{
	printf(": %02X | DCX   SP\n", *mem);
	return (1);
}

t_opsize	ASM_RRC(t_memory *mem)
{
	printf(": %02X | RRC\n", *mem);
	return (1);
}

t_opsize	ASM_RAL(t_memory *mem)
{
	printf(": %02X | RAL\n", *mem);
	return (1);
}

t_opsize	ASM_RAR(t_memory *mem)
{
	printf(": %02X | RAR\n", *mem);
	return (1);
}

t_opsize	ASM_CMA(t_memory *mem)
{
	printf(": %02X | CMA\n", *mem);
	return (1);
}

t_opsize	ASM_SHLD(t_memory *mem)
{
	printf(": %02X | SHLD   $%02X%02X\n", *mem, mem[2], mem[1]);
	return (3);
}

t_opsize	ASM_LHLD(t_memory *mem)
{
	printf(": %02X | LHLD   $%02X%02X\n", *mem, mem[2], mem[1]);
	return (3);
}

t_opsize	ASM_STA(t_memory *mem)
{
	printf(": %02X | STA    $%02X%02X\n", *mem, mem[2], mem[1]);
	return (3);
}

t_opsize	ASM_LDA(t_memory *mem)
{
	printf(": %02X | LDA    $%02X%02X\n", *mem, mem[2], mem[1]);
	return (3);
}

t_opsize	ASM_MOV_AA(t_memory *mem)
{
	printf(": %02X | MOV    A,A\n", *mem);
	return (1);
}

t_opsize	ASM_MOV_AB(t_memory *mem)
{
	printf(": %02X | MOV    A,B\n", *mem);
	return (1);
}

t_opsize	ASM_MOV_AC(t_memory *mem)
{
	printf(": %02X | MOV    A,C\n", *mem);
	return (1);
}

t_opsize	ASM_MOV_AD(t_memory *mem)
{
	printf(": %02X | MOV    A,D\n", *mem);
	return (1);
}

t_opsize	ASM_MOV_AE(t_memory *mem)
{
	printf(": %02X | MOV    A,E\n", *mem);
	return (1);
}

t_opsize	ASM_MOV_AH(t_memory *mem)
{
	printf(": %02X | MOV    A,H\n", *mem);
	return (1);
}
t_opsize	ASM_MOV_AL(t_memory *mem)
{
	printf(": %02X | MOV    A,L\n", *mem);
	return (1);
}

t_opsize	ASM_MOV_AM(t_memory *mem)
{
	printf(": %02X | MOV    A,M\n", *mem);
	return (1);
}

t_opsize	ASM_MOV_BA(t_memory *mem)
{
	printf(": %02X | MOV    B,A\n", *mem);
	return (1);
}

t_opsize	ASM_MOV_BB(t_memory *mem)
{
	printf(": %02X | MOV    B,B\n", *mem);
	return (1);
}

t_opsize	ASM_MOV_BC(t_memory *mem)
{
	printf(": %02X | MOV    B,C\n", *mem);
	return (1);
}

t_opsize	ASM_MOV_BD(t_memory *mem)
{
	printf(": %02X | MOV    B,D\n", *mem);
	return (1);
}

t_opsize	ASM_MOV_BE(t_memory *mem)
{
	printf(": %02X | MOV    B,E\n", *mem);
	return (1);
}

t_opsize	ASM_MOV_BH(t_memory *mem)
{
	printf(": %02X | MOV    B,H\n", *mem);
	return (1);
}
t_opsize	ASM_MOV_BL(t_memory *mem)
{
	printf(": %02X | MOV    B,L\n", *mem);
	return (1);
}

t_opsize	ASM_MOV_BM(t_memory *mem)
{
	printf(": %02X | MOV    B,M\n", *mem);
	return (1);
}

t_opsize	ASM_MOV_CA(t_memory *mem)
{
	printf(": %02X | MOV    C,A\n", *mem);
	return (1);
}

t_opsize	ASM_MOV_CB(t_memory *mem)
{
	printf(": %02X | MOV    C,B\n", *mem);
	return (1);
}

t_opsize	ASM_MOV_CC(t_memory *mem)
{
	printf(": %02X | MOV    C,C\n", *mem);
	return (1);
}

t_opsize	ASM_MOV_CD(t_memory *mem)
{
	printf(": %02X | MOV    C,D\n", *mem);
	return (1);
}

t_opsize	ASM_MOV_CE(t_memory *mem)
{
	printf(": %02X | MOV    C,E\n", *mem);
	return (1);
}

t_opsize	ASM_MOV_CH(t_memory *mem)
{
	printf(": %02X | MOV    C,H\n", *mem);
	return (1);
}
t_opsize	ASM_MOV_CL(t_memory *mem)
{
	printf(": %02X | MOV    C,L\n", *mem);
	return (1);
}

t_opsize	ASM_MOV_CM(t_memory *mem)
{
	printf(": %02X | MOV    C,M\n", *mem);
	return (1);
}

t_opsize	ASM_MOV_DA(t_memory *mem)
{
	printf(": %02X | MOV    D,A\n", *mem);
	return (1);
}

t_opsize	ASM_MOV_DB(t_memory *mem)
{
	printf(": %02X | MOV    D,B\n", *mem);
	return (1);
}

t_opsize	ASM_MOV_DC(t_memory *mem)
{
	printf(": %02X | MOV    D,C\n", *mem);
	return (1);
}

t_opsize	ASM_MOV_DD(t_memory *mem)
{
	printf(": %02X | MOV    D,D\n", *mem);
	return (1);
}

t_opsize	ASM_MOV_DE(t_memory *mem)
{
	printf(": %02X | MOV    D,E\n", *mem);
	return (1);
}

t_opsize	ASM_MOV_DH(t_memory *mem)
{
	printf(": %02X | MOV    D,H\n", *mem);
	return (1);
}
t_opsize	ASM_MOV_DL(t_memory *mem)
{
	printf(": %02X | MOV    D,L\n", *mem);
	return (1);
}

t_opsize	ASM_MOV_DM(t_memory *mem)
{
	printf(": %02X | MOV    D,M\n", *mem);
	return (1);
}

t_opsize	ASM_MOV_EA(t_memory *mem)
{
	printf(": %02X | MOV    E,A\n", *mem);
	return (1);
}

t_opsize	ASM_MOV_EB(t_memory *mem)
{
	printf(": %02X | MOV    E,B\n", *mem);
	return (1);
}

t_opsize	ASM_MOV_EC(t_memory *mem)
{
	printf(": %02X | MOV    E,C\n", *mem);
	return (1);
}

t_opsize	ASM_MOV_ED(t_memory *mem)
{
	printf(": %02X | MOV    E,D\n", *mem);
	return (1);
}

t_opsize	ASM_MOV_EE(t_memory *mem)
{
	printf(": %02X | MOV    E,E\n", *mem);
	return (1);
}

t_opsize	ASM_MOV_EH(t_memory *mem)
{
	printf(": %02X | MOV    E,H\n", *mem);
	return (1);
}
t_opsize	ASM_MOV_EL(t_memory *mem)
{
	printf(": %02X | MOV    E,L\n", *mem);
	return (1);
}

t_opsize	ASM_MOV_EM(t_memory *mem)
{
	printf(": %02X | MOV    E,M\n", *mem);
	return (1);
}

t_opsize	ASM_MOV_HA(t_memory *mem)
{
	printf(": %02X | MOV    H,A\n", *mem);
	return (1);
}

t_opsize	ASM_MOV_HB(t_memory *mem)
{
	printf(": %02X | MOV    H,B\n", *mem);
	return (1);
}

t_opsize	ASM_MOV_HC(t_memory *mem)
{
	printf(": %02X | MOV    H,C\n", *mem);
	return (1);
}

t_opsize	ASM_MOV_HD(t_memory *mem)
{
	printf(": %02X | MOV    H,D\n", *mem);
	return (1);
}

t_opsize	ASM_MOV_HE(t_memory *mem)
{
	printf(": %02X | MOV    H,E\n", *mem);
	return (1);
}

t_opsize	ASM_MOV_HH(t_memory *mem)
{
	printf(": %02X | MOV    H,H\n", *mem);
	return (1);
}
t_opsize	ASM_MOV_HL(t_memory *mem)
{
	printf(": %02X | MOV    H,L\n", *mem);
	return (1);
}

t_opsize	ASM_MOV_HM(t_memory *mem)
{
	printf(": %02X | MOV    H,M\n", *mem);
	return (1);
}

t_opsize	ASM_MOV_LA(t_memory *mem)
{
	printf(": %02X | MOV    L,A\n", *mem);
	return (1);
}

t_opsize	ASM_MOV_LB(t_memory *mem)
{
	printf(": %02X | MOV    L,B\n", *mem);
	return (1);
}

t_opsize	ASM_MOV_LC(t_memory *mem)
{
	printf(": %02X | MOV    L,C\n", *mem);
	return (1);
}

t_opsize	ASM_MOV_LD(t_memory *mem)
{
	printf(": %02X | MOV    L,D\n", *mem);
	return (1);
}

t_opsize	ASM_MOV_LE(t_memory *mem)
{
	printf(": %02X | MOV    L,E\n", *mem);
	return (1);
}

t_opsize	ASM_MOV_LH(t_memory *mem)
{
	printf(": %02X | MOV    L,H\n", *mem);
	return (1);
}
t_opsize	ASM_MOV_LL(t_memory *mem)
{
	printf(": %02X | MOV    L,L\n", *mem);
	return (1);
}

t_opsize	ASM_MOV_LM(t_memory *mem)
{
	printf(": %02X | MOV    L,M\n", *mem);
	return (1);
}

t_opsize	ASM_MOV_MA(t_memory *mem)
{
	printf(": %02X | MOV    M,A\n", *mem);
	return (1);
}

t_opsize	ASM_MOV_MB(t_memory *mem)
{
	printf(": %02X | MOV    M,B\n", *mem);
	return (1);
}

t_opsize	ASM_MOV_MC(t_memory *mem)
{
	printf(": %02X | MOV    M,C\n", *mem);
	return (1);
}

t_opsize	ASM_MOV_MD(t_memory *mem)
{
	printf(": %02X | MOV    M,D\n", *mem);
	return (1);
}

t_opsize	ASM_MOV_ME(t_memory *mem)
{
	printf(": %02X | MOV    M,E\n", *mem);
	return (1);
}

t_opsize	ASM_MOV_MH(t_memory *mem)
{
	printf(": %02X | MOV    M,H\n", *mem);
	return (1);
}
t_opsize	ASM_MOV_ML(t_memory *mem)
{
	printf(": %02X | MOV    M,L\n", *mem);
	return (1);
}

t_opsize	ASM_MOV_MM(t_memory *mem)
{
	printf(": %02X | MOV    M,M\n", *mem);
	return (1);
}

t_opsize	ASM_ADD_A(t_memory *mem)
{
	printf(": %02X | ADD    A\n", *mem);
	return (1);
}

t_opsize	ASM_ADD_B(t_memory *mem)
{
	printf(": %02X | ADD    B\n", *mem);
	return (1);
}

t_opsize	ASM_ADD_C(t_memory *mem)
{
	printf(": %02X | ADD    C\n", *mem);
	return (1);
}

t_opsize	ASM_ADD_D(t_memory *mem)
{
	printf(": %02X | ADD    D\n", *mem);
	return (1);
}

t_opsize	ASM_ADD_E(t_memory *mem)
{
	printf(": %02X | ADD    E\n", *mem);
	return (1);
}

t_opsize	ASM_ADD_H(t_memory *mem)
{
	printf(": %02X | ADD    H\n", *mem);
	return (1);
}

t_opsize	ASM_ADD_L(t_memory *mem)
{
	printf(": %02X | ADD    L\n", *mem);
	return (1);
}

t_opsize	ASM_ADD_M(t_memory *mem)
{
	printf(": %02X | ADD    M\n", *mem);
	return (1);
}

t_opsize	ASM_ADC_A(t_memory *mem)
{
	printf(": %02X | ADC    A\n", *mem);
	return (1);
}

t_opsize	ASM_ADC_B(t_memory *mem)
{
	printf(": %02X | ADC    B\n", *mem);
	return (1);
}

t_opsize	ASM_ADC_C(t_memory *mem)
{
	printf(": %02X | ADC    C\n", *mem);
	return (1);
}

t_opsize	ASM_ADC_D(t_memory *mem)
{
	printf(": %02X | ADC    D\n", *mem);
	return (1);
}

t_opsize	ASM_ADC_E(t_memory *mem)
{
	printf(": %02X | ADC    E\n", *mem);
	return (1);
}

t_opsize	ASM_ADC_H(t_memory *mem)
{
	printf(": %02X | ADC    H\n", *mem);
	return (1);
}

t_opsize	ASM_ADC_L(t_memory *mem)
{
	printf(": %02X | ADC    L\n", *mem);
	return (1);
}

t_opsize	ASM_ADC_M(t_memory *mem)
{
	printf(": %02X | ADC    M\n", *mem);
	return (1);
}

t_opsize	ASM_SUB_A(t_memory *mem)
{
	printf(": %02X | SUB    A\n", *mem);
	return (1);
}

t_opsize	ASM_SUB_B(t_memory *mem)
{
	printf(": %02X | SUB    B\n", *mem);
	return (1);
}

t_opsize	ASM_SUB_C(t_memory *mem)
{
	printf(": %02X | SUB    C\n", *mem);
	return (1);
}

t_opsize	ASM_SUB_D(t_memory *mem)
{
	printf(": %02X | SUB    D\n", *mem);
	return (1);
}

t_opsize	ASM_SUB_E(t_memory *mem)
{
	printf(": %02X | SUB    E\n", *mem);
	return (1);
}

t_opsize	ASM_SUB_H(t_memory *mem)
{
	printf(": %02X | SUB    H\n", *mem);
	return (1);
}

t_opsize	ASM_SUB_L(t_memory *mem)
{
	printf(": %02X | SUB    L\n", *mem);
	return (1);
}

t_opsize	ASM_SUB_M(t_memory *mem)
{
	printf(": %02X | SUB    M\n", *mem);
	return (1);
}

t_opsize	ASM_SSB_A(t_memory *mem)
{
	printf(": %02X | SSB    A\n", *mem);
	return (1);
}

t_opsize	ASM_SSB_B(t_memory *mem)
{
	printf(": %02X | SSB    B\n", *mem);
	return (1);
}

t_opsize	ASM_SSB_C(t_memory *mem)
{
	printf(": %02X | SSB    C\n", *mem);
	return (1);
}

t_opsize	ASM_SSB_D(t_memory *mem)
{
	printf(": %02X | SSB    D\n", *mem);
	return (1);
}

t_opsize	ASM_SSB_E(t_memory *mem)
{
	printf(": %02X | SSB    E\n", *mem);
	return (1);
}

t_opsize	ASM_SSB_H(t_memory *mem)
{
	printf(": %02X | SSB    H\n", *mem);
	return (1);
}

t_opsize	ASM_SSB_L(t_memory *mem)
{
	printf(": %02X | SSB    L\n", *mem);
	return (1);
}

t_opsize	ASM_SSB_M(t_memory *mem)
{
	printf(": %02X | SSB    M\n", *mem);
	return (1);
}

t_opsize	ASM_ANA_A(t_memory *mem)
{
	printf(": %02X | ANA    A\n", *mem);
	return (1);
}

t_opsize	ASM_ANA_B(t_memory *mem)
{
	printf(": %02X | ANA    B\n", *mem);
	return (1);
}

t_opsize	ASM_ANA_C(t_memory *mem)
{
	printf(": %02X | ANA    C\n", *mem);
	return (1);
}

t_opsize	ASM_ANA_D(t_memory *mem)
{
	printf(": %02X | ANA    D\n", *mem);
	return (1);
}

t_opsize	ASM_ANA_E(t_memory *mem)
{
	printf(": %02X | ANA    E\n", *mem);
	return (1);
}

t_opsize	ASM_ANA_H(t_memory *mem)
{
	printf(": %02X | ANA    H\n", *mem);
	return (1);
}

t_opsize	ASM_ANA_L(t_memory *mem)
{
	printf(": %02X | ANA    L\n", *mem);
	return (1);
}

t_opsize	ASM_ANA_M(t_memory *mem)
{
	printf(": %02X | ANA    M\n", *mem);
	return (1);
}

t_opsize	ASM_XRA_A(t_memory *mem)
{
	printf(": %02X | XRA    A\n", *mem);
	return (1);
}

t_opsize	ASM_XRA_B(t_memory *mem)
{
	printf(": %02X | XRA    B\n", *mem);
	return (1);
}

t_opsize	ASM_XRA_C(t_memory *mem)
{
	printf(": %02X | XRA    C\n", *mem);
	return (1);
}

t_opsize	ASM_XRA_D(t_memory *mem)
{
	printf(": %02X | XRA    D\n", *mem);
	return (1);
}

t_opsize	ASM_XRA_E(t_memory *mem)
{
	printf(": %02X | XRA    E\n", *mem);
	return (1);
}

t_opsize	ASM_XRA_H(t_memory *mem)
{
	printf(": %02X | XRA    H\n", *mem);
	return (1);
}

t_opsize	ASM_XRA_L(t_memory *mem)
{
	printf(": %02X | XRA    L\n", *mem);
	return (1);
}

t_opsize	ASM_XRA_M(t_memory *mem)
{
	printf(": %02X | XRA    M\n", *mem);
	return (1);
}

t_opsize	ASM_ORA_A(t_memory *mem)
{
	printf(": %02X | ORA    A\n", *mem);
	return (1);
}

t_opsize	ASM_ORA_B(t_memory *mem)
{
	printf(": %02X | ORA    B\n", *mem);
	return (1);
}

t_opsize	ASM_ORA_C(t_memory *mem)
{
	printf(": %02X | ORA    C\n", *mem);
	return (1);
}

t_opsize	ASM_ORA_D(t_memory *mem)
{
	printf(": %02X | ORA    D\n", *mem);
	return (1);
}

t_opsize	ASM_ORA_E(t_memory *mem)
{
	printf(": %02X | ORA    E\n", *mem);
	return (1);
}

t_opsize	ASM_ORA_H(t_memory *mem)
{
	printf(": %02X | ORA    H\n", *mem);
	return (1);
}

t_opsize	ASM_ORA_L(t_memory *mem)
{
	printf(": %02X | ORA    L\n", *mem);
	return (1);
}

t_opsize	ASM_ORA_M(t_memory *mem)
{
	printf(": %02X | ORA    M\n", *mem);
	return (1);
}

t_opsize	ASM_CMP_A(t_memory *mem)
{
	printf(": %02X | CMP    A\n", *mem);
	return (1);
}

t_opsize	ASM_CMP_B(t_memory *mem)
{
	printf(": %02X | CMP    B\n", *mem);
	return (1);
}

t_opsize	ASM_CMP_C(t_memory *mem)
{
	printf(": %02X | CMP    C\n", *mem);
	return (1);
}

t_opsize	ASM_CMP_D(t_memory *mem)
{
	printf(": %02X | CMP    D\n", *mem);
	return (1);
}

t_opsize	ASM_CMP_E(t_memory *mem)
{
	printf(": %02X | CMP    E\n", *mem);
	return (1);
}

t_opsize	ASM_CMP_H(t_memory *mem)
{
	printf(": %02X | CMP    H\n", *mem);
	return (1);
}

t_opsize	ASM_CMP_L(t_memory *mem)
{
	printf(": %02X | CMP    L\n", *mem);
	return (1);
}

t_opsize	ASM_CMP_M(t_memory *mem)
{
	printf(": %02X | CMP    M\n", *mem);
	return (1);
}

t_opsize	ASM_POP_B(t_memory *mem)
{
	printf(": %02X | POP    B\n", *mem);
	return (1);
}

t_opsize	ASM_POP_D(t_memory *mem)
{
	printf(": %02X | POP    B\n", *mem);
	return (1);
}

t_opsize	ASM_POP_H(t_memory *mem)
{
	printf(": %02X | POP    H\n", *mem);
	return (1);
}

t_opsize	ASM_POP_PSW(t_memory *mem)
{
	printf(": %02X | POP    PSW\n", *mem);
	return (1);
}

t_opsize	ASM_PUSH_B(t_memory *mem)
{
	printf(": %02X | PUSH   B\n", *mem);
	return (1);
}

t_opsize	ASM_PUSH_D(t_memory *mem)
{
	printf(": %02X | PUSH   D\n", *mem);
	return (1);
}

t_opsize	ASM_PUSH_H(t_memory *mem)
{
	printf(": %02X | PUSH   H\n", *mem);
	return (1);
}

t_opsize	ASM_PUSH_PSW(t_memory *mem)
{
	printf(": %02X | PUSH   PSW\n", *mem);
	return (1);
}

t_opsize	ASM_JNZ(t_memory *mem)
{
	printf(": %02X | JNZ    $%02X%02X\n", *mem, mem[2], mem[1]);
	return (3);
}

t_opsize	ASM_JNC(t_memory *mem)
{
	printf(": %02X | JNC    $%02X%02X\n", *mem, mem[2], mem[1]);
	return (3);
}

t_opsize	ASM_JM(t_memory *mem)
{
	printf(": %02X | JM     $%02X%02X\n", *mem, mem[2], mem[1]);
	return (3);
}

t_opsize	ASM_JMP(t_memory *mem)
{
	printf(": %02X | JMP    $%02X%02X\n", *mem, mem[2], mem[1]);
	return (3);
}

t_opsize	ASM_JP(t_memory *mem)
{
	printf(": %02X | JP     $%02X%02X\n", *mem, mem[2], mem[1]);
	return (3);
}

t_opsize	ASM_JPO(t_memory *mem)
{
	printf(": %02X | JPO    $%02X%02X\n", *mem, mem[2], mem[1]);
	return (3);
}

t_opsize	ASM_JPE(t_memory *mem)
{
	printf(": %02X | JPE    $%02X%02X\n", *mem, mem[2], mem[1]);
	return (3);
}

t_opsize	ASM_CP(t_memory *mem)
{
	printf(": %02X | CP     $%02X%02X\n", *mem, mem[2], mem[1]);
	return (3);
}

t_opsize	ASM_CM(t_memory *mem)
{
	printf(": %02X | CM     $%02X%02X\n", *mem, mem[2], mem[1]);
	return (3);
}

t_opsize	ASM_CPO(t_memory *mem)
{
	printf(": %02X | CPO    $%02X%02X\n", *mem, mem[2], mem[1]);
	return (3);
}

t_opsize	ASM_CPE(t_memory *mem)
{
	printf(": %02X | CPE    $%02X%02X\n", *mem, mem[2], mem[1]);
	return (3);
}

t_opsize	ASM_CNZ(t_memory *mem)
{
	printf(": %02X | CNZ    $%02X%02X\n", *mem, mem[2], mem[1]);
	return (3);
}

t_opsize	ASM_CNC(t_memory *mem)
{
	printf(": %02X | CNC    $%02X%02X\n", *mem, mem[2], mem[1]);
	return (3);
}

t_opsize	ASM_JZ(t_memory *mem)
{
	printf(": %02X | JZ     $%02X%02X\n", *mem, mem[2], mem[1]);
	return (3);
}

t_opsize	ASM_JC(t_memory *mem)
{
	printf(": %02X | JC     $%02X%02X\n", *mem, mem[2], mem[1]);
	return (3);
}

t_opsize	ASM_CZ(t_memory *mem)
{
	printf(": %02X | CZ     $%02X%02X\n", *mem, mem[2], mem[1]);
	return (3);
}

t_opsize	ASM_CC(t_memory *mem)
{
	printf(": %02X | CC     $%02X%02X\n", *mem, mem[2], mem[1]);
	return (3);
}

t_opsize	ASM_CALL(t_memory *mem)
{
	printf(": %02X | CALL   $%02X%02X\n", *mem, mem[2], mem[1]);
	return (3);
}

t_opsize	ASM_ADI(t_memory *mem)
{
	printf(": %02X | ADI    $%02X\n", *mem, mem[1]);
	return (2);
}

t_opsize	ASM_ACI(t_memory *mem)
{
	printf(": %02X | ACI    $%02X\n", *mem, mem[1]);
	return (2);
}

t_opsize	ASM_SUI(t_memory *mem)
{
	printf(": %02X | SUI    $%02X\n", *mem, mem[1]);
	return (2);
}

t_opsize	ASM_SBI(t_memory *mem)
{
	printf(": %02X | SBI    $%02X\n", *mem, mem[1]);
	return (2);
}

t_opsize	ASM_ANI(t_memory *mem)
{
	printf(": %02X | ANI    $%02X\n", *mem, mem[1]);
	return (2);
}

t_opsize	ASM_XRI(t_memory *mem)
{
	printf(": %02X | XRI    $%02X\n", *mem, mem[1]);
	return (2);
}

t_opsize	ASM_ORI(t_memory *mem)
{
	printf(": %02X | ORI    $%02X\n", *mem, mem[1]);
	return (2);
}

t_opsize	ASM_CPI(t_memory *mem)
{
	printf(": %02X | CPI    $%02X\n", *mem, mem[1]);
	return (2);
}

t_opsize	ASM_IN(t_memory *mem)
{
	printf(": %02X | IN     $%02X\n", *mem, mem[1]);
	return (2);
}

t_opsize	ASM_OUT(t_memory *mem)
{
	printf(": %02X | OUT    $%02X\n", *mem, mem[1]);
	return (2);
}

t_opsize	ASM_RST_0(t_memory *mem)
{
	printf(": %02X | RST    0\n", *mem);
	return (1);
}

t_opsize	ASM_RST_1(t_memory *mem)
{
	printf(": %02X | RST    1\n", *mem);
	return (1);
}

t_opsize	ASM_RST_2(t_memory *mem)
{
	printf(": %02X | RST    2\n", *mem);
	return (1);
}

t_opsize	ASM_RST_3(t_memory *mem)
{
	printf(": %02X | RST    3\n", *mem);
	return (1);
}

t_opsize	ASM_RST_4(t_memory *mem)
{
	printf(": %02X | RST    4\n", *mem);
	return (1);
}

t_opsize	ASM_RST_5(t_memory *mem)
{
	printf(": %02X | RST    5\n", *mem);
	return (1);
}

t_opsize	ASM_RST_6(t_memory *mem)
{
	printf(": %02X | RST    6\n", *mem);
	return (1);
}

t_opsize	ASM_RST_7(t_memory *mem)
{
	printf(": %02X | RST    7\n", *mem);
	return (1);
}

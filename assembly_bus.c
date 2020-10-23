/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   assembly_bus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flavienhenrion <flavienhenrion@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/10 19:47:56 by flavienhenr       #+#    #+#             */
/*   Updated: 2020/05/22 09:41:07 by flavienhenr      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "assembly_bus.h"

t_opsize	ASM_NOP(uint8_t *mem)
{
	printf(" $%02X | NOP\n", *mem);
	return (1);
}

t_opsize	ASM_LXI_B(uint8_t *mem)
{
	printf(" $%02X | LXI    B,$%02X%02X\n", *mem, mem[2], mem[1]);
	return (3);
}

t_opsize	ASM_STAX_B(uint8_t *mem)
{
	printf(" $%02X | STAX   B\n", *mem);
	return (1);
}

t_opsize	ASM_INX_B(uint8_t *mem)
{
	printf(" $%02X | INX    B\n", *mem);
	return (1);
}

t_opsize	ASM_INR_B(uint8_t *mem)
{
	printf(" $%02X | INR    B\n", *mem);
	return (1);
}

t_opsize	ASM_DCR_B(uint8_t *mem)
{
	printf(" $%02X | DCR    B\n", *mem);
	return (1);
}

t_opsize	ASM_MVI_B(uint8_t *mem)
{
	printf(" $%02X | MVI    B,$%02X\n", *mem, mem[1]);
	return (2);
}

t_opsize	ASM_RLC(uint8_t *mem)
{
	printf(" $%02X | RLC\n", *mem);
	return (1);
}

t_opsize	ASM_DAD_B(uint8_t *mem)
{
	printf(" $%02X | DAD    B\n", *mem);
	return (1);
}

t_opsize	ASM_LDAX_B(uint8_t *mem)
{
	printf(" $%02X | LDAX   B\n", *mem);
	return (1);
}

t_opsize	ASM_DCX_B(uint8_t *mem)
{
	printf(" $%02X | DCX    B\n", *mem);
	return (1);
}

t_opsize	ASM_INR_C(uint8_t *mem)
{
	printf(" $%02X | INR    C\n", *mem);
	return (1);
}

t_opsize	ASM_DCR_C(uint8_t *mem)
{
	printf(" $%02X | DCR    C\n", *mem);
	return (1);
}

t_opsize	ASM_MVI_C(uint8_t *mem)
{
	printf(" $%02X | MVI    C,$%02X\n", *mem, mem[1]);
	return (2);
}

t_opsize	ASM_RRC(uint8_t *mem)
{
	printf(" $%02X | RRC\n", *mem);
	return (1);
}

t_opsize	ASM_LXI_D(uint8_t *mem)
{
	printf(" $%02X | LXI    D,$%02X%02X\n", *mem, mem[2], mem[1]);
	return (3);
}

t_opsize	ASM_STAX_D(uint8_t *mem)
{
	printf(" $%02X | STAX   D\n", *mem);
	return (1);
}

t_opsize	ASM_INX_D(uint8_t *mem)
{
	printf(" $%02X | INX    D\n", *mem);
	return (1);
}

t_opsize	ASM_INR_D(uint8_t *mem)
{
	printf(" $%02X | INR    D\n", *mem);
	return (1);
}

t_opsize	ASM_DCR_D(uint8_t *mem)
{
	printf(" $%02X | DCR    D\n", *mem);
	return (1);
}

t_opsize	ASM_MVI_D(uint8_t *mem)
{
	printf(" $%02X | MVI    D,$%02X\n", *mem, mem[1]);
	return (2);
}

t_opsize	ASM_RAL(uint8_t *mem)
{
	printf(" $%02X | RAL\n", *mem);
	return (1);
}

t_opsize	ASM_DAD_D(uint8_t *mem)
{
	printf(" $%02X | DAD    D\n", *mem);
	return (1);
}

t_opsize	ASM_LDAX_D(uint8_t *mem)
{
	printf(" $%02X | LDAX   D\n", *mem);
	return (1);
}

t_opsize	ASM_DCX_D(uint8_t *mem)
{
	printf(" $%02X | DCX    D\n", *mem);
	return (1);
}

t_opsize	ASM_INR_E(uint8_t *mem)
{
	printf(" $%02X | INR    E\n", *mem);
	return (1);
}

t_opsize	ASM_DCR_E(uint8_t *mem)
{
	printf(" $%02X | DCR    E\n", *mem);
	return (1);
}

t_opsize	ASM_MVI_E(uint8_t *mem)
{
	printf(" $%02X | MVI    E,$%02X\n", *mem, mem[1]);
	return (2);
}

t_opsize	ASM_RAR(uint8_t *mem)
{
	printf(" $%02X | RAR\n", *mem);
	return (1);
}

t_opsize	ASM_LXI_H(uint8_t *mem)
{
	printf(" $%02X | LXI    H,$%02X%02X\n", *mem, mem[2], mem[1]);
	return (3);
}

t_opsize	ASM_SHLD(uint8_t *mem)
{
	printf(" $%02X | SHLD   $%02X%02X\n", *mem, mem[2], mem[1]);
	return (3);
}

t_opsize	ASM_INX_H(uint8_t *mem)
{
	printf(" $%02X | INX    H\n", *mem);
	return (1);
}

t_opsize	ASM_INR_H(uint8_t *mem)
{
	printf(" $%02X | INR    H\n", *mem);
	return (1);
}

t_opsize	ASM_DCR_H(uint8_t *mem)
{
	printf(" $%02X | DCR    H\n", *mem);
	return (1);
}

t_opsize	ASM_MVI_H(uint8_t *mem)
{
	printf(" $%02X | MVI    H,$%02X\n", *mem, mem[1]);
	return (2);
}

t_opsize	ASM_DAA(uint8_t *mem)
{
	printf(" $%02X | DAA\n", *mem);
	return (1);
}

t_opsize	ASM_DAD_H(uint8_t *mem)
{
	printf(" $%02X | DAD    H\n", *mem);
	return (1);
}

t_opsize	ASM_LHLD(uint8_t *mem)
{
	printf(" $%02X | LHLD   $%02X%02X\n", *mem, mem[2], mem[1]);
	return (3);
}

t_opsize	ASM_DCX_H(uint8_t *mem)
{
	printf(" $%02X | DCX    H\n", *mem);
	return (1);
}

t_opsize	ASM_INR_L(uint8_t *mem)
{
	printf(" $%02X | INR    L\n", *mem);
	return (1);
}

t_opsize	ASM_DCR_L(uint8_t *mem)
{
	printf(" $%02X | DCR    L\n", *mem);
	return (1);
}

t_opsize	ASM_MVI_L(uint8_t *mem)
{
	printf(" $%02X | MVI    L,$%02X\n", *mem, mem[1]);
	return (2);
}

t_opsize	ASM_CMA(uint8_t *mem)
{
	printf(" $%02X | CMA\n", *mem);
	return (1);
}

t_opsize	ASM_LXI_SP(uint8_t *mem)
{
	printf(" $%02X | LXI    SP,$%02X%02X\n", *mem, mem[2], mem[1]);
	return (3);
}

t_opsize	ASM_STA(uint8_t *mem)
{
	printf(" $%02X | STA    $%02X%02X\n", *mem, mem[2], mem[1]);
	return (3);
}

t_opsize	ASM_INX_SP(uint8_t *mem)
{
	printf(" $%02X | INX   SP\n", *mem);
	return (1);
}

t_opsize	ASM_INR_M(uint8_t *mem)
{
	printf(" $%02X | INR    M\n", *mem);
	return (1);
}

t_opsize	ASM_DCR_M(uint8_t *mem)
{
	printf(" $%02X | DCR    M\n", *mem);
	return (1);
}

t_opsize	ASM_MVI_M(uint8_t *mem)
{
	printf(" $%02X | MVI    M,$%02X\n", *mem, mem[1]);
	return (2);
}

t_opsize	ASM_STC(uint8_t *mem)
{
	printf(" $%02X | STC\n", *mem);
	return (1);
}

t_opsize	ASM_DAD_SP(uint8_t *mem)
{
	printf(" $%02X | DAD   SP\n", *mem);
	return (1);
}

t_opsize	ASM_LDA(uint8_t *mem)
{
	printf(" $%02X | LDA    $%02X%02X\n", *mem, mem[2], mem[1]);
	return (3);
}

t_opsize	ASM_DCX_SP(uint8_t *mem)
{
	printf(" $%02X | DCX   SP\n", *mem);
	return (1);
}

t_opsize	ASM_INR_A(uint8_t *mem)
{
	printf(" $%02X | INR    A\n", *mem);
	return (1);
}

t_opsize	ASM_DCR_A(uint8_t *mem)
{
	printf(" $%02X | DCR    A\n", *mem);
	return (1);
}

t_opsize	ASM_MVI_A(uint8_t *mem)
{
	printf(" $%02X | MVI    A,$%02X\n", *mem, mem[1]);
	return (2);
}

t_opsize	ASM_CMC(uint8_t *mem)
{
	printf(" $%02X | CMC\n", *mem);
	return (1);
}

t_opsize	ASM_MOV_BB(uint8_t *mem)
{
	printf(" $%02X | MOV    B,B\n", *mem);
	return (1);
}

t_opsize	ASM_MOV_BC(uint8_t *mem)
{
	printf(" $%02X | MOV    B,C\n", *mem);
	return (1);
}

t_opsize	ASM_MOV_BD(uint8_t *mem)
{
	printf(" $%02X | MOV    B,D\n", *mem);
	return (1);
}

t_opsize	ASM_MOV_BE(uint8_t *mem)
{
	printf(" $%02X | MOV    B,E\n", *mem);
	return (1);
}

t_opsize	ASM_MOV_BH(uint8_t *mem)
{
	printf(" $%02X | MOV    B,H\n", *mem);
	return (1);
}
t_opsize	ASM_MOV_BL(uint8_t *mem)
{
	printf(" $%02X | MOV    B,L\n", *mem);
	return (1);
}

t_opsize	ASM_MOV_BM(uint8_t *mem)
{
	printf(" $%02X | MOV    B,M\n", *mem);
	return (1);
}

t_opsize	ASM_MOV_BA(uint8_t *mem)
{
	printf(" $%02X | MOV    B,A\n", *mem);
	return (1);
}

t_opsize	ASM_MOV_CB(uint8_t *mem)
{
	printf(" $%02X | MOV    C,B\n", *mem);
	return (1);
}

t_opsize	ASM_MOV_CC(uint8_t *mem)
{
	printf(" $%02X | MOV    C,C\n", *mem);
	return (1);
}

t_opsize	ASM_MOV_CD(uint8_t *mem)
{
	printf(" $%02X | MOV    C,D\n", *mem);
	return (1);
}

t_opsize	ASM_MOV_CE(uint8_t *mem)
{
	printf(" $%02X | MOV    C,E\n", *mem);
	return (1);
}

t_opsize	ASM_MOV_CH(uint8_t *mem)
{
	printf(" $%02X | MOV    C,H\n", *mem);
	return (1);
}
t_opsize	ASM_MOV_CL(uint8_t *mem)
{
	printf(" $%02X | MOV    C,L\n", *mem);
	return (1);
}

t_opsize	ASM_MOV_CM(uint8_t *mem)
{
	printf(" $%02X | MOV    C,M\n", *mem);
	return (1);
}

t_opsize	ASM_MOV_CA(uint8_t *mem)
{
	printf(" $%02X | MOV    C,A\n", *mem);
	return (1);
}

t_opsize	ASM_MOV_DB(uint8_t *mem)
{
	printf(" $%02X | MOV    D,B\n", *mem);
	return (1);
}

t_opsize	ASM_MOV_DC(uint8_t *mem)
{
	printf(" $%02X | MOV    D,C\n", *mem);
	return (1);
}

t_opsize	ASM_MOV_DD(uint8_t *mem)
{
	printf(" $%02X | MOV    D,D\n", *mem);
	return (1);
}

t_opsize	ASM_MOV_DE(uint8_t *mem)
{
	printf(" $%02X | MOV    D,E\n", *mem);
	return (1);
}

t_opsize	ASM_MOV_DH(uint8_t *mem)
{
	printf(" $%02X | MOV    D,H\n", *mem);
	return (1);
}
t_opsize	ASM_MOV_DL(uint8_t *mem)
{
	printf(" $%02X | MOV    D,L\n", *mem);
	return (1);
}

t_opsize	ASM_MOV_DM(uint8_t *mem)
{
	printf(" $%02X | MOV    D,M\n", *mem);
	return (1);
}

t_opsize	ASM_MOV_DA(uint8_t *mem)
{
	printf(" $%02X | MOV    D,A\n", *mem);
	return (1);
}

t_opsize	ASM_MOV_EB(uint8_t *mem)
{
	printf(" $%02X | MOV    E,B\n", *mem);
	return (1);
}

t_opsize	ASM_MOV_EC(uint8_t *mem)
{
	printf(" $%02X | MOV    E,C\n", *mem);
	return (1);
}

t_opsize	ASM_MOV_ED(uint8_t *mem)
{
	printf(" $%02X | MOV    E,D\n", *mem);
	return (1);
}

t_opsize	ASM_MOV_EE(uint8_t *mem)
{
	printf(" $%02X | MOV    E,E\n", *mem);
	return (1);
}

t_opsize	ASM_MOV_EH(uint8_t *mem)
{
	printf(" $%02X | MOV    E,H\n", *mem);
	return (1);
}
t_opsize	ASM_MOV_EL(uint8_t *mem)
{
	printf(" $%02X | MOV    E,L\n", *mem);
	return (1);
}

t_opsize	ASM_MOV_EM(uint8_t *mem)
{
	printf(" $%02X | MOV    E,M\n", *mem);
	return (1);
}

t_opsize	ASM_MOV_EA(uint8_t *mem)
{
	printf(" $%02X | MOV    E,A\n", *mem);
	return (1);
}

t_opsize	ASM_MOV_HB(uint8_t *mem)
{
	printf(" $%02X | MOV    H,B\n", *mem);
	return (1);
}

t_opsize	ASM_MOV_HC(uint8_t *mem)
{
	printf(" $%02X | MOV    H,C\n", *mem);
	return (1);
}

t_opsize	ASM_MOV_HD(uint8_t *mem)
{
	printf(" $%02X | MOV    H,D\n", *mem);
	return (1);
}

t_opsize	ASM_MOV_HE(uint8_t *mem)
{
	printf(" $%02X | MOV    H,E\n", *mem);
	return (1);
}

t_opsize	ASM_MOV_HH(uint8_t *mem)
{
	printf(" $%02X | MOV    H,H\n", *mem);
	return (1);
}
t_opsize	ASM_MOV_HL(uint8_t *mem)
{
	printf(" $%02X | MOV    H,L\n", *mem);
	return (1);
}

t_opsize	ASM_MOV_HM(uint8_t *mem)
{
	printf(" $%02X | MOV    H,M\n", *mem);
	return (1);
}

t_opsize	ASM_MOV_HA(uint8_t *mem)
{
	printf(" $%02X | MOV    H,A\n", *mem);
	return (1);
}

t_opsize	ASM_MOV_LB(uint8_t *mem)
{
	printf(" $%02X | MOV    L,B\n", *mem);
	return (1);
}

t_opsize	ASM_MOV_LC(uint8_t *mem)
{
	printf(" $%02X | MOV    L,C\n", *mem);
	return (1);
}

t_opsize	ASM_MOV_LD(uint8_t *mem)
{
	printf(" $%02X | MOV    L,D\n", *mem);
	return (1);
}

t_opsize	ASM_MOV_LE(uint8_t *mem)
{
	printf(" $%02X | MOV    L,E\n", *mem);
	return (1);
}

t_opsize	ASM_MOV_LH(uint8_t *mem)
{
	printf(" $%02X | MOV    L,H\n", *mem);
	return (1);
}
t_opsize	ASM_MOV_LL(uint8_t *mem)
{
	printf(" $%02X | MOV    L,L\n", *mem);
	return (1);
}

t_opsize	ASM_MOV_LM(uint8_t *mem)
{
	printf(" $%02X | MOV    L,M\n", *mem);
	return (1);
}

t_opsize	ASM_MOV_MA(uint8_t *mem)
{
	printf(" $%02X | MOV    M,A\n", *mem);
	return (1);
}

t_opsize	ASM_MOV_MB(uint8_t *mem)
{
	printf(" $%02X | MOV    M,B\n", *mem);
	return (1);
}

t_opsize	ASM_MOV_MC(uint8_t *mem)
{
	printf(" $%02X | MOV    M,C\n", *mem);
	return (1);
}

t_opsize	ASM_MOV_MD(uint8_t *mem)
{
	printf(" $%02X | MOV    M,D\n", *mem);
	return (1);
}

t_opsize	ASM_MOV_ME(uint8_t *mem)
{
	printf(" $%02X | MOV    M,E\n", *mem);
	return (1);
}

t_opsize	ASM_MOV_MH(uint8_t *mem)
{
	printf(" $%02X | MOV    M,H\n", *mem);
	return (1);
}
t_opsize	ASM_MOV_ML(uint8_t *mem)
{
	printf(" $%02X | MOV    M,L\n", *mem);
	return (1);
}

t_opsize	ASM_HLT(uint8_t *mem)
{
	printf(" $%02X | HLT\n", *mem);
	return (1);
}

t_opsize	ASM_MOV_LA(uint8_t *mem)
{
	printf(" $%02X | MOV    L,A\n", *mem);
	return (1);
}

t_opsize	ASM_MOV_AB(uint8_t *mem)
{
	printf(" $%02X | MOV    A,B\n", *mem);
	return (1);
}

t_opsize	ASM_MOV_AC(uint8_t *mem)
{
	printf(" $%02X | MOV    A,C\n", *mem);
	return (1);
}

t_opsize	ASM_MOV_AD(uint8_t *mem)
{
	printf(" $%02X | MOV    A,D\n", *mem);
	return (1);
}

t_opsize	ASM_MOV_AE(uint8_t *mem)
{
	printf(" $%02X | MOV    A,E\n", *mem);
	return (1);
}

t_opsize	ASM_MOV_AH(uint8_t *mem)
{
	printf(" $%02X | MOV    A,H\n", *mem);
	return (1);
}
t_opsize	ASM_MOV_AL(uint8_t *mem)
{
	printf(" $%02X | MOV    A,L\n", *mem);
	return (1);
}

t_opsize	ASM_MOV_AM(uint8_t *mem)
{
	printf(" $%02X | MOV    A,M\n", *mem);
	return (1);
}

t_opsize	ASM_MOV_AA(uint8_t *mem)
{
	printf(" $%02X | MOV    A,A\n", *mem);
	return (1);
}

t_opsize	ASM_ADD_B(uint8_t *mem)
{
	printf(" $%02X | ADD    B\n", *mem);
	return (1);
}

t_opsize	ASM_ADD_C(uint8_t *mem)
{
	printf(" $%02X | ADD    C\n", *mem);
	return (1);
}

t_opsize	ASM_ADD_D(uint8_t *mem)
{
	printf(" $%02X | ADD    D\n", *mem);
	return (1);
}

t_opsize	ASM_ADD_E(uint8_t *mem)
{
	printf(" $%02X | ADD    E\n", *mem);
	return (1);
}

t_opsize	ASM_ADD_H(uint8_t *mem)
{
	printf(" $%02X | ADD    H\n", *mem);
	return (1);
}

t_opsize	ASM_ADD_L(uint8_t *mem)
{
	printf(" $%02X | ADD    L\n", *mem);
	return (1);
}

t_opsize	ASM_ADD_M(uint8_t *mem)
{
	printf(" $%02X | ADD    M\n", *mem);
	return (1);
}

t_opsize	ASM_ADD_A(uint8_t *mem)
{
	printf(" $%02X | ADD    A\n", *mem);
	return (1);
}

t_opsize	ASM_ADC_B(uint8_t *mem)
{
	printf(" $%02X | ADC    B\n", *mem);
	return (1);
}

t_opsize	ASM_ADC_C(uint8_t *mem)
{
	printf(" $%02X | ADC    C\n", *mem);
	return (1);
}

t_opsize	ASM_ADC_D(uint8_t *mem)
{
	printf(" $%02X | ADC    D\n", *mem);
	return (1);
}

t_opsize	ASM_ADC_E(uint8_t *mem)
{
	printf(" $%02X | ADC    E\n", *mem);
	return (1);
}

t_opsize	ASM_ADC_H(uint8_t *mem)
{
	printf(" $%02X | ADC    H\n", *mem);
	return (1);
}

t_opsize	ASM_ADC_L(uint8_t *mem)
{
	printf(" $%02X | ADC    L\n", *mem);
	return (1);
}

t_opsize	ASM_ADC_M(uint8_t *mem)
{
	printf(" $%02X | ADC    M\n", *mem);
	return (1);
}

t_opsize	ASM_ADC_A(uint8_t *mem)
{
	printf(" $%02X | ADC    A\n", *mem);
	return (1);
}

t_opsize	ASM_SUB_B(uint8_t *mem)
{
	printf(" $%02X | SUB    B\n", *mem);
	return (1);
}

t_opsize	ASM_SUB_C(uint8_t *mem)
{
	printf(" $%02X | SUB    C\n", *mem);
	return (1);
}

t_opsize	ASM_SUB_D(uint8_t *mem)
{
	printf(" $%02X | SUB    D\n", *mem);
	return (1);
}

t_opsize	ASM_SUB_E(uint8_t *mem)
{
	printf(" $%02X | SUB    E\n", *mem);
	return (1);
}

t_opsize	ASM_SUB_H(uint8_t *mem)
{
	printf(" $%02X | SUB    H\n", *mem);
	return (1);
}

t_opsize	ASM_SUB_L(uint8_t *mem)
{
	printf(" $%02X | SUB    L\n", *mem);
	return (1);
}

t_opsize	ASM_SUB_M(uint8_t *mem)
{
	printf(" $%02X | SUB    M\n", *mem);
	return (1);
}

t_opsize	ASM_SUB_A(uint8_t *mem)
{
	printf(" $%02X | SUB    A\n", *mem);
	return (1);
}

t_opsize	ASM_SSB_B(uint8_t *mem)
{
	printf(" $%02X | SSB    B\n", *mem);
	return (1);
}

t_opsize	ASM_SSB_C(uint8_t *mem)
{
	printf(" $%02X | SSB    C\n", *mem);
	return (1);
}

t_opsize	ASM_SSB_D(uint8_t *mem)
{
	printf(" $%02X | SSB    D\n", *mem);
	return (1);
}

t_opsize	ASM_SSB_E(uint8_t *mem)
{
	printf(" $%02X | SSB    E\n", *mem);
	return (1);
}

t_opsize	ASM_SSB_H(uint8_t *mem)
{
	printf(" $%02X | SSB    H\n", *mem);
	return (1);
}

t_opsize	ASM_SSB_L(uint8_t *mem)
{
	printf(" $%02X | SSB    L\n", *mem);
	return (1);
}

t_opsize	ASM_SSB_M(uint8_t *mem)
{
	printf(" $%02X | SSB    M\n", *mem);
	return (1);
}

t_opsize	ASM_SSB_A(uint8_t *mem)
{
	printf(" $%02X | SSB    A\n", *mem);
	return (1);
}

t_opsize	ASM_ANA_B(uint8_t *mem)
{
	printf(" $%02X | ANA    B\n", *mem);
	return (1);
}

t_opsize	ASM_ANA_C(uint8_t *mem)
{
	printf(" $%02X | ANA    C\n", *mem);
	return (1);
}

t_opsize	ASM_ANA_D(uint8_t *mem)
{
	printf(" $%02X | ANA    D\n", *mem);
	return (1);
}

t_opsize	ASM_ANA_E(uint8_t *mem)
{
	printf(" $%02X | ANA    E\n", *mem);
	return (1);
}

t_opsize	ASM_ANA_H(uint8_t *mem)
{
	printf(" $%02X | ANA    H\n", *mem);
	return (1);
}

t_opsize	ASM_ANA_L(uint8_t *mem)
{
	printf(" $%02X | ANA    L\n", *mem);
	return (1);
}

t_opsize	ASM_ANA_M(uint8_t *mem)
{
	printf(" $%02X | ANA    M\n", *mem);
	return (1);
}

t_opsize	ASM_ANA_A(uint8_t *mem)
{
	printf(" $%02X | ANA    A\n", *mem);
	return (1);
}

t_opsize	ASM_XRA_B(uint8_t *mem)
{
	printf(" $%02X | XRA    B\n", *mem);
	return (1);
}

t_opsize	ASM_XRA_C(uint8_t *mem)
{
	printf(" $%02X | XRA    C\n", *mem);
	return (1);
}

t_opsize	ASM_XRA_D(uint8_t *mem)
{
	printf(" $%02X | XRA    D\n", *mem);
	return (1);
}

t_opsize	ASM_XRA_E(uint8_t *mem)
{
	printf(" $%02X | XRA    E\n", *mem);
	return (1);
}

t_opsize	ASM_XRA_H(uint8_t *mem)
{
	printf(" $%02X | XRA    H\n", *mem);
	return (1);
}

t_opsize	ASM_XRA_L(uint8_t *mem)
{
	printf(" $%02X | XRA    L\n", *mem);
	return (1);
}

t_opsize	ASM_XRA_M(uint8_t *mem)
{
	printf(" $%02X | XRA    M\n", *mem);
	return (1);
}

t_opsize	ASM_XRA_A(uint8_t *mem)
{
	printf(" $%02X | XRA    A\n", *mem);
	return (1);
}

t_opsize	ASM_ORA_B(uint8_t *mem)
{
	printf(" $%02X | ORA    B\n", *mem);
	return (1);
}

t_opsize	ASM_ORA_C(uint8_t *mem)
{
	printf(" $%02X | ORA    C\n", *mem);
	return (1);
}

t_opsize	ASM_ORA_D(uint8_t *mem)
{
	printf(" $%02X | ORA    D\n", *mem);
	return (1);
}

t_opsize	ASM_ORA_E(uint8_t *mem)
{
	printf(" $%02X | ORA    E\n", *mem);
	return (1);
}

t_opsize	ASM_ORA_H(uint8_t *mem)
{
	printf(" $%02X | ORA    H\n", *mem);
	return (1);
}

t_opsize	ASM_ORA_L(uint8_t *mem)
{
	printf(" $%02X | ORA    L\n", *mem);
	return (1);
}

t_opsize	ASM_ORA_M(uint8_t *mem)
{
	printf(" $%02X | ORA    M\n", *mem);
	return (1);
}

t_opsize	ASM_ORA_A(uint8_t *mem)
{
	printf(" $%02X | ORA    A\n", *mem);
	return (1);
}

t_opsize	ASM_CMP_B(uint8_t *mem)
{
	printf(" $%02X | CMP    B\n", *mem);
	return (1);
}

t_opsize	ASM_CMP_C(uint8_t *mem)
{
	printf(" $%02X | CMP    C\n", *mem);
	return (1);
}

t_opsize	ASM_CMP_D(uint8_t *mem)
{
	printf(" $%02X | CMP    D\n", *mem);
	return (1);
}

t_opsize	ASM_CMP_E(uint8_t *mem)
{
	printf(" $%02X | CMP    E\n", *mem);
	return (1);
}

t_opsize	ASM_CMP_H(uint8_t *mem)
{
	printf(" $%02X | CMP    H\n", *mem);
	return (1);
}

t_opsize	ASM_CMP_L(uint8_t *mem)
{
	printf(" $%02X | CMP    L\n", *mem);
	return (1);
}

t_opsize	ASM_CMP_M(uint8_t *mem)
{
	printf(" $%02X | CMP    M\n", *mem);
	return (1);
}

t_opsize	ASM_CMP_A(uint8_t *mem)
{
	printf(" $%02X | CMP    A\n", *mem);
	return (1);
}

t_opsize	ASM_RNZ(uint8_t *mem)
{
	printf(" $%02X | RNZ\n", *mem);
	return (1);
}

t_opsize	ASM_POP_B(uint8_t *mem)
{
	printf(" $%02X | POP    B\n", *mem);
	return (1);
}

t_opsize	ASM_JNZ(uint8_t *mem)
{
	printf(" $%02X | JNZ    $%02X%02X\n", *mem, mem[2], mem[1]);
	return (3);
}

t_opsize	ASM_JMP(uint8_t *mem)
{
	printf(" $%02X | JMP    $%02X%02X\n", *mem, mem[2], mem[1]);
	return (3);
}

t_opsize	ASM_CNZ(uint8_t *mem)
{
	printf(" $%02X | CNZ    $%02X%02X\n", *mem, mem[2], mem[1]);
	return (3);
}

t_opsize	ASM_PUSH_B(uint8_t *mem)
{
	printf(" $%02X | PUSH   B\n", *mem);
	return (1);
}

t_opsize	ASM_ADI(uint8_t *mem)
{
	printf(" $%02X | ADI    $%02X\n", *mem, mem[1]);
	return (2);
}

t_opsize	ASM_RST_0(uint8_t *mem)
{
	printf(" $%02X | RST    0\n", *mem);
	return (1);
}

t_opsize	ASM_RZ(uint8_t *mem)
{
	printf(" $%02X | RZ\n", *mem);
	return (1);
}

t_opsize	ASM_RET(uint8_t *mem)
{
	printf(" $%02X | RET\n", *mem);
	return (1);
}

t_opsize	ASM_JZ(uint8_t *mem)
{
	printf(" $%02X | JZ     $%02X%02X\n", *mem, mem[2], mem[1]);
	return (3);
}

t_opsize	ASM_CZ(uint8_t *mem)
{
	printf(" $%02X | CZ     $%02X%02X\n", *mem, mem[2], mem[1]);
	return (3);
}

t_opsize	ASM_CALL(uint8_t *mem)
{
	printf(" $%02X | CALL   $%02X%02X\n", *mem, mem[2], mem[1]);
	return (3);
}

t_opsize	ASM_ACI(uint8_t *mem)
{
	printf(" $%02X | ACI    $%02X\n", *mem, mem[1]);
	return (2);
}

t_opsize	ASM_RST_1(uint8_t *mem)
{
	printf(" $%02X | RST    1\n", *mem);
	return (1);
}

t_opsize	ASM_RNC(uint8_t *mem)
{
	printf(" $%02X | RNC\n", *mem);
	return (1);
}

t_opsize	ASM_POP_D(uint8_t *mem)
{
	printf(" $%02X | POP    B\n", *mem);
	return (1);
}

t_opsize	ASM_JNC(uint8_t *mem)
{
	printf(" $%02X | JNC    $%02X%02X\n", *mem, mem[2], mem[1]);
	return (3);
}

t_opsize	ASM_OUT(uint8_t *mem)
{
	printf(" $%02X | OUT    $%02X\n", *mem, mem[1]);
	return (2);
}

t_opsize	ASM_CNC(uint8_t *mem)
{
	printf(" $%02X | CNC    $%02X%02X\n", *mem, mem[2], mem[1]);
	return (3);
}

t_opsize	ASM_PUSH_D(uint8_t *mem)
{
	printf(" $%02X | PUSH   D\n", *mem);
	return (1);
}

t_opsize	ASM_SUI(uint8_t *mem)
{
	printf(" $%02X | SUI    $%02X\n", *mem, mem[1]);
	return (2);
}

t_opsize	ASM_RST_2(uint8_t *mem)
{
	printf(" $%02X | RST    2\n", *mem);
	return (1);
}

t_opsize	ASM_RC(uint8_t *mem)
{
	printf(" $%02X | RC\n", *mem);
	return (1);
}

t_opsize	ASM_JC(uint8_t *mem)
{
	printf(" $%02X | JC     $%02X%02X\n", *mem, mem[2], mem[1]);
	return (3);
}

t_opsize	ASM_IN(uint8_t *mem)
{
	printf(" $%02X | IN     $%02X\n", *mem, mem[1]);
	return (2);
}

t_opsize	ASM_CC(uint8_t *mem)
{
	printf(" $%02X | CC     $%02X%02X\n", *mem, mem[2], mem[1]);
	return (3);
}

t_opsize	ASM_SBI(uint8_t *mem)
{
	printf(" $%02X | SBI    $%02X\n", *mem, mem[1]);
	return (2);
}

t_opsize	ASM_RST_3(uint8_t *mem)
{
	printf(" $%02X | RST    3\n", *mem);
	return (1);
}

t_opsize	ASM_RPO(uint8_t *mem)
{
	printf(" $%02X | RPO\n", *mem);
	return (1);
}

t_opsize	ASM_POP_H(uint8_t *mem)
{
	printf(" $%02X | POP    H\n", *mem);
	return (1);
}

t_opsize	ASM_JPO(uint8_t *mem)
{
	printf(" $%02X | JPO    $%02X%02X\n", *mem, mem[2], mem[1]);
	return (3);
}

t_opsize	ASM_XTHL(uint8_t *mem)
{
	printf(" $%02X | XTHL\n", *mem);
	return (1);
}

t_opsize	ASM_CPO(uint8_t *mem)
{
	printf(" $%02X | CPO    $%02X%02X\n", *mem, mem[2], mem[1]);
	return (3);
}

t_opsize	ASM_PUSH_H(uint8_t *mem)
{
	printf(" $%02X | PUSH   H\n", *mem);
	return (1);
}

t_opsize	ASM_ANI(uint8_t *mem)
{
	printf(" $%02X | ANI    $%02X\n", *mem, mem[1]);
	return (2);
}

t_opsize	ASM_RST_4(uint8_t *mem)
{
	printf(" $%02X | RST    4\n", *mem);
	return (1);
}

t_opsize	ASM_RPE(uint8_t *mem)
{
	printf(" $%02X | RPE\n", *mem);
	return (1);
}

t_opsize	ASM_PCHL(uint8_t *mem)
{
	printf(" $%02X | PCHL\n", *mem);
	return (1);
}

t_opsize	ASM_JPE(uint8_t *mem)
{
	printf(" $%02X | JPE    $%02X%02X\n", *mem, mem[2], mem[1]);
	return (3);
}

t_opsize	ASM_XCHG(uint8_t *mem)
{
	printf(" $%02X | XCHG\n", *mem);
	return (1);
}

t_opsize	ASM_CPE(uint8_t *mem)
{
	printf(" $%02X | CPE    $%02X%02X\n", *mem, mem[2], mem[1]);
	return (3);
}

t_opsize	ASM_XRI(uint8_t *mem)
{
	printf(" $%02X | XRI    $%02X\n", *mem, mem[1]);
	return (2);
}

t_opsize	ASM_RST_5(uint8_t *mem)
{
	printf(" $%02X | RST    5\n", *mem);
	return (1);
}

t_opsize	ASM_RP(uint8_t *mem)
{
	printf(" $%02X | RP\n", *mem);
	return (1);
}

t_opsize	ASM_POP_PSW(uint8_t *mem)
{
	printf(" $%02X | POP    PSW\n", *mem);
	return (1);
}

t_opsize	ASM_JP(uint8_t *mem)
{
	printf(" $%02X | JP     $%02X%02X\n", *mem, mem[2], mem[1]);
	return (3);
}

t_opsize	ASM_DI(uint8_t *mem)
{
	printf(" $%02X | DI\n", *mem);
	return (1);
}

t_opsize	ASM_CP(uint8_t *mem)
{
	printf(" $%02X | CP     $%02X%02X\n", *mem, mem[2], mem[1]);
	return (3);
}

t_opsize	ASM_PUSH_PSW(uint8_t *mem)
{
	printf(" $%02X | PUSH   PSW\n", *mem);
	return (1);
}

t_opsize	ASM_ORI(uint8_t *mem)
{
	printf(" $%02X | ORI    $%02X\n", *mem, mem[1]);
	return (2);
}

t_opsize	ASM_RST_6(uint8_t *mem)
{
	printf(" $%02X | RST    6\n", *mem);
	return (1);
}

t_opsize	ASM_RM(uint8_t *mem)
{
	printf(" $%02X | RM\n", *mem);
	return (1);
}

t_opsize	ASM_SPHL(uint8_t *mem)
{
	printf(" $%02X | SPHL\n", *mem);
	return (1);
}

t_opsize	ASM_JM(uint8_t *mem)
{
	printf(" $%02X | JM     $%02X%02X\n", *mem, mem[2], mem[1]);
	return (3);
}

t_opsize	ASM_EI(uint8_t *mem)
{
	printf(" $%02X | EI\n", *mem);
	return (1);
}

t_opsize	ASM_CM(uint8_t *mem)
{
	printf(" $%02X | CM     $%02X%02X\n", *mem, mem[2], mem[1]);
	return (3);
}

t_opsize	ASM_CPI(uint8_t *mem)
{
	printf(" $%02X | CPI    $%02X\n", *mem, mem[1]);
	return (2);
}

t_opsize	ASM_RST_7(uint8_t *mem)
{
	printf(" $%02X | RST    7\n", *mem);
	return (1);
}

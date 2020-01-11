/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   emu_instructions.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhenrion <fhenrion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/11 13:15:29 by fhenrion          #+#    #+#             */
/*   Updated: 2020/01/11 23:49:16 by fhenrion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "emu_instructions.h"
#include "emu_inst_utils.h"

void	NOP(t_registers *reg,t_memory *mem)
{
	(void)reg;
	(void)mem;
}

void	RLC(t_registers *reg,t_memory *mem)
{
	(void)reg;
	(void)mem;
	exit(0);
}

void	STC(t_registers *reg,t_memory *mem)
{
	(void)reg;
	(void)mem;
	exit(0);
}

void	CMC(t_registers *reg,t_memory *mem)
{
	(void)reg;
	(void)mem;
	exit(0);
}

void	HLT(t_registers *reg,t_memory *mem)
{
	(void)reg;
	(void)mem;
	exit(0);
}

void	XTHL(t_registers *reg,t_memory *mem)
{
	(void)reg;
	(void)mem;
	exit(0);
}

void	SPHL(t_registers *reg,t_memory *mem)
{
	(void)reg;
	(void)mem;
	exit(0);
}

void	XCHG(t_registers *reg,t_memory *mem)
{
	(void)mem;
	uint8_t cache = reg->D;
	reg->D = reg->H;
	reg->H = cache;
	cache = reg->E;
	reg->E = reg->L;
	reg->L = cache;
}

void	PCHL(t_registers *reg,t_memory *mem)
{
	(void)reg;
	(void)mem;
	exit(0);
}

void	RNZ(t_registers *reg,t_memory *mem)
{
	(void)reg;
	(void)mem;
	exit(0);
}

void	RNC(t_registers *reg,t_memory *mem)
{
	(void)reg;
	(void)mem;
	exit(0);
}

void	RP(t_registers *reg,t_memory *mem)
{
	(void)reg;
	(void)mem;
	exit(0);
}

void	RPO(t_registers *reg,t_memory *mem)
{
	(void)reg;
	(void)mem;
	exit(0);
}

void	RPE(t_registers *reg,t_memory *mem)
{
	(void)reg;
	(void)mem;
	exit(0);
}

void	RZ(t_registers *reg,t_memory *mem)
{
	(void)reg;
	(void)mem;
	exit(0);
}

void	RC(t_registers *reg,t_memory *mem)
{
	(void)reg;
	(void)mem;
	exit(0);
}

void	RM(t_registers *reg,t_memory *mem)
{
	(void)reg;
	(void)mem;
	exit(0);
}

void	DI(t_registers *reg,t_memory *mem)
{
	(void)reg;
	(void)mem;
	exit(0);
}

void	EI(t_registers *reg,t_memory *mem)
{
	(void)mem;
	reg->int_enable = 1;
}

void	RET(t_registers *reg,t_memory *mem)
{
	reg->PC = mem[reg->SP] | (mem[reg->SP + 1] << 8);
	reg->SP += 2;
}

void	LXI_B(t_registers *reg,t_memory *mem)
{
	reg->C = mem[reg->PC];
	reg->B = mem[reg->PC + 1];
	reg->PC += 2;
}

void	LXI_D(t_registers *reg,t_memory *mem)
{
	reg->E = mem[reg->PC];
	reg->D = mem[reg->PC + 1];
	reg->PC += 2;
}

void	LXI_H(t_registers *reg,t_memory *mem)
{
	reg->L = mem[reg->PC];
	reg->H = mem[reg->PC + 1];
	reg->PC += 2;
}

void	LXI_SP(t_registers *reg,t_memory *mem)
{
	reg->SP = (mem[reg->PC + 1] << 8) | mem[reg->PC];
	reg->PC += 2;
}

void	STAX_B(t_registers *reg,t_memory *mem)
{
	(void)reg;
	(void)mem;
	exit(0);
}

void	STAX_D(t_registers *reg,t_memory *mem)
{
	(void)reg;
	(void)mem;
	exit(0);
}

void	INX_B(t_registers *reg,t_memory *mem)
{
	(void)reg;
	(void)mem;
	exit(0);
}

void	INX_D(t_registers *reg,t_memory *mem)
{
	(void)mem;
	reg->E++;
	if (reg->E == 0)
		reg->D++;
}

void	INX_H(t_registers *reg,t_memory *mem)
{
	(void)reg;
	(void)mem;
	exit(0);
}

void	INX_SP(t_registers *reg,t_memory *mem)
{
	(void)reg;
	(void)mem;
	exit(0);
}

void	INR_A(t_registers *reg,t_memory *mem)
{
	(void)reg;
	(void)mem;
	exit(0);
}

void	INR_B(t_registers *reg,t_memory *mem)
{
	(void)reg;
	(void)mem;
	exit(0);
}

void	INR_C(t_registers *reg,t_memory *mem)
{
	(void)reg;
	(void)mem;
	exit(0);
}

void	INR_D(t_registers *reg,t_memory *mem)
{
	(void)reg;
	(void)mem;
	exit(0);
}

void	INR_E(t_registers *reg,t_memory *mem)
{
	(void)reg;
	(void)mem;
	exit(0);
}

void	INR_H(t_registers *reg,t_memory *mem)
{
	(void)reg;
	(void)mem;
	exit(0);
}

void	INR_L(t_registers *reg,t_memory *mem)
{
	(void)reg;
	(void)mem;
	exit(0);
}

void	INR_M(t_registers *reg,t_memory *mem)
{
	(void)reg;
	(void)mem;
	exit(0);
}

void	DCR_A(t_registers *reg,t_memory *mem)
{
	(void)mem;
	uint8_t res = reg->A - 1;
	reg->CC.Z = (res == 0);
	reg->CC.S = (0x80 == (res & 0x80));
	reg->CC.P = parity(res, 8);
	reg->A = res;
}

void	DCR_B(t_registers *reg,t_memory *mem)
{
	(void)mem;
	uint8_t res = reg->B - 1;
	reg->CC.Z = (res == 0);
	reg->CC.S = (0x80 == (res & 0x80));
	reg->CC.P = parity(res, 8);
	reg->B = res;
}

void	DCR_C(t_registers *reg,t_memory *mem)
{
	(void)mem;
	uint8_t res = reg->C - 1;
	reg->CC.Z = (res == 0);
	reg->CC.S = (0x80 == (res & 0x80));
	reg->CC.P = parity(res, 8);
	reg->C = res;
}

void	DCR_D(t_registers *reg,t_memory *mem)
{
	(void)mem;
	uint8_t res = reg->D - 1;
	reg->CC.Z = (res == 0);
	reg->CC.S = (0x80 == (res & 0x80));
	reg->CC.P = parity(res, 8);
	reg->D = res;
}

void	DCR_E(t_registers *reg,t_memory *mem)
{
	(void)mem;
	uint8_t res = reg->E - 1;
	reg->CC.Z = (res == 0);
	reg->CC.S = (0x80 == (res & 0x80));
	reg->CC.P = parity(res, 8);
	reg->E = res;
}

void	DCR_H(t_registers *reg,t_memory *mem)
{
	(void)mem;
	uint8_t res = reg->H - 1;
	reg->CC.Z = (res == 0);
	reg->CC.S = (0x80 == (res & 0x80));
	reg->CC.P = parity(res, 8);
	reg->H = res;
}

void	DCR_L(t_registers *reg,t_memory *mem)
{
	(void)mem;
	uint8_t res = reg->L - 1;
	reg->CC.Z = (res == 0);
	reg->CC.S = (0x80 == (res & 0x80));
	reg->CC.P = parity(res, 8);
	reg->L = res;
}

void	DCR_M(t_registers *reg,t_memory *mem)
{
	(void)reg;
	(void)mem;
	exit(0);
}

void	MVI_A(t_registers *reg,t_memory *mem)
{
	reg->A = mem[reg->PC];
	reg->PC++;
}

void	MVI_B(t_registers *reg,t_memory *mem)
{
	reg->B = mem[reg->PC];
	reg->PC++;
}

void	MVI_C(t_registers *reg,t_memory *mem)
{
	reg->C = mem[reg->PC];
	reg->PC++;
}

void	MVI_D(t_registers *reg,t_memory *mem)
{
	reg->D = mem[reg->PC];
	reg->PC++;
}

void	MVI_E(t_registers *reg,t_memory *mem)
{
	reg->E = mem[reg->PC];
	reg->PC++;
}

void	MVI_H(t_registers *reg,t_memory *mem)
{
	reg->H = mem[reg->PC];
	reg->PC++;
}

void	MVI_L(t_registers *reg,t_memory *mem)
{
	reg->L = mem[reg->PC];
	reg->PC++;
}

void	MVI_M(t_registers *reg,t_memory *mem)
{
	(void)reg;
	(void)mem;
	exit(0);
}

void	DAD_B(t_registers *reg,t_memory *mem)
{
	(void)mem;
	uint32_t HL = (reg->H << 8) | reg->L;
	uint32_t BC = (reg->B << 8) | reg->C;
	uint32_t res = HL + BC;
	reg->H = (res & 0xff00) >> 8;
	reg->L = res & 0xff;
	reg->CC.CY = ((res & 0xffff0000) > 0);
}

void	DAD_D(t_registers *reg,t_memory *mem)
{
	(void)reg;
	(void)mem;
	exit(0);
}

void	DAD_H(t_registers *reg,t_memory *mem)
{
	(void)reg;
	(void)mem;
	exit(0);
}

void	DAD_SP(t_registers *reg,t_memory *mem)
{
	(void)reg;
	(void)mem;
	exit(0);
}

void	LDAX_B(t_registers *reg,t_memory *mem)
{
	(void)reg;
	(void)mem;
	exit(0);
}

void	LDAX_D(t_registers *reg,t_memory *mem)
{
	reg->A = mem[reg->PC];
	reg->PC++;
}

void	DCX_B(t_registers *reg,t_memory *mem)
{
	(void)reg;
	(void)mem;
	exit(0);
}

void	DCX_D(t_registers *reg,t_memory *mem)
{
	(void)reg;
	(void)mem;
	exit(0);
}

void	DCX_H(t_registers *reg,t_memory *mem)
{
	(void)reg;
	(void)mem;
	exit(0);
}

void	DCX_SP(t_registers *reg,t_memory *mem)
{
	(void)reg;
	(void)mem;
	exit(0);
}

void	RRC(t_registers *reg,t_memory *mem)
{
	(void)mem;
	uint8_t x = reg->A;
	reg->A = ((x & 1) << 7) | (x >> 1);
	reg->CC.CY = (1 == (x & 1));
}

void	RAL(t_registers *reg,t_memory *mem)
{
	(void)reg;
	(void)mem;
	exit(0);
}

void	RAR(t_registers *reg,t_memory *mem)
{
	(void)reg;
	(void)mem;
	exit(0);
}

void	CMA(t_registers *reg,t_memory *mem)
{
	(void)reg;
	(void)mem;
	exit(0);
}

void	SHLD(t_registers *reg,t_memory *mem)
{
	// (adr) <-L; (adr+1)<-H
	mem[reg->PC] = reg->L;
	mem[reg->PC + 1] = reg->H;
	reg->PC += 2;
}

void	LHLD(t_registers *reg,t_memory *mem)
{
	(void)reg;
	(void)mem;
	exit(0);
}

void	STA(t_registers *reg,t_memory *mem)
{
	uint16_t offset = (mem[reg->PC + 1] << 8) | (mem[reg->PC]);
	mem[offset] = reg->A;
	reg->PC += 2;
}

void	LDA(t_registers *reg,t_memory *mem)
{
	uint16_t offset = (mem[reg->PC + 1] << 8) | (mem[reg->PC]);
	reg->A = mem[offset];
	reg->PC += 2;
}

void	MOV_AA(t_registers *reg,t_memory *mem)
{
	(void)reg;
	(void)mem;
	exit(0);
}

void	MOV_AB(t_registers *reg,t_memory *mem)
{
	(void)reg;
	(void)mem;
	exit(0);
}

void	MOV_AC(t_registers *reg,t_memory *mem)
{
	(void)reg;
	(void)mem;
	exit(0);
}

void	MOV_AD(t_registers *reg,t_memory *mem)
{
	(void)reg;
	(void)mem;
	exit(0);
}

void	MOV_AE(t_registers *reg,t_memory *mem)
{
	(void)reg;
	(void)mem;
	exit(0);
}

void	MOV_AH(t_registers *reg,t_memory *mem)
{
	(void)reg;
	(void)mem;
	exit(0);
}
void	MOV_AL(t_registers *reg,t_memory *mem)
{
	(void)reg;
	(void)mem;
	exit(0);
}

void	MOV_AM(t_registers *reg,t_memory *mem)
{
	(void)reg;
	(void)mem;
	exit(0);
}

void	MOV_BA(t_registers *reg,t_memory *mem)
{
	(void)reg;
	(void)mem;
	exit(0);
}

void	MOV_BB(t_registers *reg,t_memory *mem)
{
	(void)reg;
	(void)mem;
	exit(0);
}

void	MOV_BC(t_registers *reg,t_memory *mem)
{
	(void)reg;
	(void)mem;
	exit(0);
}

void	MOV_BD(t_registers *reg,t_memory *mem)
{
	(void)reg;
	(void)mem;
	exit(0);
}

void	MOV_BE(t_registers *reg,t_memory *mem)
{
	(void)reg;
	(void)mem;
	exit(0);
}

void	MOV_BH(t_registers *reg,t_memory *mem)
{
	(void)reg;
	(void)mem;
	exit(0);
}
void	MOV_BL(t_registers *reg,t_memory *mem)
{
	(void)reg;
	(void)mem;
	exit(0);
}

void	MOV_BM(t_registers *reg,t_memory *mem)
{
	(void)reg;
	(void)mem;
	exit(0);
}

void	MOV_CA(t_registers *reg,t_memory *mem)
{
	(void)reg;
	(void)mem;
	exit(0);
}

void	MOV_CB(t_registers *reg,t_memory *mem)
{
	(void)reg;
	(void)mem;
	exit(0);
}

void	MOV_CC(t_registers *reg,t_memory *mem)
{
	(void)reg;
	(void)mem;
	exit(0);
}

void	MOV_CD(t_registers *reg,t_memory *mem)
{
	(void)reg;
	(void)mem;
	exit(0);
}

void	MOV_CE(t_registers *reg,t_memory *mem)
{
	(void)reg;
	(void)mem;
	exit(0);
}

void	MOV_CH(t_registers *reg,t_memory *mem)
{
	(void)reg;
	(void)mem;
	exit(0);
}
void	MOV_CL(t_registers *reg,t_memory *mem)
{
	(void)reg;
	(void)mem;
	exit(0);
}

void	MOV_CM(t_registers *reg,t_memory *mem)
{
	(void)reg;
	(void)mem;
	exit(0);
}

void	MOV_DA(t_registers *reg,t_memory *mem)
{
	(void)reg;
	(void)mem;
	exit(0);
}

void	MOV_DB(t_registers *reg,t_memory *mem)
{
	(void)reg;
	(void)mem;
	exit(0);
}

void	MOV_DC(t_registers *reg,t_memory *mem)
{
	(void)reg;
	(void)mem;
	exit(0);
}

void	MOV_DD(t_registers *reg,t_memory *mem)
{
	(void)reg;
	(void)mem;
	exit(0);
}

void	MOV_DE(t_registers *reg,t_memory *mem)
{
	(void)reg;
	(void)mem;
	exit(0);
}

void	MOV_DH(t_registers *reg,t_memory *mem)
{
	(void)reg;
	(void)mem;
	exit(0);
}
void	MOV_DL(t_registers *reg,t_memory *mem)
{
	(void)reg;
	(void)mem;
	exit(0);
}

void	MOV_DM(t_registers *reg,t_memory *mem)
{
	uint16_t offset = (reg->H << 8) | (reg->L);
	reg->D = mem[offset];
}

void	MOV_EA(t_registers *reg,t_memory *mem)
{
	(void)reg;
	(void)mem;
	exit(0);
}

void	MOV_EB(t_registers *reg,t_memory *mem)
{
	(void)reg;
	(void)mem;
	exit(0);
}

void	MOV_EC(t_registers *reg,t_memory *mem)
{
	(void)reg;
	(void)mem;
	exit(0);
}

void	MOV_ED(t_registers *reg,t_memory *mem)
{
	(void)reg;
	(void)mem;
	exit(0);
}

void	MOV_EE(t_registers *reg,t_memory *mem)
{
	(void)reg;
	(void)mem;
	exit(0);
}

void	MOV_EH(t_registers *reg,t_memory *mem)
{
	(void)reg;
	(void)mem;
	exit(0);
}
void	MOV_EL(t_registers *reg,t_memory *mem)
{
	(void)reg;
	(void)mem;
	exit(0);
}

void	MOV_EM(t_registers *reg,t_memory *mem)
{
	uint16_t offset = (reg->H << 8) | (reg->L);
	reg->E = mem[offset];
}

void	MOV_HA(t_registers *reg,t_memory *mem)
{
	(void)reg;
	(void)mem;
	exit(0);
}

void	MOV_HB(t_registers *reg,t_memory *mem)
{
	(void)reg;
	(void)mem;
	exit(0);
}

void	MOV_HC(t_registers *reg,t_memory *mem)
{
	(void)reg;
	(void)mem;
	exit(0);
}

void	MOV_HD(t_registers *reg,t_memory *mem)
{
	(void)reg;
	(void)mem;
	exit(0);
}

void	MOV_HE(t_registers *reg,t_memory *mem)
{
	(void)reg;
	(void)mem;
	exit(0);
}

void	MOV_HH(t_registers *reg,t_memory *mem)
{
	(void)reg;
	(void)mem;
	exit(0);
}
void	MOV_HL(t_registers *reg,t_memory *mem)
{
	(void)reg;
	(void)mem;
	exit(0);
}

void	MOV_HM(t_registers *reg,t_memory *mem)
{
	(void)reg;
	(void)mem;
	exit(0);
}

void	MOV_LA(t_registers *reg,t_memory *mem)
{
	(void)reg;
	(void)mem;
	exit(0);
}

void	MOV_LB(t_registers *reg,t_memory *mem)
{
	(void)reg;
	(void)mem;
	exit(0);
}

void	MOV_LC(t_registers *reg,t_memory *mem)
{
	(void)reg;
	(void)mem;
	exit(0);
}

void	MOV_LD(t_registers *reg,t_memory *mem)
{
	(void)reg;
	(void)mem;
	exit(0);
}

void	MOV_LE(t_registers *reg,t_memory *mem)
{
	(void)reg;
	(void)mem;
	exit(0);
}

void	MOV_LH(t_registers *reg,t_memory *mem)
{
	(void)reg;
	(void)mem;
	exit(0);
}
void	MOV_LL(t_registers *reg,t_memory *mem)
{
	(void)reg;
	(void)mem;
	exit(0);
}

void	MOV_LM(t_registers *reg,t_memory *mem)
{
	(void)reg;
	(void)mem;
	exit(0);
}

void	MOV_MA(t_registers *reg,t_memory *mem)
{
	(void)reg;
	(void)mem;
	exit(0);
}

void	MOV_MB(t_registers *reg,t_memory *mem)
{
	(void)reg;
	(void)mem;
	exit(0);
}

void	MOV_MC(t_registers *reg,t_memory *mem)
{
	(void)reg;
	(void)mem;
	exit(0);
}

void	MOV_MD(t_registers *reg,t_memory *mem)
{
	(void)reg;
	(void)mem;
	exit(0);
}

void	MOV_ME(t_registers *reg,t_memory *mem)
{
	(void)reg;
	(void)mem;
	exit(0);
}

void	MOV_MH(t_registers *reg,t_memory *mem)
{
	(void)reg;
	(void)mem;
	exit(0);
}
void	MOV_ML(t_registers *reg,t_memory *mem)
{
	(void)reg;
	(void)mem;
	exit(0);
}

void	MOV_MM(t_registers *reg,t_memory *mem)
{
	(void)reg;
	(void)mem;
	exit(0);
}

void	ADD_A(t_registers *reg,t_memory *mem)
{
	(void)reg;
	(void)mem;
	exit(0);
}

void	ADD_B(t_registers *reg,t_memory *mem)
{
	(void)reg;
	(void)mem;
	exit(0);
}

void	ADD_C(t_registers *reg,t_memory *mem)
{
	(void)reg;
	(void)mem;
	exit(0);
}

void	ADD_D(t_registers *reg,t_memory *mem)
{
	(void)reg;
	(void)mem;
	exit(0);
}

void	ADD_E(t_registers *reg,t_memory *mem)
{
	(void)reg;
	(void)mem;
	exit(0);
}

void	ADD_H(t_registers *reg,t_memory *mem)
{
	(void)reg;
	(void)mem;
	exit(0);
}

void	ADD_L(t_registers *reg,t_memory *mem)
{
	(void)reg;
	(void)mem;
	exit(0);
}

void	ADD_M(t_registers *reg,t_memory *mem)
{
	(void)reg;
	(void)mem;
	exit(0);
}

void	ADC_A(t_registers *reg,t_memory *mem)
{
	(void)reg;
	(void)mem;
	exit(0);
}

void	ADC_B(t_registers *reg,t_memory *mem)
{
	(void)reg;
	(void)mem;
	exit(0);
}

void	ADC_C(t_registers *reg,t_memory *mem)
{
	(void)reg;
	(void)mem;
	exit(0);
}

void	ADC_D(t_registers *reg,t_memory *mem)
{
	(void)reg;
	(void)mem;
	exit(0);
}

void	ADC_E(t_registers *reg,t_memory *mem)
{
	(void)reg;
	(void)mem;
	exit(0);
}

void	ADC_H(t_registers *reg,t_memory *mem)
{
	(void)reg;
	(void)mem;
	exit(0);
}

void	ADC_L(t_registers *reg,t_memory *mem)
{
	(void)reg;
	(void)mem;
	exit(0);
}

void	ADC_M(t_registers *reg,t_memory *mem)
{
	(void)reg;
	(void)mem;
	exit(0);
}

void	SUB_A(t_registers *reg,t_memory *mem)
{
	(void)reg;
	(void)mem;
	exit(0);
}

void	SUB_B(t_registers *reg,t_memory *mem)
{
	(void)reg;
	(void)mem;
	exit(0);
}

void	SUB_C(t_registers *reg,t_memory *mem)
{
	(void)reg;
	(void)mem;
	exit(0);
}

void	SUB_D(t_registers *reg,t_memory *mem)
{
	(void)reg;
	(void)mem;
	exit(0);
}

void	SUB_E(t_registers *reg,t_memory *mem)
{
	(void)reg;
	(void)mem;
	exit(0);
}

void	SUB_H(t_registers *reg,t_memory *mem)
{
	(void)reg;
	(void)mem;
	exit(0);
}

void	SUB_L(t_registers *reg,t_memory *mem)
{
	(void)reg;
	(void)mem;
	exit(0);
}

void	SUB_M(t_registers *reg,t_memory *mem)
{
	(void)reg;
	(void)mem;
	exit(0);
}

void	SSB_A(t_registers *reg,t_memory *mem)
{
	(void)reg;
	(void)mem;
	exit(0);
}

void	SSB_B(t_registers *reg,t_memory *mem)
{
	(void)reg;
	(void)mem;
	exit(0);
}

void	SSB_C(t_registers *reg,t_memory *mem)
{
	(void)reg;
	(void)mem;
	exit(0);
}

void	SSB_D(t_registers *reg,t_memory *mem)
{
	(void)reg;
	(void)mem;
	exit(0);
}

void	SSB_E(t_registers *reg,t_memory *mem)
{
	(void)reg;
	(void)mem;
	exit(0);
}

void	SSB_H(t_registers *reg,t_memory *mem)
{
	(void)reg;
	(void)mem;
	exit(0);
}

void	SSB_L(t_registers *reg,t_memory *mem)
{
	(void)reg;
	(void)mem;
	exit(0);
}

void	SSB_M(t_registers *reg,t_memory *mem)
{
	(void)reg;
	(void)mem;
	exit(0);
}

void	ANA_A(t_registers *reg,t_memory *mem)
{
	(void)mem;
	reg->A = reg->A & reg->A;
	LogicFlagsA(reg);
}

void	ANA_B(t_registers *reg,t_memory *mem)
{
	(void)reg;
	(void)mem;
	exit(0);
}

void	ANA_C(t_registers *reg,t_memory *mem)
{
	(void)reg;
	(void)mem;
	exit(0);
}

void	ANA_D(t_registers *reg,t_memory *mem)
{
	(void)reg;
	(void)mem;
	exit(0);
}

void	ANA_E(t_registers *reg,t_memory *mem)
{
	(void)reg;
	(void)mem;
	exit(0);
}

void	ANA_H(t_registers *reg,t_memory *mem)
{
	(void)reg;
	(void)mem;
	exit(0);
}

void	ANA_L(t_registers *reg,t_memory *mem)
{
	(void)reg;
	(void)mem;
	exit(0);
}

void	ANA_M(t_registers *reg,t_memory *mem)
{
	(void)reg;
	(void)mem;
	exit(0);
}

void	XRA_A(t_registers *reg,t_memory *mem)
{
	(void)mem;
	reg->A = reg->A ^ reg->A;
	LogicFlagsA(reg);
}

void	XRA_B(t_registers *reg,t_memory *mem)
{
	(void)reg;
	(void)mem;
	exit(0);
}

void	XRA_C(t_registers *reg,t_memory *mem)
{
	(void)reg;
	(void)mem;
	exit(0);
}

void	XRA_D(t_registers *reg,t_memory *mem)
{
	(void)reg;
	(void)mem;
	exit(0);
}

void	XRA_E(t_registers *reg,t_memory *mem)
{
	(void)reg;
	(void)mem;
	exit(0);
}

void	XRA_H(t_registers *reg,t_memory *mem)
{
	(void)reg;
	(void)mem;
	exit(0);
}

void	XRA_L(t_registers *reg,t_memory *mem)
{
	(void)reg;
	(void)mem;
	exit(0);
}

void	XRA_M(t_registers *reg,t_memory *mem)
{
	(void)reg;
	(void)mem;
	exit(0);
}

void	ORA_A(t_registers *reg,t_memory *mem)
{
	(void)reg;
	(void)mem;
	exit(0);
}

void	ORA_B(t_registers *reg,t_memory *mem)
{
	(void)reg;
	(void)mem;
	exit(0);
}

void	ORA_C(t_registers *reg,t_memory *mem)
{
	(void)reg;
	(void)mem;
	exit(0);
}

void	ORA_D(t_registers *reg,t_memory *mem)
{
	(void)reg;
	(void)mem;
	exit(0);
}

void	ORA_E(t_registers *reg,t_memory *mem)
{
	(void)reg;
	(void)mem;
	exit(0);
}

void	ORA_H(t_registers *reg,t_memory *mem)
{
	(void)reg;
	(void)mem;
	exit(0);
}

void	ORA_L(t_registers *reg,t_memory *mem)
{
	(void)reg;
	(void)mem;
	exit(0);
}

void	ORA_M(t_registers *reg,t_memory *mem)
{
	(void)reg;
	(void)mem;
	exit(0);
}

void	CMP_A(t_registers *reg,t_memory *mem)
{
	(void)reg;
	(void)mem;
	exit(0);
}

void	CMP_B(t_registers *reg,t_memory *mem)
{
	(void)reg;
	(void)mem;
	exit(0);
}

void	CMP_C(t_registers *reg,t_memory *mem)
{
	(void)reg;
	(void)mem;
	exit(0);
}

void	CMP_D(t_registers *reg,t_memory *mem)
{
	(void)reg;
	(void)mem;
	exit(0);
}

void	CMP_E(t_registers *reg,t_memory *mem)
{
	(void)reg;
	(void)mem;
	exit(0);
}

void	CMP_H(t_registers *reg,t_memory *mem)
{
	(void)reg;
	(void)mem;
	exit(0);
}

void	CMP_L(t_registers *reg,t_memory *mem)
{
	(void)reg;
	(void)mem;
	exit(0);
}

void	CMP_M(t_registers *reg,t_memory *mem)
{
	(void)reg;
	(void)mem;
	exit(0);
}

void	POP_B(t_registers *reg,t_memory *mem)
{
	reg->C = mem[reg->SP];
	reg->B = mem[reg->SP + 1];
	reg->SP += 2;
}

void	POP_D(t_registers *reg,t_memory *mem)
{
	(void)reg;
	(void)mem;
	exit(0);
}

void	POP_H(t_registers *reg,t_memory *mem)
{
	(void)reg;
	(void)mem;
	exit(0);
}

void	POP_PSW(t_registers *reg,t_memory *mem)
{
	reg->A = mem[reg->SP + 1];
	uint8_t PSW = mem[reg->SP];
	reg->CC.Z  = (0x01 == (PSW & 0x01));
	reg->CC.S  = (0x02 == (PSW & 0x02));
	reg->CC.P  = (0x04 == (PSW & 0x04));
	reg->CC.CY = (0x05 == (PSW & 0x08));
	reg->CC.AC = (0x10 == (PSW & 0x10));
	reg->SP += 2;
}

void	PUSH_B(t_registers *reg,t_memory *mem)
{
	mem[reg->SP - 1] = reg->B;
	mem[reg->SP - 2] = reg->C;
	reg->SP = reg->SP - 2;
}

void	PUSH_D(t_registers *reg,t_memory *mem)
{
	(void)reg;
	(void)mem;
	exit(0);
}

void	PUSH_H(t_registers *reg,t_memory *mem)
{
	(void)reg;
	(void)mem;
	exit(0);
}

void	PUSH_PSW(t_registers *reg,t_memory *mem)
{
	mem[reg->SP - 1] = reg->A;
	uint8_t PSW = (
		reg->CC.Z |
		reg->CC.S << 1 |
		reg->CC.P << 2 |
		reg->CC.CY << 3 |
		reg->CC.AC << 4
	);
	mem[reg->SP - 2] = PSW;
	reg->SP = reg->SP - 2;
}

void	JNZ(t_registers *reg,t_memory *mem)
{
	if (reg->CC.Z == 0)
		reg->PC = (mem[reg->PC + 1] << 8) | mem[reg->PC];
	else
		reg->PC += 2;
}

void	JNC(t_registers *reg,t_memory *mem)
{
	(void)reg;
	(void)mem;
	exit(0);
}

void	JM(t_registers *reg,t_memory *mem)
{
	(void)reg;
	(void)mem;
	exit(0);
}

void	JMP(t_registers *reg,t_memory *mem)
{
	reg->PC = (mem[reg->PC + 1] << 8) | mem[reg->PC];
}

void	JP(t_registers *reg,t_memory *mem)
{
	(void)reg;
	(void)mem;
	exit(0);
}

void	JPO(t_registers *reg,t_memory *mem)
{
	(void)reg;
	(void)mem;
	exit(0);
}

void	JPE(t_registers *reg,t_memory *mem)
{
	(void)reg;
	(void)mem;
	exit(0);
}

void	CP(t_registers *reg,t_memory *mem)
{
	(void)reg;
	(void)mem;
	exit(0);
}

void	CM(t_registers *reg,t_memory *mem)
{
	(void)reg;
	(void)mem;
	exit(0);
}

void	CPO(t_registers *reg,t_memory *mem)
{
	(void)reg;
	(void)mem;
	exit(0);
}

void	CPE(t_registers *reg,t_memory *mem)
{
	(void)reg;
	(void)mem;
	exit(0);
}

void	CNZ(t_registers *reg,t_memory *mem)
{
	(void)reg;
	(void)mem;
	exit(0);
}

void	CNC(t_registers *reg,t_memory *mem)
{
	(void)reg;
	(void)mem;
	exit(0);
}

void	JZ(t_registers *reg,t_memory *mem)
{
	(void)reg;
	(void)mem;
	exit(0);
}

void	JC(t_registers *reg,t_memory *mem)
{
	(void)reg;
	(void)mem;
	exit(0);
}

void	CZ(t_registers *reg,t_memory *mem)
{
	(void)reg;
	(void)mem;
	exit(0);
}

void	CC(t_registers *reg,t_memory *mem)
{
	(void)reg;
	(void)mem;
	exit(0);
}

void	CALL(t_registers *reg,t_memory *mem)
{
	uint16_t	ret = reg->PC + 2;
	mem[reg->SP - 1] = (ret >> 8) & 0xff;
	mem[reg->SP - 2] = (ret & 0xff);
	reg->SP = reg->SP - 2;
	reg->PC = (mem[reg->PC + 1] << 8) | mem[reg->PC];
}

void	ADI(t_registers *reg,t_memory *mem)
{
	uint16_t x = (uint16_t)reg->A + (uint16_t)mem[reg->PC];
	reg->CC.Z = ((x & 0xff) == 0);
	reg->CC.S = (0x80 == (x & 0x80));
	reg->CC.P = parity((x & 0xff), 8);
	reg->CC.CY = (x > 0xff);
	reg->A = (uint8_t)x;
	reg->PC++;
}

void	ACI(t_registers *reg,t_memory *mem)
{
	(void)reg;
	(void)mem;
	exit(0);
}

void	SUI(t_registers *reg,t_memory *mem)
{
	(void)reg;
	(void)mem;
	exit(0);
}

void	SBI(t_registers *reg,t_memory *mem)
{
	(void)reg;
	(void)mem;
	exit(0);
}

void	ANI(t_registers *reg,t_memory *mem)
{
	reg->A = reg->A & mem[reg->PC];
	LogicFlagsA(reg);
	reg->PC++;
}

void	XRI(t_registers *reg,t_memory *mem)
{
	(void)reg;
	(void)mem;
	exit(0);
}

void	ORI(t_registers *reg,t_memory *mem)
{
	(void)reg;
	(void)mem;
	exit(0);
}

void	CPI(t_registers *reg,t_memory *mem)
{
	uint8_t x = reg->A - mem[reg->PC];
	reg->CC.Z = (x == 0);
	reg->CC.S = (0x80 == (x & 0x80));
	reg->CC.P = parity(x, 8);
	reg->CC.CY = (reg->A < mem[reg->PC]);
	reg->PC++;
}

void	IN(t_registers *reg,t_memory *mem)
{
	(void)reg;
	(void)mem;
	exit(0);
}

void	OUT(t_registers *reg,t_memory *mem)
{
	(void)reg;
	(void)mem;
	exit(0);
}

void	RST_0(t_registers *reg,t_memory *mem)
{
	(void)reg;
	(void)mem;
	exit(0);
}

void	RST_1(t_registers *reg,t_memory *mem)
{
	(void)reg;
	(void)mem;
	exit(0);
}

void	RST_2(t_registers *reg,t_memory *mem)
{
	(void)reg;
	(void)mem;
	exit(0);
}

void	RST_3(t_registers *reg,t_memory *mem)
{
	(void)reg;
	(void)mem;
	exit(0);
}

void	RST_4(t_registers *reg,t_memory *mem)
{
	(void)reg;
	(void)mem;
	exit(0);
}

void	RST_5(t_registers *reg,t_memory *mem)
{
	(void)reg;
	(void)mem;
	exit(0);
}

void	RST_6(t_registers *reg,t_memory *mem)
{
	(void)reg;
	(void)mem;
	exit(0);
}

void	RST_7(t_registers *reg,t_memory *mem)
{
	(void)reg;
	(void)mem;
	exit(0);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instruction_bus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhenrion <fhenrion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/10 19:47:13 by flavienhenr       #+#    #+#             */
/*   Updated: 2020/10/23 11:14:04 by fhenrion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "emulator.h"
#include "instruction_bus.h"
#include "arithmetic_logic_unit.h"
#include "stack_unit.h"

// no operation
void	NOP(t_cpu *cpu)
{
	(void)cpu;
}

// B <- byte 3, C <- byte 2
void	LXI_B(t_cpu *cpu)
{
	cpu->BC.low = cpu->addr_buff[1];
	cpu->BC.high = cpu->addr_buff[2];
	cpu->PC += 2;
}

// (BC) <- A
void	STAX_B(t_cpu *cpu)
{
	cpu->memory_bus[cpu->BC.pair] = cpu->A;
}

// BC <- BC + 1
void	INX_B(t_cpu *cpu)
{
	cpu->BC.pair++;
}

// B <- B + 1 || Z S P AC
void	INR_B(t_cpu *cpu)
{
	INR(cpu, &cpu->BC.high);
}

// B <- B - 1 || Z S P AC
void	DCR_B(t_cpu *cpu)
{
	DCR(cpu, &cpu->BC.high);
}

// 	B <- byte 2
void	MVI_B(t_cpu *cpu)
{
	cpu->BC.high = cpu->addr_buff[1];
	cpu->PC++;
}

// A = A << 1; bit 0 = prev bit 7; CY = prev bit 7
void	RLC(t_cpu *cpu)
{
	cpu->CC.CY = 0x80 == (cpu->A & 0x80);
	cpu->A = ((cpu->A & 0x80) >> 7) | (cpu->A << 1);
}

// HL = HL + BC | CY
void	DAD_B(t_cpu *cpu)
{
	cpu->CC.CY = (cpu->HL.pair + cpu->BC.pair) > 0xFFFF;
	cpu->HL.pair += cpu->BC.pair;
}

// A <- (BC)
void	LDAX_B(t_cpu *cpu)
{
	cpu->A = cpu->memory_bus[cpu->BC.pair];
}

// BC = BC - 1
void	DCX_B(t_cpu *cpu)
{
	cpu->BC.pair--;
}

// C <- C + 1 || Z S P AC
void	INR_C(t_cpu *cpu)
{
	INR(cpu, &cpu->BC.low);
}

// C <- C - 1 || Z S P AC
void	DCR_C(t_cpu *cpu)
{
	DCR(cpu, &cpu->BC.low);
}

// 	C <- byte 2
void	MVI_C(t_cpu *cpu)
{
	cpu->BC.low = cpu->addr_buff[1];
	cpu->PC++;
}

// A = A >> 1; bit 7 = prev bit 0; CY = prev bit 0
void	RRC(t_cpu *cpu)
{
	cpu->CC.CY = cpu->A & 1;
	cpu->A = ((cpu->A & 1) << 7) | (cpu->A >> 1);
}

// D <- byte 3, E <- byte 2
void	LXI_D(t_cpu *cpu)
{
	cpu->DE.low = cpu->addr_buff[1];
	cpu->DE.high = cpu->addr_buff[2];
	cpu->PC += 2;
}

// (DE) <- A
void	STAX_D(t_cpu *cpu)
{
	cpu->memory_bus[cpu->DE.pair] = cpu->A;
}

// DE <- DE + 1
void	INX_D(t_cpu *cpu)
{
	cpu->DE.pair++;
}

// D <- D + 1 || Z S P AC
void	INR_D(t_cpu *cpu)
{
	INR(cpu, &cpu->DE.high);
}

// D <- D - 1
void	DCR_D(t_cpu *cpu)
{
	DCR(cpu, &cpu->DE.high);
}

// D <- byte 2
void	MVI_D(t_cpu *cpu)
{
	cpu->DE.high = cpu->addr_buff[1];
	cpu->PC++;
}

// A = A << 1; bit 0 = prev CY; CY = prev bit 7
void	RAL(t_cpu *cpu)
{
	cpu->WZ.low = cpu->A;
	cpu->A = (cpu->CC.CY >> 7) | (cpu->A << 1);
	cpu->CC.CY = 0x80 == (cpu->WZ.low & 0x80);
}

// HL = HL + DE | CY
void	DAD_D(t_cpu *cpu)
{
	cpu->CC.CY = (cpu->HL.pair + cpu->DE.pair) > 0xFFFF;
	cpu->HL.pair += cpu->DE.pair;
}

// A <- (DE)
void	LDAX_D(t_cpu *cpu)
{
	cpu->A = cpu->memory_bus[cpu->DE.pair];
}

// DE = DE - 1
void	DCX_D(t_cpu *cpu)
{
	cpu->DE.pair--;
}

// E <- E + 1 || Z S P AC
void	INR_E(t_cpu *cpu)
{
	INR(cpu, &cpu->DE.low);
}

// E <- E - 1 || Z S P AC
void	DCR_E(t_cpu *cpu)
{
	DCR(cpu, &cpu->DE.low);
}

// 	E <- byte 2
void	MVI_E(t_cpu *cpu)
{
	cpu->DE.low = cpu->addr_buff[1];
	cpu->PC++;
}

// A = A >> 1; bit 7 = prev bit 7; CY = prev bit 0
void	RAR(t_cpu *cpu)
{
	cpu->CC.CY = (cpu->A & 1);
	cpu->A = ((cpu->A & 0x80) << 7) | (cpu->A >> 1);
}

// H <- byte 3, L <- byte 2
void	LXI_H(t_cpu *cpu)
{
	cpu->HL.low = cpu->addr_buff[1];
	cpu->HL.high = cpu->addr_buff[2];
	cpu->PC += 2;
}

// (adr) <- L; (adr + 1) <- H
void	SHLD(t_cpu *cpu)
{
	cpu->WZ.pair = cpu->addr_buff[1] | (cpu->addr_buff[2] << 8);
	cpu->memory_bus[cpu->WZ.pair] = cpu->HL.low;
	cpu->memory_bus[cpu->WZ.pair + 1] = cpu->HL.high;
	cpu->PC += 2;
}

// continue to rewrite here
// HL <- HL + 1
void	INX_H(t_cpu *cpu)
{
	cpu->HL.pair++;
}

// H <- H + 1 || Z S P AC
void	INR_H(t_cpu *cpu)
{
	INR(cpu, &cpu->HL.high);
}

// H <- H - 1 || Z S P AC
void	DCR_H(t_cpu *cpu)
{
	DCR(cpu, &cpu->HL.high);
}

// 	H <- byte 2
void	MVI_H(t_cpu *cpu)
{
	cpu->HL.high = cpu->addr_buff[1];
	cpu->PC++;
}

// BCD Decimal Adjust Accumulator instruction
void	DAA(t_cpu *cpu)
{
	cpu->WZ.low = cpu->A;
	cpu->WZ.high = cpu->CC.CY;
	cpu->CC.CY = 0;
	if (cpu->CC.AC || (!cpu->CC.S && (cpu->A & 0x0F) > 9))
	{
		cpu->CC.CY = ((cpu->A + 0x06) > 0xFF) ? 1 : cpu->WZ.high;
		cpu->A += 0x06;
	}
	if ((cpu->WZ.low > 0x99) || (cpu->WZ.high == 1))
	{
		cpu->A += 0x60;
		cpu->CC.CY = 1;
	}
	else
		cpu->CC.CY = 0;
}

// HL = HL + HL | CY
void	DAD_H(t_cpu *cpu)
{
	cpu->CC.CY = (cpu->HL.pair * 2) > 0xFFFF;
	cpu->HL.pair *= 2;
}

// L <- (adr); H <- (adr + 1)
void	LHLD(t_cpu *cpu)
{
	cpu->WZ.pair = cpu->addr_buff[1] | (cpu->addr_buff[2] << 8);
	cpu->HL.low = cpu->memory_bus[cpu->WZ.pair];
	cpu->HL.high = cpu->memory_bus[cpu->WZ.pair + 1];
	cpu->PC += 2;
}

// HL = HL - 1
void	DCX_H(t_cpu *cpu)
{
	cpu->HL.pair--;
}

// L <- L + 1 || Z S P AC
void	INR_L(t_cpu *cpu)
{
	INR(cpu, &cpu->HL.low);
}

// L <- L - 1 || Z S P AC
void	DCR_L(t_cpu *cpu)
{
	DCR(cpu, &cpu->HL.low);
}

// 	L <- byte 2
void	MVI_L(t_cpu *cpu)
{
	cpu->HL.low = cpu->addr_buff[1];
	cpu->PC++;
}

// 	A <- !A
void	CMA(t_cpu *cpu)
{
	cpu->A = ~cpu->A;
}

// high SP <- byte 3, low SP <- byte 2
void	LXI_SP(t_cpu *cpu)
{
	cpu->SP = cpu->addr_buff[1] | (cpu->addr_buff[2] << 8);
	cpu->PC += 2;
}

// (adr) <- A
void	STA(t_cpu *cpu)
{
	cpu->memory_bus[cpu->addr_buff[1] | (cpu->addr_buff[2] << 8)] = cpu->A;
	cpu->PC += 2;
}

// SP = SP + 1
void	INX_SP(t_cpu *cpu)
{
	cpu->SP++;
}

// (HL) <- (HL) + 1 || Z S P AC
void	INR_M(t_cpu *cpu)
{
	INR(cpu, &cpu->memory_bus[cpu->HL.pair]);
}

// (HL) <- (HL) - 1 || Z S P AC
void	DCR_M(t_cpu *cpu)
{
	DCR(cpu, &cpu->memory_bus[cpu->HL.pair]);
}

// 	(HL) <- byte 2
void	MVI_M(t_cpu *cpu)
{
	cpu->memory_bus[cpu->HL.pair] = cpu->addr_buff[1];
	cpu->PC++;
}

// CY = 1
void	STC(t_cpu *cpu)
{
	cpu->CC.CY = 1;
}

// HL = HL + SP | CY
void	DAD_SP(t_cpu *cpu)
{
	cpu->CC.CY = (cpu->HL.pair + cpu->SP) > 0xFFFF;
	cpu->HL.pair += cpu->SP;
}

// A <- (adr)
void	LDA(t_cpu *cpu)
{
	cpu->A = cpu->memory_bus[cpu->addr_buff[1] | (cpu->addr_buff[2] << 8)];
	cpu->PC += 2;
}

// SP = SP - 1
void	DCX_SP(t_cpu *cpu)
{
	cpu->SP--;
}

// A <- A + 1 || Z S P AC
void	INR_A(t_cpu *cpu)
{
	INR(cpu, &cpu->A);
}

// A <- A - 1 || Z S P AC
void	DCR_A(t_cpu *cpu)
{
	DCR(cpu, &cpu->A);
}

// A <- byte 2
void	MVI_A(t_cpu *cpu)
{
	cpu->A = cpu->addr_buff[1];
	cpu->PC++;
}

// CY = !CY
void	CMC(t_cpu *cpu)
{
	cpu->CC.CY = !cpu->CC.CY;
}

// B <- B
void	MOV_BB(t_cpu *cpu)
{
	cpu->BC.high = cpu->BC.high;
}

// B <- C
void	MOV_BC(t_cpu *cpu)
{
	cpu->BC.high = cpu->BC.low;
}

// B <- D
void	MOV_BD(t_cpu *cpu)
{
	cpu->BC.high = cpu->DE.high;
}

// B <- E
void	MOV_BE(t_cpu *cpu)
{
	cpu->BC.high = cpu->DE.low;
}

// B <- H
void	MOV_BH(t_cpu *cpu)
{
	cpu->BC.high = cpu->HL.high;
}

// B <- L
void	MOV_BL(t_cpu *cpu)
{
	cpu->BC.high = cpu->HL.low;
}

// B <- (HL)
void	MOV_BM(t_cpu *cpu)
{
	cpu->BC.high = cpu->memory_bus[cpu->HL.pair];
}

// B <- A
void	MOV_BA(t_cpu *cpu)
{
	cpu->BC.high = cpu->A;
}

// C <- B
void	MOV_CB(t_cpu *cpu)
{
	cpu->BC.low = cpu->BC.high;
}

// C <- C
void	MOV_CC(t_cpu *cpu)
{
	cpu->BC.low = cpu->BC.low;
}

// C <- D
void	MOV_CD(t_cpu *cpu)
{
	cpu->BC.low = cpu->DE.high;
}

// C <- E
void	MOV_CE(t_cpu *cpu)
{
	cpu->BC.low = cpu->DE.low;
}

// C <- H
void	MOV_CH(t_cpu *cpu)
{
	cpu->BC.low = cpu->HL.high;
}

// C <- L
void	MOV_CL(t_cpu *cpu)
{
	cpu->BC.low = cpu->HL.low;
}

// C <- (HL)
void	MOV_CM(t_cpu *cpu)
{
	cpu->BC.low = cpu->memory_bus[cpu->HL.pair];
}

// C <- A
void	MOV_CA(t_cpu *cpu)
{
	cpu->BC.low = cpu->A;
}

// D <- B
void	MOV_DB(t_cpu *cpu)
{
	cpu->DE.high = cpu->BC.high;
}

// D <- C
void	MOV_DC(t_cpu *cpu)
{
	cpu->DE.high = cpu->BC.low;
}

// D <- D
void	MOV_DD(t_cpu *cpu)
{
	cpu->DE.high = cpu->DE.high;
}

// D <- E
void	MOV_DE(t_cpu *cpu)
{
	cpu->DE.high = cpu->DE.low;
}

// D <- H
void	MOV_DH(t_cpu *cpu)
{
	cpu->DE.high = cpu->HL.high;
}

// D <- L
void	MOV_DL(t_cpu *cpu)
{
	cpu->DE.high = cpu->HL.low;
}

// D <- (HL)
void	MOV_DM(t_cpu *cpu)
{
	cpu->DE.high = cpu->memory_bus[cpu->HL.pair];
}

// D <- A
void	MOV_DA(t_cpu *cpu)
{
	cpu->DE.high = cpu->A;
}

// E <- B
void	MOV_EB(t_cpu *cpu)
{
	cpu->DE.low = cpu->BC.high;
}

// E <- C
void	MOV_EC(t_cpu *cpu)
{
	cpu->DE.low = cpu->BC.low;
}

// E <- D
void	MOV_ED(t_cpu *cpu)
{
	cpu->DE.low = cpu->DE.high;
}

// E <- E
void	MOV_EE(t_cpu *cpu)
{
	cpu->DE.low = cpu->DE.low;
}

// E <- H
void	MOV_EH(t_cpu *cpu)
{
	cpu->DE.low = cpu->HL.high;
}

// E <- L
void	MOV_EL(t_cpu *cpu)
{
	cpu->DE.low = cpu->HL.low;
}

// E <- (HL)
void	MOV_EM(t_cpu *cpu)
{
	cpu->DE.low = cpu->memory_bus[cpu->HL.pair];
}

// E <- A
void	MOV_EA(t_cpu *cpu)
{
	cpu->DE.low = cpu->A;
}

// H <- B
void	MOV_HB(t_cpu *cpu)
{
	cpu->HL.high = cpu->BC.high;
}

// H <- C
void	MOV_HC(t_cpu *cpu)
{
	cpu->HL.high = cpu->BC.low;
}

// H <- D
void	MOV_HD(t_cpu *cpu)
{
	cpu->HL.high = cpu->DE.high;
}

// H <- E
void	MOV_HE(t_cpu *cpu)
{
	cpu->HL.high = cpu->DE.low;
}

// H <- H
void	MOV_HH(t_cpu *cpu)
{
	cpu->HL.high = cpu->HL.high;
}

// H <- L
void	MOV_HL(t_cpu *cpu)
{
	cpu->HL.high = cpu->HL.low;
}

// H <- (HL)
void	MOV_HM(t_cpu *cpu)
{
	cpu->HL.high = cpu->memory_bus[cpu->HL.pair];
}

// H <- A
void	MOV_HA(t_cpu *cpu)
{
	cpu->HL.high = cpu->A;
}

// L <- B
void	MOV_LB(t_cpu *cpu)
{
	cpu->HL.low = cpu->BC.high;
}

// L <- C
void	MOV_LC(t_cpu *cpu)
{
	cpu->HL.low = cpu->BC.low;
}

// L <- D
void	MOV_LD(t_cpu *cpu)
{
	cpu->HL.low = cpu->DE.high;
}

// L <- E
void	MOV_LE(t_cpu *cpu)
{
	cpu->HL.low = cpu->DE.low;
}

// L <- H
void	MOV_LH(t_cpu *cpu)
{
	cpu->HL.low = cpu->HL.high;
}

// L <- L
void	MOV_LL(t_cpu *cpu)
{
	cpu->HL.low = cpu->HL.low;
}

// L <- (HL)
void	MOV_LM(t_cpu *cpu)
{
	cpu->HL.low = cpu->memory_bus[cpu->HL.pair];
}

// L <- A
void	MOV_LA(t_cpu *cpu)
{
	cpu->HL.low = cpu->A;
}

// (HL) <- B
void	MOV_MB(t_cpu *cpu)
{
	cpu->memory_bus[cpu->HL.pair] = cpu->BC.high;
}

// (HL) <- C
void	MOV_MC(t_cpu *cpu)
{
	cpu->memory_bus[cpu->HL.pair] = cpu->BC.low;
}

// (HL) <- D
void	MOV_MD(t_cpu *cpu)
{
	cpu->memory_bus[cpu->HL.pair] = cpu->DE.high;
}

// (HL) <- E
void	MOV_ME(t_cpu *cpu)
{
	cpu->memory_bus[cpu->HL.pair] = cpu->DE.low;
}

// (HL) <- H
void	MOV_MH(t_cpu *cpu)
{
	cpu->memory_bus[cpu->HL.pair] = cpu->HL.high;
}

// (HL) <- L
void	MOV_ML(t_cpu *cpu)
{
	cpu->memory_bus[cpu->HL.pair] = cpu->HL.low;
}

// (HL) <- (HL)
void	MOV_MM(t_cpu *cpu)
{
	cpu->memory_bus[cpu->HL.pair] = cpu->memory_bus[cpu->HL.pair];
}

// Stop until int (usefull only if multi-thread implemented)
void	HLT(t_cpu *cpu)
{
	(void)cpu;
	// block on a mutex -> do INT as a mutex ?
}

// (HL) <- A
void	MOV_MA(t_cpu *cpu)
{
	cpu->memory_bus[cpu->HL.pair] = cpu->A;
}

// A <- B
void	MOV_AB(t_cpu *cpu)
{
	cpu->A = cpu->BC.high;
}

// A <- C
void	MOV_AC(t_cpu *cpu)
{
	cpu->A = cpu->BC.low;
}

// A <- D
void	MOV_AD(t_cpu *cpu)
{
	cpu->A = cpu->DE.high;
}

// A <- E
void	MOV_AE(t_cpu *cpu)
{
	cpu->A = cpu->DE.low;
}

// A <- H
void	MOV_AH(t_cpu *cpu)
{
	cpu->A = cpu->HL.high;
}

// A <- L
void	MOV_AL(t_cpu *cpu)
{
	cpu->A = cpu->HL.low;
}

// A <- (HL)
void	MOV_AM(t_cpu *cpu)
{
	cpu->A = cpu->memory_bus[cpu->HL.pair];
}

// A <- A
void	MOV_AA(t_cpu *cpu)
{
	cpu->A = cpu->A;
}

// A <- A + B || Z, S, P, CY, AC
void	ADD_B(t_cpu *cpu)
{
	ADD(cpu, cpu->BC.high);
}

// A <- A + C || Z, S, P, CY, AC
void	ADD_C(t_cpu *cpu)
{
	ADD(cpu, cpu->BC.low);
}

// A <- A + D || Z, S, P, CY, AC
void	ADD_D(t_cpu *cpu)
{
	ADD(cpu, cpu->DE.high);
}

// A <- A + E || Z, S, P, CY, AC
void	ADD_E(t_cpu *cpu)
{
	ADD(cpu, cpu->DE.low);
}

// A <- A + H || Z, S, P, CY, AC
void	ADD_H(t_cpu *cpu)
{
	ADD(cpu, cpu->HL.high);
}

// A <- A + L || Z, S, P, CY, AC
void	ADD_L(t_cpu *cpu)
{
	ADD(cpu, cpu->HL.low);
}

// A <- A + (HL) || Z, S, P, CY, AC
void	ADD_M(t_cpu *cpu)
{
	ADD(cpu, cpu->memory_bus[cpu->HL.pair]);
}

// A <- A + A || Z, S, P, CY, AC
void	ADD_A(t_cpu *cpu)
{
	ADD(cpu, cpu->A);
}

// A <- A + B + CY || Z, S, P, CY, AC
void	ADC_B(t_cpu *cpu)
{
	ADC(cpu, cpu->BC.high);
}

// A <- A + C + CY || Z, S, P, CY, AC
void	ADC_C(t_cpu *cpu)
{
	ADC(cpu, cpu->BC.low);
}

// A <- A + D + CY || Z, S, P, CY, AC
void	ADC_D(t_cpu *cpu)
{
	ADC(cpu, cpu->DE.high);
}

// A <- A + E + CY || Z, S, P, CY, AC
void	ADC_E(t_cpu *cpu)
{
	ADC(cpu, cpu->DE.low);
}

// A <- A + H + CY || Z, S, P, CY, AC
void	ADC_H(t_cpu *cpu)
{
	ADC(cpu, cpu->HL.high);
}

// A <- A + L + CY || Z, S, P, CY, AC
void	ADC_L(t_cpu *cpu)
{
	ADC(cpu, cpu->HL.low);
}

// A <- A + (HL) + CY || Z, S, P, CY, AC
void	ADC_M(t_cpu *cpu)
{
	ADC(cpu, cpu->memory_bus[cpu->HL.pair]);
}

// A <- A + A + CY || Z, S, P, CY, AC
void	ADC_A(t_cpu *cpu)
{
	ADC(cpu, cpu->A);
}

// A <- A - B || Z, S, P, CY, AC
void	SUB_B(t_cpu *cpu)
{
	SUB(cpu, cpu->BC.high);
}

// A <- A - C || Z, S, P, CY, AC
void	SUB_C(t_cpu *cpu)
{
	SUB(cpu, cpu->BC.low);
}

// A <- A - D || Z, S, P, CY, AC
void	SUB_D(t_cpu *cpu)
{
	SUB(cpu, cpu->DE.high);
}

// A <- A - E || Z, S, P, CY, AC
void	SUB_E(t_cpu *cpu)
{
	SUB(cpu, cpu->DE.low);
}

// A <- A - H || Z, S, P, CY, AC
void	SUB_H(t_cpu *cpu)
{
	SUB(cpu, cpu->HL.high);
}

// A <- A - L || Z, S, P, CY, AC
void	SUB_L(t_cpu *cpu)
{
	SUB(cpu, cpu->HL.low);
}

// A <- A - (HL) || Z, S, P, CY, AC
void	SUB_M(t_cpu *cpu)
{
	SUB(cpu, cpu->memory_bus[cpu->HL.pair]);
}

// A <- A - A || Z, S, P, CY, AC
void	SUB_A(t_cpu *cpu)
{
	SUB(cpu, cpu->A);
}

// A <- A - B - CY || Z, S, P, CY, AC
void	SSB_B(t_cpu *cpu)
{
	SSB(cpu, cpu->BC.high);
}

// A <- A - C - CY || Z, S, P, CY, AC
void	SSB_C(t_cpu *cpu)
{
	SSB(cpu, cpu->BC.low);
}

// A <- A - D - CY || Z, S, P, CY, AC
void	SSB_D(t_cpu *cpu)
{
	SSB(cpu, cpu->DE.high);
}

// A <- A - E - CY || Z, S, P, CY, AC
void	SSB_E(t_cpu *cpu)
{
	SSB(cpu, cpu->DE.low);
}

// A <- A - H - CY || Z, S, P, CY, AC
void	SSB_H(t_cpu *cpu)
{
	SSB(cpu, cpu->HL.high);
}

// A <- A - L - CY || Z, S, P, CY, AC
void	SSB_L(t_cpu *cpu)
{
	SSB(cpu, cpu->HL.low);
}

// A <- A - (HL) - CY || Z, S, P, CY, AC
void	SSB_M(t_cpu *cpu)
{
	SSB(cpu, cpu->memory_bus[cpu->HL.pair]);
}

// A <- A - A - CY || Z, S, P, CY, AC
void	SSB_A(t_cpu *cpu)
{
	SSB(cpu, cpu->A);
}

// A <- A & B || Z, S, P, CY, AC
void	ANA_B(t_cpu *cpu)
{
	ANA(cpu, cpu->BC.high);
}

// A <- A & C || Z, S, P, CY, AC
void	ANA_C(t_cpu *cpu)
{
	ANA(cpu, cpu->BC.low);
}

// A <- A & D || Z, S, P, CY, AC
void	ANA_D(t_cpu *cpu)
{
	ANA(cpu, cpu->DE.high);
}

// A <- A & E || Z, S, P, CY, AC
void	ANA_E(t_cpu *cpu)
{
	ANA(cpu, cpu->DE.low);
}

// A <- A & H || Z, S, P, CY, AC
void	ANA_H(t_cpu *cpu)
{
	ANA(cpu, cpu->HL.high);
}

// A <- A & L || Z, S, P, CY, AC
void	ANA_L(t_cpu *cpu)
{
	ANA(cpu, cpu->HL.low);
}

// A <- A & (HL) || Z, S, P, CY, AC
void	ANA_M(t_cpu *cpu)
{
	ANA(cpu, cpu->memory_bus[cpu->HL.pair]);
}

// A <- A & A || Z, S, P, CY, AC
void	ANA_A(t_cpu *cpu)
{
	ANA(cpu, cpu->A);
}

// A <- A & B || Z, S, P, CY, AC
void	XRA_B(t_cpu *cpu)
{
	XRA(cpu, cpu->BC.high);
}

// A <- A & C || Z, S, P, CY, AC
void	XRA_C(t_cpu *cpu)
{
	XRA(cpu, cpu->BC.low);
}

// A <- A & D || Z, S, P, CY, AC
void	XRA_D(t_cpu *cpu)
{
	XRA(cpu, cpu->DE.high);
}

// A <- A & E || Z, S, P, CY, AC
void	XRA_E(t_cpu *cpu)
{
	XRA(cpu, cpu->DE.low);
}

// A <- A & H || Z, S, P, CY, AC
void	XRA_H(t_cpu *cpu)
{
	XRA(cpu, cpu->HL.high);
}

// A <- A & L || Z, S, P, CY, AC
void	XRA_L(t_cpu *cpu)
{
	XRA(cpu, cpu->HL.low);
}

// A <- A & (HL) || Z, S, P, CY, AC
void	XRA_M(t_cpu *cpu)
{
	XRA(cpu, cpu->memory_bus[cpu->HL.pair]);
}

// A <- A ^ A || Z, S, P, CY, AC
void	XRA_A(t_cpu *cpu)
{
	XRA(cpu, cpu->A);
}

// A <- A | B || Z, S, P, CY, AC
void	ORA_B(t_cpu *cpu)
{
	ORA(cpu, cpu->BC.high);
}

// A <- A | C || Z, S, P, CY, AC
void	ORA_C(t_cpu *cpu)
{
	ORA(cpu, cpu->BC.low);
}

// A <- A | D || Z, S, P, CY, AC
void	ORA_D(t_cpu *cpu)
{
	ORA(cpu, cpu->DE.high);
}

// A <- A | E || Z, S, P, CY, AC
void	ORA_E(t_cpu *cpu)
{
	ORA(cpu, cpu->DE.low);
}

// A <- A | H || Z, S, P, CY, AC
void	ORA_H(t_cpu *cpu)
{
	ORA(cpu, cpu->HL.high);
}

// A <- A | L || Z, S, P, CY, AC
void	ORA_L(t_cpu *cpu)
{
	ORA(cpu, cpu->HL.low);
}

// A <- A | (HL) || Z, S, P, CY, AC
void	ORA_M(t_cpu *cpu)
{
	ORA(cpu, cpu->memory_bus[cpu->HL.pair]);
}

// A <- A | A || Z, S, P, CY, AC
void	ORA_A(t_cpu *cpu)
{
	ORA(cpu, cpu->A);
}

// A - B || Z, S, P, CY, AC
void	CMP_B(t_cpu *cpu)
{
	CMP(cpu, cpu->BC.high);
}

// A - C || Z, S, P, CY, AC
void	CMP_C(t_cpu *cpu)
{
	CMP(cpu, cpu->BC.low);
}

// A - D || Z, S, P, CY, AC
void	CMP_D(t_cpu *cpu)
{
	CMP(cpu, cpu->DE.high);
}

// A - E || Z, S, P, CY, AC
void	CMP_E(t_cpu *cpu)
{
	CMP(cpu, cpu->DE.low);
}

// A - H || Z, S, P, CY, AC
void	CMP_H(t_cpu *cpu)
{
	CMP(cpu, cpu->HL.high);
}

// A - L || Z, S, P, CY, AC
void	CMP_L(t_cpu *cpu)
{
	CMP(cpu, cpu->HL.low);
}

// A - (HL) || Z, S, P, CY, AC
void	CMP_M(t_cpu *cpu)
{
	CMP(cpu, cpu->memory_bus[cpu->HL.pair]);
}

// A - A || Z, S, P, CY, AC
void	CMP_A(t_cpu *cpu)
{
	CMP(cpu, cpu->A);
}

// if NZ, RET
void	RNZ(t_cpu *cpu)
{
	if (!cpu->CC.Z)
		RET(cpu);
}

// 	C <- (SP); B <- (SP + 1); SP <- SP + 2
void	POP_B(t_cpu *cpu)
{
	POP(cpu, &cpu->BC);
}

// if NZ, JMP
void	JNZ(t_cpu *cpu)
{
	if (!cpu->CC.Z)
		JMP(cpu);
	else
		cpu->PC += 2;
}

// PC <- adr
void	JMP(t_cpu *cpu)
{
	cpu->PC = cpu->addr_buff[1] | (cpu->addr_buff[2] << 8);
}

// if NZ, CALL
void	CNZ(t_cpu *cpu)
{
	if (!cpu->CC.Z)
		CALL(cpu);
	else
		cpu->PC += 2;
}

// (SP - 2) <- C; (SP - 1) <-B; SP <- SP - 2
void	PUSH_B(t_cpu *cpu)
{
	PUSH(cpu, cpu->BC);
}

// A <- A + byte
void	ADI(t_cpu *cpu)
{
	ADD(cpu, cpu->addr_buff[1]);
	cpu->PC++;
}

// CALL $0
void	RST_0(t_cpu *cpu)
{
	cpu->PC += 2;
	PUSH(cpu, (t_u8pair)(cpu->PC));
	cpu->PC = 0;
}

// if Z, RET
void	RZ(t_cpu *cpu)
{
	if (cpu->CC.Z)
		RET(cpu);
}

void	RET(t_cpu *cpu)
{
	POP(cpu, (t_u8pair*)&cpu->PC);
}

// if Z, JMP
void	JZ(t_cpu *cpu)
{
	if (cpu->CC.Z)
		JMP(cpu);
	else
		cpu->PC += 2;
}

// if Z, CALL adr
void	CZ(t_cpu *cpu)
{
	if (cpu->CC.Z)
		CALL(cpu);
	else
		cpu->PC += 2;
}

// (SP - 1) <- PC.hi; (SP - 2) <- PC.lo; SP <- SP - 2; PC = adr
void	CALL(t_cpu *cpu)
{
	cpu->WZ.pair = cpu->addr_buff[1] | (cpu->addr_buff[2] << 8);
	/* CP/M OS function emulation for cpudiag */
	if (cpu->WZ.pair == 5) // print
	{
		char *str = (char *)&cpu->memory_bus[cpu->DE.pair + 3];
		while (*str != '$')
			printf("%c", *str++);
		printf("\n");
		exit(0);
	}
	else if (cpu->WZ.pair == 0) // exit
		exit(1);
	else
	{
		cpu->PC += 2;
		PUSH(cpu, (t_u8pair)(cpu->PC));
		cpu->PC = cpu->WZ.pair;
	}
}

// A <- A + data + CY
void	ACI(t_cpu *cpu)
{
	ADC(cpu, cpu->addr_buff[1]);
	cpu->PC++;
}

// CALL $8
void	RST_1(t_cpu *cpu)
{
	cpu->PC += 2;
	PUSH(cpu, (t_u8pair)(cpu->PC));
	cpu->PC = 8;
}

// if NCY, RET
void	RNC(t_cpu *cpu)
{
	if (!cpu->CC.CY)
		RET(cpu);
}

// 	E <- (SP); D <- (SP + 1); SP <- SP + 2
void	POP_D(t_cpu *cpu)
{
	POP(cpu, &cpu->DE);
}

// if NCY, PC <- adr
void	JNC(t_cpu *cpu)
{
	if (!cpu->CC.CY)
		JMP(cpu);
	else
		cpu->PC += 2;
}

// if NCY, CALL adr
void	CNC(t_cpu *cpu)
{
	if (!cpu->CC.CY)
		CALL(cpu);
	else
		cpu->PC += 2;
}

// 	(SP - 2) <- E; (SP - 1) <- D; SP <- SP - 2
void	PUSH_D(t_cpu *cpu)
{
	PUSH(cpu, cpu->DE);
}

// A <- A - data
void	SUI(t_cpu *cpu)
{
	SUB(cpu, cpu->addr_buff[1]);
	cpu->PC++;
}

// CALL $10
void	RST_2(t_cpu *cpu)
{
	cpu->PC += 2;
	PUSH(cpu, (t_u8pair)(cpu->PC));
	cpu->PC = 10;
}

// if CY, RET
void	RC(t_cpu *cpu)
{
	if (cpu->CC.CY)
		RET(cpu);
}

// 	if CY, PC <- adr
void	JC(t_cpu *cpu)
{
	if (cpu->CC.CY)
		JMP(cpu);
	else
		cpu->PC += 2;
}

// if CY, CALL adr
void	CC(t_cpu *cpu)
{
	if (cpu->CC.CY)
		CALL(cpu);
	else
		cpu->PC += 2;
}

// A <- A - data - CY
void	SBI(t_cpu *cpu)
{
	SSB(cpu, cpu->addr_buff[1]);
	cpu->PC++;
}

// CALL $18
void	RST_3(t_cpu *cpu)
{
	cpu->PC += 2;
	PUSH(cpu, (t_u8pair)(cpu->PC));
	cpu->PC = 18;
}

// if !P, RET
void	RPO(t_cpu *cpu)
{
	if (!cpu->CC.P)
		RET(cpu);
}

// 	L <- (SP); H <- (SP + 1); SP <- SP + 2
void	POP_H(t_cpu *cpu)
{
	POP(cpu, &cpu->HL);
}

// if !P, PC <- adr
void	JPO(t_cpu *cpu)
{
	if (!cpu->CC.P)
		JMP(cpu);
	else
		cpu->PC += 2;
}

// L <-> (SP); H <-> (SP+1)
void	XTHL(t_cpu *cpu)
{
	cpu->WZ.pair = cpu->HL.pair;
	cpu->HL.low = cpu->memory_bus[cpu->SP];
	cpu->HL.high = cpu->memory_bus[cpu->SP + 1];
	cpu->memory_bus[cpu->SP] = cpu->WZ.low;
	cpu->memory_bus[cpu->SP + 1] = cpu->WZ.high;
}

// 	if !P, CALL adr
void	CPO(t_cpu *cpu)
{
	if (!cpu->CC.P)
		CALL(cpu);
	else
		cpu->PC += 2;
}

// 	(SP - 2) <- L; (SP - 1) <- H; SP <- SP - 2
void	PUSH_H(t_cpu *cpu)
{
	PUSH(cpu, cpu->HL);
}

// A <- A & data
void	ANI(t_cpu *cpu)
{
	ANA(cpu, cpu->addr_buff[1]);
	cpu->PC++;
}

// CALL $20
void	RST_4(t_cpu *cpu)
{
	cpu->PC += 2;
	PUSH(cpu, (t_u8pair)(cpu->PC));
	cpu->PC = 20;
}

// 	if P, RET
void	RPE(t_cpu *cpu)
{
	if (cpu->CC.P)
		RET(cpu);
}

// PC.hi <- H; PC.lo <- L
void	PCHL(t_cpu *cpu)
{
	cpu->PC = cpu->HL.pair;
}

// if P, PC <- adr
void	JPE(t_cpu *cpu)
{
	if (cpu->CC.P)
		JMP(cpu);
	else
		cpu->PC += 2;
}

//	H <-> D; L <-> E
void	XCHG(t_cpu *cpu)
{
	cpu->WZ.pair = cpu->DE.pair;
	cpu->DE.pair = cpu->HL.pair;
	cpu->HL.pair = cpu->WZ.pair;
}

// if P, CALL adr
void	CPE(t_cpu *cpu)
{
	if (cpu->CC.P)
		CALL(cpu);
	else
		cpu->PC += 2;
}

// A <- A ^ data
void	XRI(t_cpu *cpu)
{
	XRA(cpu, cpu->addr_buff[1]);
	cpu->PC++;
}

// CALL $28
void	RST_5(t_cpu *cpu)
{
	cpu->PC += 2;
	PUSH(cpu, (t_u8pair)(cpu->PC));
	cpu->PC = 28;
}

// 	if !S, RET
void	RP(t_cpu *cpu)
{
	if (!cpu->CC.S)
		RET(cpu);
}

// 	CC <- (SP); A <- (SP + 1); SP <- SP + 2
void	POP_PSW(t_cpu *cpu)
{
	cpu->A = cpu->memory_bus[cpu->SP + 1];
	cpu->WZ.low = cpu->memory_bus[cpu->SP];
	cpu->CC.Z  = (0x01 == (cpu->WZ.low & 0x01));
	cpu->CC.S  = (0x02 == (cpu->WZ.low & 0x02));
	cpu->CC.P  = (0x04 == (cpu->WZ.low & 0x04));
	cpu->CC.CY = (0x08 == (cpu->WZ.low & 0x08));
	cpu->CC.AC = (0x10 == (cpu->WZ.low & 0x10));
	cpu->SP += 2;
}

// if !S, PC <- adr
void	JP(t_cpu *cpu)
{
	if (!cpu->CC.S)
		JMP(cpu);
	else
		cpu->PC += 2;
}

// Disable interrupts
void	DI(t_cpu *cpu)
{
	cpu->CC.INT = 0;
}

//	if !S, CALL adr
void	CP(t_cpu *cpu)
{
	if (!cpu->CC.S)
		CALL(cpu);
	else
		cpu->PC += 2;
}

// (SP - 2) <- CC; (SP - 1) <- A; SP - SP - 2
void	PUSH_PSW(t_cpu *cpu)
{
	cpu->memory_bus[cpu->SP - 1] = cpu->A;
	cpu->memory_bus[cpu->SP - 2] = (
		cpu->CC.Z |
		cpu->CC.S << 1 |
		cpu->CC.P << 2 |
		cpu->CC.CY << 3 |
		cpu->CC.AC << 4
	);
	cpu->SP = cpu->SP - 2;
}

// A <- A | data
void	ORI(t_cpu *cpu)
{
	ORA(cpu, cpu->addr_buff[1]);
	cpu->PC++;
}

// CALL $30
void	RST_6(t_cpu *cpu)
{
	cpu->PC += 2;
	PUSH(cpu, (t_u8pair)(cpu->PC));
	cpu->PC = 30;
}

// if S, RET
void	RM(t_cpu *cpu)
{
	if (cpu->CC.S)
		RET(cpu);
}

// SP = HL
void	SPHL(t_cpu *cpu)
{
	cpu->SP = cpu->HL.pair;
}

// if S, PC <- adr
void	JM(t_cpu *cpu)
{
	if (cpu->CC.S)
		JMP(cpu);
	else
		cpu->PC += 2;
}

// Enable interrupts
void	EI(t_cpu *cpu)
{
	cpu->CC.INT = 1;
}

//	if S, CALL adr
void	CM(t_cpu *cpu)
{
	if (cpu->CC.S)
		CALL(cpu);
	else
		cpu->PC += 2;
}

// A - data
void	CPI(t_cpu *cpu)
{
	CMP(cpu, cpu->addr_buff[1]);
	cpu->PC++;
}

// CALL $38
void	RST_7(t_cpu *cpu)
{
	cpu->PC += 2;
	PUSH(cpu, (t_u8pair)(cpu->PC));
	cpu->PC = 38;
}
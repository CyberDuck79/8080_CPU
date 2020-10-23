/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arithmetic_logic_unit.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flavienhenrion <flavienhenrion@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/10 19:49:28 by flavienhenr       #+#    #+#             */
/*   Updated: 2020/05/22 12:03:55 by flavienhenr      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "arithmetic_logic_unit.h"

static uint8_t	parity(uint8_t x)
{
	x ^= x >> 1;
	x ^= x >> 2;
	x ^= x >> 4;
	return (!(x & 1));
}

static void		set_flags(t_flags *CC, uint8_t reg)
{
	CC->Z = reg == 0;
	CC->S = (reg & 0x80) == 0x80;
	CC->P = parity(reg);
}

void			INR(t_cpu *cpu, uint8_t *reg)
{
	cpu->WZ.low = *reg ^ 1;
	(*reg)++;
	set_flags(&cpu->CC, *reg);
	cpu->CC.AC = ((cpu->WZ.low ^ *reg) & 0x10) == 0x10;
}

void			DCR(t_cpu *cpu, uint8_t *reg)
{
	cpu->WZ.low = *reg ^ 1;
	(*reg)--;
	set_flags(&cpu->CC, *reg);
	cpu->CC.AC = (~(cpu->WZ.low ^ *reg) & 0x10) == 0x10;
}

void			ADD(t_cpu *cpu, uint8_t value)
{
	cpu->WZ.low = cpu->A ^ value;
	cpu->CC.CY = (cpu->A + value) > 0xFF;
	cpu->A += value;
	set_flags(&cpu->CC, cpu->A);
	cpu->CC.AC = ((cpu->WZ.low ^ cpu->A) & 0x10) == 0x10;
}

void			ADC(t_cpu *cpu, uint8_t value)
{
	value += cpu->CC.CY;
	cpu->WZ.low = cpu->A ^ value;
	cpu->CC.CY = value == 0x00 || (cpu->A + value) > 0xFF;
	cpu->A += value;
	set_flags(&cpu->CC, cpu->A);
	cpu->CC.AC = ((cpu->WZ.low ^ cpu->A) & 0x10) == 0x10;
}

void			SUB(t_cpu *cpu, uint8_t value)
{
	cpu->WZ.low = cpu->A ^ value;
	cpu->CC.CY = (cpu->A - value) < 0x00;
	cpu->A -= value;
	set_flags(&cpu->CC, cpu->A);
	cpu->CC.AC = (~(cpu->WZ.low ^ cpu->A) & 0x10) == 0x10;
}

void			SSB(t_cpu *cpu, uint8_t value)
{
	value += cpu->CC.CY;
	cpu->WZ.low = cpu->A ^ value;
	cpu->CC.CY = value == 0x00 || (cpu->A - value) < 0x00;
	cpu->A -= value;
	set_flags(&cpu->CC, cpu->A);
	cpu->CC.AC = (~(cpu->WZ.low ^ cpu->A) & 0x10) == 0x10;
}

void			ANA(t_cpu *cpu, uint8_t value)
{
	cpu->A &= value;
	set_flags(&cpu->CC, cpu->A);
	cpu->CC.CY = 0;
	cpu->CC.AC = 0;
}

void			XRA(t_cpu *cpu, uint8_t value)
{
	cpu->A ^= value;
	set_flags(&cpu->CC, cpu->A);
	cpu->CC.CY = 0;
	cpu->CC.AC = 0;
}

void			ORA(t_cpu *cpu, uint8_t value)
{
	cpu->A |= value;
	set_flags(&cpu->CC, cpu->A);
	cpu->CC.CY = 0;
	cpu->CC.AC = 0;
}

void			CMP(t_cpu *cpu, uint8_t value)
{
	cpu->WZ.low = cpu->A - value;
	set_flags(&cpu->CC, cpu->WZ.low);
	cpu->CC.CY = cpu->A < value;
	cpu->CC.AC = 0;
}

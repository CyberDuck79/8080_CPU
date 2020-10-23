/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arithmetic_logic_unit.h                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flavienhenrion <flavienhenrion@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/10 19:55:56 by flavienhenr       #+#    #+#             */
/*   Updated: 2020/05/12 11:14:12 by flavienhenr      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARITHMETIC_LOGIC_UNIT_H
# define ARITHMETIC_LOGIC_UNIT_H

# include "emulator.h"

void	INR(t_cpu *cpu, uint8_t *reg);
void	DCR(t_cpu *cpu, uint8_t *reg);
void	ADD(t_cpu *cpu, uint8_t value);
void	ADC(t_cpu *cpu, uint8_t value);
void	SUB(t_cpu *cpu, uint8_t value);
void	SSB(t_cpu *cpu, uint8_t value);
void	ANA(t_cpu *cpu, uint8_t value);
void	XRA(t_cpu *cpu, uint8_t value);
void	ORA(t_cpu *cpu, uint8_t value);
void	CMP(t_cpu *cpu, uint8_t value);

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   control_unit.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flavienhenrion <flavienhenrion@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/12 11:14:55 by flavienhenr       #+#    #+#             */
/*   Updated: 2020/05/12 11:22:58 by flavienhenr      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack_unit.h"

void	POP(t_cpu *cpu, t_u8pair *reg)
{
	reg->low = cpu->memory_bus[cpu->SP];
	reg->high = cpu->memory_bus[cpu->SP + 1];
	cpu->SP += 2;
}

void	PUSH(t_cpu *cpu, t_u8pair reg)
{
	cpu->memory_bus[cpu->SP - 1] = reg.high;
	cpu->memory_bus[cpu->SP - 2] = reg.low;
	cpu->SP -= 2;
}
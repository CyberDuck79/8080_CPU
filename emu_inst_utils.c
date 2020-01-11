/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   emu_inst_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhenrion <fhenrion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/11 21:15:10 by fhenrion          #+#    #+#             */
/*   Updated: 2020/01/11 21:37:47 by fhenrion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "emu_inst_utils.h"

int	parity(int x, int size)
{
	int i;
	int p = 0;
	x = (x & ((1<<size)-1));
	for (i=0; i<size; i++)
	{
		if (x & 0x1) p++;
		x = x >> 1;
	}
	return (0 == (p & 0x1));
}

void LogicFlagsA(t_registers *reg)
{
	reg->CC.CY = reg->CC.AC = 0;
	reg->CC.Z = (reg->A == 0);
	reg->CC.S = (0x80 == (reg->A & 0x80));
	reg->CC.P = parity(reg->A, 8);
}
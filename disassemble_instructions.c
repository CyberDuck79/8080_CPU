/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   disassemble_instructions.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhenrion <fhenrion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/09 12:08:59 by fhenrion          #+#    #+#             */
/*   Updated: 2020/01/09 12:11:46 by fhenrion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "disassemble_instructions.h"

t_opsize		nop(t_registers *reg, t_memory *mem)
{
	printf("NOP\n");
	return (1);
}

t_opsize		rlc(t_registers *reg, t_memory *mem)
{
	printf("RLC\n");
	return (1);
}

t_opsize		lix_b(t_registers *reg, t_memory *mem)
{
	printf("LXI     B,#$%02x%02x\n", mem[2], mem[1]);
	return (3);
}

t_opsize		stax_b(t_registers *reg, t_memory *mem)
{
	printf("STAX    B\n");
	return (1);
}

t_opsize		inx_b(t_registers *reg, t_memory *mem)
{
	printf("INX     B\n");
	return (1);
}

t_opsize		inr_b(t_registers *reg, t_memory *mem)
{
	printf("INR     B\n");
	return (1);
}

t_opsize		dcr_b(t_registers *reg, t_memory *mem)
{
	printf("DCR     B\n");
	return (1);
}

t_opsize		mvi_b(t_registers *reg, t_memory *mem)
{
	printf("MVI     B,#$%02x\n", mem[1]);
	return (2);
}

t_opsize		mvi_a(t_registers *reg, t_memory *mem)
{
	printf("MVI     A,#$%02x\n", mem[1]);
	return (2);
}

t_opsize		jmp(t_registers *reg, t_memory *mem)
{
	printf("JMP     $%02x%02x\n", mem[2], mem[1]);
	return (3);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   disassemble_instructions.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhenrion <fhenrion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/09 12:08:59 by fhenrion          #+#    #+#             */
/*   Updated: 2020/01/09 16:36:08 by fhenrion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "disassemble_instructions.h"

t_opsize	NOP(t_memory *mem)
{
	printf("$%02x :NOP\n", *mem);
	return (1);
}

t_opsize	RLC(t_memory *mem)
{
	printf("$%02x :RLC\n", *mem);
	return (1);
}

t_opsize	LXI_B(t_memory *mem)
{
	printf("$%02x :LXI    B,#$%02x%02x\n", *mem, mem[2], mem[1]);
	return (3);
}

t_opsize	LXI_D(t_memory *mem)
{
	printf("$%02x :LXI    D,#$%02x%02x\n", *mem, mem[2], mem[1]);
	return (3);
}

t_opsize	LXI_H(t_memory *mem)
{
	printf("$%02x :LXI    H,#$%02x%02x\n", *mem, mem[2], mem[1]);
	return (3);
}

t_opsize	STAX_B(t_memory *mem)
{
	printf("$%02x :STAX   B\n", *mem);
	return (1);
}

t_opsize	STAX_D(t_memory *mem)
{
	printf("$%02x :STAX   D\n", *mem);
	return (1);
}

t_opsize	INX_B(t_memory *mem)
{
	printf("$%02x :INX    B\n", *mem);
	return (1);
}

t_opsize	INX_D(t_memory *mem)
{
	printf("$%02x :INX    D\n", *mem);
	return (1);
}

t_opsize	INX_H(t_memory *mem)
{
	printf("$%02x :INX    H\n", *mem);
	return (1);
}

t_opsize	INR_B(t_memory *mem)
{
	printf("$%02x :INR    B\n", *mem);
	return (1);
}

t_opsize	INR_C(t_memory *mem)
{
	printf("$%02x :INR    C\n", *mem);
	return (1);
}

t_opsize	INR_D(t_memory *mem)
{
	printf("$%02x :INR    D\n", *mem);
	return (1);
}

t_opsize	INR_E(t_memory *mem)
{
	printf("$%02x :INR    E\n", *mem);
	return (1);
}

t_opsize	INR_H(t_memory *mem)
{
	printf("$%02x :INR    H\n", *mem);
	return (1);
}

t_opsize	DCR_B(t_memory *mem)
{
	printf("$%02x :DCR    B\n", *mem);
	return (1);
}

t_opsize	DCR_C(t_memory *mem)
{
	printf("$%02x :DCR    C\n", *mem);
	return (1);
}

t_opsize	DCR_D(t_memory *mem)
{
	printf("$%02x :DCR    D\n", *mem);
	return (1);
}

t_opsize	DCR_E(t_memory *mem)
{
	printf("$%02x :DCR    E\n", *mem);
	return (1);
}

t_opsize	DCR_H(t_memory *mem)
{
	printf("$%02x :DCR    H\n", *mem);
	return (1);
}

t_opsize	MVI_A(t_memory *mem)
{
	printf("$%02x :MVI    A,#$%02x\n", *mem, mem[1]);
	return (2);
}

t_opsize	MVI_B(t_memory *mem)
{
	printf("$%02x :MVI    B,#$%02x\n", *mem, mem[1]);
	return (2);
}

t_opsize	MVI_C(t_memory *mem)
{
	printf("$%02x :MVI    C,#$%02x\n", *mem, mem[1]);
	return (2);
}

t_opsize	MVI_D(t_memory *mem)
{
	printf("$%02x :MVI    D,#$%02x\n", *mem, mem[1]);
	return (2);
}

t_opsize	MVI_E(t_memory *mem)
{
	printf("$%02x :MVI    E,#$%02x\n", *mem, mem[1]);
	return (2);
}

t_opsize	MVI_H(t_memory *mem)
{
	printf("$%02x :MVI    H,#$%02x\n", *mem, mem[1]);
	return (2);
}

t_opsize	DAD_B(t_memory *mem)
{
	printf("$%02x :DAD    B\n", *mem);
	return (1);
}

t_opsize	DAD_D(t_memory *mem)
{
	printf("$%02x :DAD    D\n", *mem);
	return (1);
}

t_opsize	LDAX_B(t_memory *mem)
{
	printf("$%02x :LDAX   B\n", *mem);
	return (1);
}

t_opsize	LDAX_D(t_memory *mem)
{
	printf("$%02x :LDAX   D\n", *mem);
	return (1);
}

t_opsize	DCX_B(t_memory *mem)
{
	printf("$%02x :DCX    B\n", *mem);
	return (1);
}

t_opsize	DCX_D(t_memory *mem)
{
	printf("$%02x :DCX    D\n", *mem);
	return (1);
}

t_opsize	RRC(t_memory *mem)
{
	printf("$%02x :RRC\n", *mem);
	return (1);
}

t_opsize	RAL(t_memory *mem)
{
	printf("$%02x :RAL\n", *mem);
	return (1);
}

t_opsize	RAR(t_memory *mem)
{
	printf("$%02x :RAR\n", *mem);
	return (1);
}

t_opsize	SHLD(t_memory *mem)
{
	printf("$%02x :SHLD    $%02x%02x\n", *mem, mem[2], mem[1]);
	return (3);
}

t_opsize	JMP(t_memory *mem)
{
	printf("$%02x :JMP     $%02x%02x\n", *mem, mem[2], mem[1]);
	return (3);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   disassemble_instructions.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhenrion <fhenrion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/09 12:08:59 by fhenrion          #+#    #+#             */
/*   Updated: 2020/01/09 14:14:55 by fhenrion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "disassemble_instructions.h"

t_opsize	NOP(t_memory *mem)
{
	(void*)mem;
	printf("NOP\n");
	return (1);
}

t_opsize	RLC(t_memory *mem)
{
	(void*)mem;
	printf("RLC\n");
	return (1);
}

t_opsize	LXI_B(t_memory *mem)
{
	printf("LXI    B,#$%02x%02x\n", mem[2], mem[1]);
	return (3);
}

t_opsize	LXI_D(t_memory *mem)
{
	printf("LXI    D,#$%02x%02x\n", mem[2], mem[1]);
	return (3);
}

t_opsize	LXI_H(t_memory *mem)
{
	printf("LXI    H,#$%02x%02x\n", mem[2], mem[1]);
	return (3);
}

t_opsize	STAX_B(t_memory *mem)
{
	(void*)mem;
	printf("STAX   B\n");
	return (1);
}

t_opsize	STAX_D(t_memory *mem)
{
	(void*)mem;
	printf("STAX   D\n");
	return (1);
}

t_opsize	INX_B(t_memory *mem)
{
	(void*)mem;
	printf("INX    B\n");
	return (1);
}

t_opsize	INX_D(t_memory *mem)
{
	(void*)mem;
	printf("INX    D\n");
	return (1);
}

t_opsize	INX_H(t_memory *mem)
{
	(void*)mem;
	printf("INX    H\n");
	return (1);
}

t_opsize	INR_B(t_memory *mem)
{
	(void*)mem;
	printf("INR    B\n");
	return (1);
}

t_opsize	INR_C(t_memory *mem)
{
	(void*)mem;
	printf("INR    C\n");
	return (1);
}

t_opsize	INR_D(t_memory *mem)
{
	(void*)mem;
	printf("INR    D\n");
	return (1);
}

t_opsize	INR_E(t_memory *mem)
{

	(void*)mem;
	printf("INR    E\n");
	return (1);
}

t_opsize	INR_H(t_memory *mem)
{

	(void*)mem;
	printf("INR    H\n");
	return (1);
}

t_opsize	DCR_B(t_memory *mem)
{
	(void*)mem;
	printf("DCR    B\n");
	return (1);
}

t_opsize	DCR_C(t_memory *mem)
{
	(void*)mem;
	printf("DCR    C\n");
	return (1);
}

t_opsize	DCR_D(t_memory *mem)
{
	(void*)mem;
	printf("DCR    D\n");
	return (1);
}

t_opsize	DCR_E(t_memory *mem)
{
	(void*)mem;
	printf("DCR    E\n");
	return (1);
}

t_opsize	DCR_H(t_memory *mem)
{
	(void*)mem;
	printf("DCR    H\n");
	return (1);
}

t_opsize	MVI_A(t_memory *mem)
{
	printf("MVI    A,#$%02x\n", mem[1]);
	return (2);
}

t_opsize	MVI_B(t_memory *mem)
{
	printf("MVI    B,#$%02x\n", mem[1]);
	return (2);
}

t_opsize	MVI_C(t_memory *mem)
{
	printf("MVI    C,#$%02x\n", mem[1]);
	return (2);
}

t_opsize	MVI_D(t_memory *mem)
{
	printf("MVI    D,#$%02x\n", mem[1]);
	return (2);
}

t_opsize	MVI_E(t_memory *mem)
{
	printf("MVI    E,#$%02x\n", mem[1]);
	return (2);
}

t_opsize	MVI_H(t_memory *mem)
{
	printf("MVI    H,#$%02x\n", mem[1]);
	return (2);
}

t_opsize	DAD_B(t_memory *mem)
{
	(void*)mem;
	printf("DAD    B\n");
	return (1);
}

t_opsize	DAD_D(t_memory *mem)
{
	(void*)mem;
	printf("DAD    D\n");
	return (1);
}

t_opsize	LDAX_B(t_memory *mem)
{
	(void*)mem;
	printf("LDAX   B\n");
	return (1);
}

t_opsize	LDAX_D(t_memory *mem)
{
	(void*)mem;
	printf("LDAX   D\n");
	return (1);
}

t_opsize	DCX_B(t_memory *mem)
{
	(void*)mem;
	printf("DCX    B\n");
	return (1);
}

t_opsize	DCX_D(t_memory *mem)
{
	(void*)mem;
	printf("DCX    D\n");
	return (1);
}

t_opsize	RRC(t_memory *mem)
{
	(void*)mem;
	printf("RRC\n");
	return (1);
}

t_opsize	RAL(t_memory *mem)
{
	(void*)mem;
	printf("RAL\n");
	return (1);
}

t_opsize	RAR(t_memory *mem)
{
	(void*)mem;
	printf("RAR\n");
	return (1);
}

t_opsize	SHLD(t_memory *mem)
{
	printf("SHLD    $%02x%02x\n", mem[2], mem[1]);
	return (3);
}

t_opsize	JMP(t_memory *mem)
{
	printf("JMP     $%02x%02x\n", mem[2], mem[1]);
	return (3);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   emulator.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhenrion <fhenrion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/01 17:39:10 by fhenrion          #+#    #+#             */
/*   Updated: 2020/01/11 22:22:32 by fhenrion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "emulator.h"
#include "disassembler_ini.h"

static void		print_registers(t_registers *reg)
{
	printf("\t");
	printf("%c", reg->CC.Z ? 'Z' : '.');
	printf("%c", reg->CC.S ? 'S' : '.');
	printf("%c", reg->CC.P ? 'P' : '.');
	printf("%c", reg->CC.CY ? 'C' : '.');
	printf("%c  ", reg->CC.AC ? 'A' : '.');
	printf("A $%02X ", reg->A);
	printf("B $%02X ", reg->B);
	printf("C $%02X ", reg->C);
	printf("D $%02X ", reg->D);
	printf("E $%02X ", reg->E);
	printf("H $%02X ", reg->H);
	printf("L $%02X ", reg->L);
	printf("SP $%04X \n", reg->SP);
}

static t_opsize	disassemble_8080(t_computer *computer)
{
	uint8_t	*addr = &computer->mem[computer->cpu.reg.PC];

	printf ("%04X ", computer->cpu.reg.PC);
	return (computer->asm_instructions_bus[*addr](addr));
}

// return error if trying to write on ROM addr space ?
static void		emulate_8080(t_computer *computer)
{
	uint8_t	addr;
	t_cpu	*cpu = &computer->cpu;

	while (1)
	{
		disassemble_8080(computer);
		addr = computer->mem[cpu->reg.PC];
		cpu->emu_instructions_bus[addr](&cpu->reg, computer->mem);
		cpu->reg.PC++;
		print_registers(&cpu->reg);
	}
}


static t_error	load_into_memory(t_memory mem[0x2000], char **ROM_files)
{
	uint8_t		index = 0;
	uint16_t	offset[5] = {0, 0x800, 0x1000, 0x1800, 0x2000};
	uint16_t	addr_space;
	int			fd;

	while (index < 4)
	{
		fd = open(ROM_files[index], O_RDONLY);
		if (fd == -1)
			return (ERROR);
		addr_space = offset[index + 1] - offset[index];
		read(fd, mem + offset[index], addr_space);
		close(fd);
		index++;
	}
	
	return (NO_ERROR);
}

int				main(int ac, char **av)
{
	t_computer	computer;

	bzero(&computer, sizeof(computer));
	computer.ROM_size = 0x2000;
	if (ac != 5)
	{
		write(1, "USAGE : ROM filenames .h .g .f .e\n", 34);
		return (0);
	}
	if (load_into_memory(computer.mem, av + 1))
	{
		write(1, "error at opening files.\n", 23);
		return (0);
	}
	disassembler_instructions_ini(computer.asm_instructions_bus);
	/*
	while (computer.cpu.reg.PC < computer.ROM_size)
		computer.cpu.reg.PC += disassemble_8080(&computer);
	computer.cpu.reg.PC = 0;
	*/
	emulation_instructions_ini(computer.cpu.emu_instructions_bus);
	emulate_8080(&computer);
	return (0);
}
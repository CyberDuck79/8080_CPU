/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   emulator.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhenrion <fhenrion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/01 17:39:10 by fhenrion          #+#    #+#             */
/*   Updated: 2020/01/11 12:52:30 by fhenrion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "emulator.h"
#include "disassembler_ini.h"

static t_opsize	disassemble_8080(t_computer *computer)
{
	uint8_t	*addr = &computer->mem[computer->cpu.reg.PC];

	printf ("%04X ", computer->cpu.reg.PC);
	return (computer->asm_instructions_bus[*addr](addr));
}

/*
static void		emulate_8080(t_cpu *cpu)
{
	
}
*/

static t_error	load_into_memory(t_computer *computer, char **ROM_files)
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
		read(fd, computer->mem + offset[index], addr_space);
		close(fd);
		index++;
	}
	computer->ROM_size = 0x2000;
	return (NO_ERROR);
}

int				main(int ac, char **av)
{
	t_computer	computer;

	bzero(&computer, sizeof(computer));
	if (ac != 5)
	{
		write(1, "USAGE : ROM filenames .h .g .f .e\n", 34);
		return (0);
	}
	if (load_into_memory(&computer, av + 1))
	{
		write(1, "error at opening files.\n", 23);
		return (0);
	}
	disassembler_instructions_ini(computer.asm_instructions_bus);
	while (computer.cpu.reg.PC < computer.ROM_size)
		computer.cpu.reg.PC += disassemble_8080(&computer);
	computer.cpu.reg.PC = 0;
	//emulation_instructions_ini(computer.cpu.emu_instructions_bus);
	//emulate_8080(&cpu);
	return (0);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   emulator.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhenrion <fhenrion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/01 17:39:10 by fhenrion          #+#    #+#             */
/*   Updated: 2020/01/09 12:31:27 by fhenrion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "emulator.h"
#include "disassemble_initialization.h"

static t_opsize	disassemble_8080(t_cpu	*cpu)
{
	uint8_t	*addr = &cpu->mem[cpu->reg->PC];

	printf ("%04x ", cpu->reg->PC);
	return (cpu->exec[*addr](cpu->reg, addr));
}

/*
static void		emulate_8080(t_cpu *cpu)
{
	
}
*/

static t_error	load_into_memory(t_cpu *cpu, char *filename)
{
	int		fd;

	if ((fd = open(filename, O_RDONLY)) == -1)
		return (ERROR);
	cpu->ROM_size = read(fd, cpu->mem, 0x10000);
	close(fd);
	return (NO_ERROR);
}

int				main(int ac, char **av)
{
	t_cpu		cpu;
	t_registers	reg;

	if (ac != 2)
	{
		write(1, "USAGE : ROM filename as only argument.\n", 39);
		return (0);
	}
	reg.PC = 0;
	cpu.reg = &reg;
	if (load_into_memory(&cpu, av[1]))
	{
		write(1, "error at opening file.\n", 23);
		return (0);
	}
	// Disassembly
	disassemble_instructions_ini(cpu.exec);
	while (reg.PC < cpu.ROM_size)
		reg.PC += disassemble_8080(&cpu);
	reg.PC = 0;
	// emulation
	//emulation_instructions_ini(cpu.exec);
	//emulate_8080(&cpu);
	return (0);
}
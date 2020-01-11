/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   emulator.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhenrion <fhenrion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/01 17:39:10 by fhenrion          #+#    #+#             */
/*   Updated: 2020/01/11 10:36:04 by fhenrion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "emulator.h"
#include "disassembler_ini.h"

static t_opsize	disassemble_8080(t_cpu	*cpu)
{
	uint8_t	*addr = &cpu->mem[cpu->reg.PC];

	printf ("%04x ", cpu->reg.PC);
	return (cpu->debug[*addr](addr));
}

/*
static void		emulate_8080(t_cpu *cpu)
{
	
}
*/

static t_error	load_into_memory(t_cpu *cpu, char *filename)
{
	int		fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (ERROR);
	cpu->ROM_size = read(fd, cpu->mem, 0x10000);
	close(fd);
	return (NO_ERROR);
}

int				main(int ac, char **av)
{
	t_cpu		cpu;

	bzero(&cpu, sizeof(cpu));
	if (ac != 2)
	{
		write(1, "USAGE : ROM filename as only argument.\n", 39);
		return (0);
	}
	if (load_into_memory(&cpu, av[1]))
	{
		write(1, "error at opening file.\n", 23);
		return (0);
	}
	disassemble_instructions_ini(cpu.debug);
	while (cpu.reg.PC < cpu.ROM_size)
		cpu.reg.PC += disassemble_8080(&cpu);
	cpu.reg.PC = 0;
	//emulation_instructions_ini(cpu.exec);
	//emulate_8080(&cpu);
	return (0);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   emulator.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhenrion <fhenrion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/10 16:35:55 by flavienhenr       #+#    #+#             */
/*   Updated: 2020/10/23 11:12:45 by fhenrion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "emulator.h"
#include <stdio.h>

#define RUNNING 1

/* for debugging
static void		print_state(t_cpu *cpu)
{
	printf("%c", cpu->CC.Z ? 'Z' : '.');
	printf("%c", cpu->CC.S ? 'S' : '.');
	printf("%c", cpu->CC.P ? 'P' : '.');
	printf("%c", cpu->CC.CY ? 'C' : '.');
	printf("%c  ", cpu->CC.AC ? 'A' : '.');
	printf("A $%02X ", cpu->A);
	printf("BC $%04X ", cpu->BC.pair);
	printf("DE $%04X ", cpu->DE.pair);
	printf("HL $%04X ", cpu->HL.pair);
	printf("SP $%04X ", cpu->SP);
	printf ("PC $%04X ->", cpu->PC);
}

static void		disassemble_8080(t_computer *computer, t_cpu *cpu)
{
	uint8_t	*opcode;

	while (cpu->PC < computer->program_size) // -> is diag stop at ROM ?? there no ROM here
	{
		printf ("PC $%04X ->", cpu->PC);
		opcode = &computer->memory_bus[cpu->PC];
		cpu->PC += computer->assembly_bus[*opcode](opcode);
	}
}
*/

static void		cpu_init(t_computer *computer, t_cpu *cpu)
{
	cpu->CC.Z = 1;
	cpu->CC.S = 1;
	cpu->CC.P = 1;
	cpu->CC.CY = 0;
	cpu->CC.AC = 1;
	cpu->CC.INT = 0;
	cpu->memory_bus = computer->memory_bus;
}

static void		emulate_8080(t_computer *computer, t_cpu *cpu)
{
	cpu_init(computer, &computer->cpu);
	while (cpu->PC < ROM_SIZE)
	{
		//print_state(cpu);
		cpu->addr_buff = &computer->memory_bus[cpu->PC];
		computer->assembly_bus[*cpu->addr_buff](cpu->addr_buff);
		cpu->PC++;
		computer->instruction_bus[*cpu->addr_buff](cpu);
	}
}

static ssize_t	load_into_memory(uint8_t *memory, char *filename)
{
	int		fd;
	ssize_t	read_size = 0;
	ssize_t	program_size = 0;

	if ((fd = open(filename, O_RDONLY)) == ERROR)
		return (ERROR);
	while ((read_size = read(fd, &memory[program_size], 0x100)) > 0)
		program_size += read_size;
	if (read_size == ERROR)
		return (ERROR);
	return (program_size);
}

int			main(void)
{
	t_computer	computer;

	bzero(&computer, sizeof(computer));
	computer.program_size = load_into_memory(&computer.memory_bus[0x100], "cpudiag.bin");
	if (computer.program_size == ERROR)
	{
		write(1, "error at loading diag program file.\n", 36);
		return (0);
	}
	computer.memory_bus[0] = 0xC3;
	computer.memory_bus[1] = 0x00;
	computer.memory_bus[2] = 0x01;
	computer.memory_bus[368] = 0x7;
	instructions_ini(computer.instruction_bus);
	disassembler_ini(computer.assembly_bus);
	//disassemble_8080(&computer, &computer.cpu);
	emulate_8080(&computer, &computer.cpu);
}

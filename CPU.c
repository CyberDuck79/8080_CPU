/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CPU.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhenrion <fhenrion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/01 17:39:10 by fhenrion          #+#    #+#             */
/*   Updated: 2020/01/03 17:29:20 by fhenrion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "CPU.h"

// essayer plusieurs méthodes d'écriture
static int		disassemble_8080(uint8_t *memory, uint16_t pc)
{
	uint8_t	*code = &memory[pc];
	int		opbytes = 1;

	printf ("%04x ", pc);
	switch (*code)
	{
		case 0x00: printf("NOP"); break;
		case 0x01: printf("LXI	B,#$%02x%02x", code[2], code[1]);
		opbytes=3; break;
		case 0x02: printf("STAX	B"); break;
		case 0x03: printf("INX	B"); break;
		case 0x04: printf("INR	B"); break;
		case 0x05: printf("DCR	B"); break;
		case 0x06: printf("MVI	B,#$%02x", code[1]);
		opbytes=2; break;
		case 0x07: printf("RLC"); break;
		case 0x08: printf("NOP"); break;
		/* ........ */
		case 0x3e: printf("MVI	A,#0x%02x", code[1]);
		opbytes = 2; break;
		/* ........ */
		case 0xc3: printf("JMP	$%02x%02x",code[2],code[1]);
		opbytes = 3;break;
		/* ........ */
	}

	printf("\n");
	return (opbytes); // add to pc ??
}

static void		emulate_8080(t_state *state)
{
	//
}

static t_error	load_into_memory(t_state *state, char *filename)
{
	int		fd;
	int		ROM_size;
	int		pc;

	if ((fd = open(filename, O_RDONLY)) == -1)
		return (ERROR);
	ROM_size = read(fd, state->memory, 0x10000);
	close(fd);
	while (pc < ROM_size)
		pc += disassemble_8080(state->memory, state->pc);
	return (NO_ERROR);
}

int				main(int ac, char **av)
{
	t_state	state;

	if (ac != 2)
	{
		write(1, "USAGE : ROM filename as only argument.\n", 39);
		return (0);
	}
	if (load_into_memory(&state, av[1]))
	{
		write(1, "error at opening file.\n", 23);
		return (0);
	}
	// initialiser les flags ?
	state.pc = 0; // dans quels cas pas 0 ?
	emulate_8080(&state);
	return (0);
}
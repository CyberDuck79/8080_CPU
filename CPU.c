/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CPU.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhenrion <fhenrion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/01 17:39:10 by fhenrion          #+#    #+#             */
/*   Updated: 2020/01/01 18:24:43 by fhenrion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "CPU.h"

void	emulate_8080(t_state *state)
{
	int		cycles = 4; // pourquoi ?
	uint8_t	*opcode = state->memory;

	// state->pc++; ? while quoi ? trouver comment s'arrêter
	// TODO : encore tout^^
	// deux méthodes :
	// un énorme switch
	// OU
	// avoir un tableau de pointeurs sur fonction
	// parcour d'un tableau des codes renvoyant un index
	// execution de la fonction a cette index dans le tableau de pointeur
}

t_error	load_into_memory(t_state *state, char *filename)
{
	int		fd;

	if ((fd = open(filename, O_RDONLY)) == -1)
		return (ERROR);
	read(fd, state->memory, 0x10000);
	close(fd);
	return (NO_ERROR);
}

int		main(int ac, char **av)
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
	state.pc = 0;
	emulate_8080(&state);
	return (0);
}
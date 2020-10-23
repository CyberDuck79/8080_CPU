/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   emulator.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flavienhenrion <flavienhenrion@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/10 16:19:30 by flavienhenr       #+#    #+#             */
/*   Updated: 2020/06/01 10:18:06 by flavienhenr      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EMULATOR_H
# define EMULATOR_H

# include <stdint.h>
# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include <fcntl.h>
# include <strings.h>

#define ERROR		-1
#define FILE_LOADED	0
#define ROM_SIZE	0x2000

typedef uint16_t	t_opsize;

typedef enum		e_error
{
	ROM_WRITE,
	INPUT_PORT,
	OUPUT_PORT
}					t_error;

typedef union		s_u8pair
{
	struct
	{
		uint8_t		low;
		uint8_t		high;
	};
	uint16_t		pair;
}					t_u8pair;

/* 
** INT is an hardware pin and not a CC flag in the original architecture
** but is implemented as a flag for practical reason.
*/
typedef struct		s_flags
{
	uint8_t			Z:1;
	uint8_t			S:1;
	uint8_t			P:1;
	uint8_t			CY:1;
	uint8_t			AC:1;
	uint8_t			INT:1;
	uint8_t			PAD:2;
}					t_flags;

/*
** WZ temporary registers are not used in the same way as in the original
** architecture but still in a temporary memory way.
*/
typedef struct		s_cpu
{
	uint8_t			A;
	t_u8pair		WZ;
	t_u8pair		BC;
	t_u8pair		DE;
	t_u8pair		HL;
	uint16_t		SP;
	uint16_t		PC;
	t_flags			CC;
	uint8_t			*addr_buff;
	uint8_t			*memory_bus;
}					t_cpu;

typedef				t_opsize (*t_assembly)(uint8_t*);
typedef				void (*t_instruction)(t_cpu*);
typedef				uint8_t *(*t_input)(t_cpu*);
typedef				void (*t_output)(t_cpu*);

typedef struct		s_computer
{
	t_cpu			cpu;
	t_instruction	instruction_bus[0x100];
	uint8_t			memory_bus[0x10000];
	t_input			input_bus[8];
	t_output		output_bus[8];
	t_assembly		assembly_bus[0x100];
	ssize_t			program_size;
}					t_computer;

void	disassembler_ini(t_assembly intruction_bus[0x100]);
void	instructions_ini(t_instruction intructions_bus[0x100]);
void	emulation_error(t_error error);

#endif
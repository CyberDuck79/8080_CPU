/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   emulator.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhenrion <fhenrion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/01 17:23:15 by fhenrion          #+#    #+#             */
/*   Updated: 2020/01/11 21:56:53 by fhenrion         ###   ########.fr       */
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

typedef uint8_t		t_memory;
typedef uint16_t	t_opsize;

typedef enum		e_error
{
	NO_ERROR,
	ERROR
}					t_error;

typedef struct		s_flags
{
	uint8_t			Z:1;
	uint8_t			S:1;
	uint8_t			P:1;
	uint8_t			CY:1;
	uint8_t			AC:1;
	uint8_t			PAD:3;
}					t_flags;

typedef struct		s_registers
{
	uint8_t			A;
	uint8_t			B;
	uint8_t			C;
	uint8_t			D;
	uint8_t			E;
	uint8_t			H;
	uint8_t			L;
	uint16_t		SP;
	uint16_t		PC;
	t_flags			CC;
	int				int_enable;
}					t_registers;

typedef				t_opsize (*t_asm_inst)(t_memory*);
typedef				void (*t_emu_inst)(t_registers*,t_memory*);

typedef struct		s_cpu
{
	t_registers		reg;
	t_emu_inst		emu_instructions_bus[0x100];
}					t_cpu;

typedef struct		s_computer
{
	t_cpu			cpu;
	t_memory		mem[0x10000]; // 16k
	uint16_t		ROM_size;
	t_asm_inst		asm_instructions_bus[0x100];
}					t_computer;

#endif

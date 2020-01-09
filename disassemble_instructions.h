/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   disassemble_instructions.h                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhenrion <fhenrion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/09 12:08:04 by fhenrion          #+#    #+#             */
/*   Updated: 2020/01/09 12:22:53 by fhenrion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DISASSEMBLE_INSTRUCTIONS_H
# define DISASSEMBLE_INSTRUCTIONS_H

# include "emulator.h"

t_opsize		nop(t_registers *reg, t_memory *mem);
t_opsize		rlc(t_registers *reg, t_memory *mem);
t_opsize		lix_b(t_registers *reg, t_memory *mem);
t_opsize		stax_b(t_registers *reg, t_memory *mem);
t_opsize		inx_b(t_registers *reg, t_memory *mem);
t_opsize		inr_b(t_registers *reg, t_memory *mem);
t_opsize		dcr_b(t_registers *reg, t_memory *mem);
t_opsize		mvi_b(t_registers *reg, t_memory *mem);
t_opsize		mvi_a(t_registers *reg, t_memory *mem);
t_opsize		jmp(t_registers *reg, t_memory *mem);

#endif

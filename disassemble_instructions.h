/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   disassemble_instructions.h                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhenrion <fhenrion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/09 12:08:04 by fhenrion          #+#    #+#             */
/*   Updated: 2020/01/09 14:15:06 by fhenrion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DISASSEMBLE_INSTRUCTIONS_H
# define DISASSEMBLE_INSTRUCTIONS_H

# include "emulator.h"

t_opsize	NOP(t_memory *mem);
t_opsize	RLC(t_memory *mem);
t_opsize	LXI_B(t_memory *mem);
t_opsize	LXI_D(t_memory *mem);
t_opsize	LXI_H(t_memory *mem);
t_opsize	STAX_B(t_memory *mem);
t_opsize	STAX_D(t_memory *mem);
t_opsize	INX_B(t_memory *mem);
t_opsize	INX_D(t_memory *mem);
t_opsize	INX_H(t_memory *mem);
t_opsize	INR_B(t_memory *mem);
t_opsize	INR_C(t_memory *mem);
t_opsize	INR_D(t_memory *mem);
t_opsize	INR_E(t_memory *mem);
t_opsize	INR_H(t_memory *mem);
t_opsize	DCR_B(t_memory *mem);
t_opsize	DCR_C(t_memory *mem);
t_opsize	DCR_D(t_memory *mem);
t_opsize	DCR_E(t_memory *mem);
t_opsize	DCR_H(t_memory *mem);
t_opsize	MVI_A(t_memory *mem);
t_opsize	MVI_B(t_memory *mem);
t_opsize	MVI_C(t_memory *mem);
t_opsize	MVI_D(t_memory *mem);
t_opsize	MVI_E(t_memory *mem);
t_opsize	MVI_H(t_memory *mem);
t_opsize	DAD_B(t_memory *mem);
t_opsize	DAD_D(t_memory *mem);
t_opsize	LDAX_B(t_memory *mem);
t_opsize	LDAX_D(t_memory *mem);
t_opsize	DCX_B(t_memory *mem);
t_opsize	DCX_D(t_memory *mem);
t_opsize	RRC(t_memory *mem);
t_opsize	RAL(t_memory *mem);
t_opsize	RAR(t_memory *mem);
t_opsize	SHLD(t_memory *mem);
t_opsize	JMP(t_memory *mem);

#endif

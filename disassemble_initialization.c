/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   disassemble_initialization.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhenrion <fhenrion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/09 12:14:50 by fhenrion          #+#    #+#             */
/*   Updated: 2020/01/09 14:47:31 by fhenrion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "disassemble_initialization.h"
#include "disassemble_instructions.h"

void	disassemble_instructions_ini(t_asm_inst intruction_set[0xFF])
{
	intruction_set[0x00] = NOP;
	intruction_set[0x01] = LXI_B;
	intruction_set[0x02] = STAX_B;
	intruction_set[0x03] = INX_B;
	intruction_set[0x04] = INR_B;
	intruction_set[0x05] = DCR_B;
	intruction_set[0x06] = MVI_B;
	intruction_set[0x07] = RLC;
	intruction_set[0x08] = NOP;
	intruction_set[0x09] = DAD_B;
	intruction_set[0x0A] = LDAX_B;
	intruction_set[0x0B] = DCX_B;
	intruction_set[0x0C] = INR_C;
	intruction_set[0x0D] = DCR_C;
	intruction_set[0x0E] = MVI_C;
	intruction_set[0x0F] = RRC;
	intruction_set[0x10] = NOP;
	intruction_set[0x11] = LXI_D;
	intruction_set[0x12] = STAX_D;
	intruction_set[0x13] = INX_D;
	intruction_set[0x14] = INR_D;
	intruction_set[0x15] = DCR_D;
	intruction_set[0x16] = MVI_D;
	intruction_set[0x17] = RAL;
	intruction_set[0x18] = NOP;
	intruction_set[0x19] = DAD_D;
	intruction_set[0x1A] = LDAX_D;
	intruction_set[0x1B] = DCX_D;
	intruction_set[0x1C] = INR_E;
	intruction_set[0x1D] = DCR_E;
	intruction_set[0x1E] = MVI_E;
	intruction_set[0x1F] = RAR;
	intruction_set[0x20] = NOP;
	intruction_set[0x21] = NOP;
	intruction_set[0x22] = LXI_H;
	intruction_set[0x23] = SHLD;
	intruction_set[0x24] = INX_H;
	intruction_set[0x25] = INR_H;
	intruction_set[0x26] = DCR_H;
	intruction_set[0x27] = MVI_H;
	intruction_set[0x28] = NOP;
	/*
	0x29: printf("DAD    H");
	0x2a: printf("LHLD   $%02x%02x", mem[2], mem[1]); opbytes=3;
	0x2b: printf("DCX    H");
	0x2c: printf("INR    L");
	0x2d: printf("DCR    L");
	0x2e: printf("MVI    L,#$%02x", mem[1]); opbytes = 2;
	0x2f: printf("CMA");
	*/
	// to continue
	intruction_set[0x3E] = MVI_A;
	intruction_set[0xC3] = JMP;
}

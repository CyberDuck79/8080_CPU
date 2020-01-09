/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   disassemble_initialization.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhenrion <fhenrion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/09 12:14:50 by fhenrion          #+#    #+#             */
/*   Updated: 2020/01/09 12:19:38 by fhenrion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "disassemble_initialization.h"
#include "disassemble_instructions.h"

void	disassemble_instructions_ini(t_instructions intruction_set[0xFF])
{
	intruction_set[0x00] = nop;
	intruction_set[0x01] = lix_b;
	intruction_set[0x02] = stax_b;
	intruction_set[0x03] = inx_b;
	intruction_set[0x04] = inr_b;
	intruction_set[0x05] = dcr_b;
	intruction_set[0x06] = mvi_b;
	intruction_set[0x07] = rlc;
	intruction_set[0x08] = nop;
	/*
	case 0x09: printf("DAD    B"); break;
	case 0x0a: printf("LDAX   B"); break;
	case 0x0b: printf("DCX    B"); break;
	case 0x0c: printf("INR    C"); break;
	case 0x0d: printf("DCR    C"); break;
	case 0x0e: printf("MVI    C,#$%02x", code[1]); opbytes = 2;	break;
	case 0x0f: printf("RRC"); break;
	case 0x10: printf("NOP"); break;
	*/
	// to continue
	intruction_set[0x3E] = mvi_a;
	intruction_set[0xC3] = jmp;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   control_unit.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flavienhenrion <flavienhenrion@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/12 11:11:59 by flavienhenr       #+#    #+#             */
/*   Updated: 2020/05/12 11:23:01 by flavienhenr      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTROL_UNIT_H
# define CONTROL_UNIT_H

# include "emulator.h"

void	POP(t_cpu *cpu, t_u8pair *reg);
void	PUSH(t_cpu *cpu, t_u8pair reg);

#endif

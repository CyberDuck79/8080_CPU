/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   emu_inst_utils.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhenrion <fhenrion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/11 21:16:09 by fhenrion          #+#    #+#             */
/*   Updated: 2020/01/11 21:36:52 by fhenrion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EMU_INST_UTILS_H
# define EMU_INST_UTILS_H

#include "emulator.h"

int		parity(int x, int size);
void	LogicFlagsA(t_registers *reg);

#endif

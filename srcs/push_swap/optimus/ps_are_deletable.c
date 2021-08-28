/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_are_deletable.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 14:34:06 by jodufour          #+#    #+#             */
/*   Updated: 2021/08/18 02:27:06 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "type/t_step.h"
#include "enum/e_op.h"

bool	ps_are_deletable(t_step *action, t_step *cancel)
{
	return ((action->op == PA && cancel->op == PB)
		|| (action->op == PB && cancel->op == PA)
		|| (action->op == RA && cancel->op == RRA)
		|| (action->op == RB && cancel->op == RRB)
		|| (action->op == RR && cancel->op == RRR)
		|| (action->op == RRA && cancel->op == RA)
		|| (action->op == RRB && cancel->op == RB)
		|| (action->op == RRR && cancel->op == RR)
		|| (action->op == SA && cancel->op == SA)
		|| (action->op == SB && cancel->op == SB)
		|| (action->op == SS && cancel->op == SS));
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_are_mergeable.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 14:27:37 by jodufour          #+#    #+#             */
/*   Updated: 2022/04/27 10:08:43 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "t_step.h"
#include "e_op.h"

bool	ps_are_mergeable(t_step *action, t_step *cancel)
{
	return ((action->op == RA && cancel->op == RB)
		|| (action->op == RB && cancel->op == RA)
		|| (action->op == RRA && cancel->op == RRB)
		|| (action->op == RRB && cancel->op == RRA)
		|| (action->op == SA && cancel->op == SB)
		|| (action->op == SB && cancel->op == SA));
}

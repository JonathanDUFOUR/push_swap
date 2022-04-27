/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_cancel_ra.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 01:36:58 by jodufour          #+#    #+#             */
/*   Updated: 2022/04/27 10:06:56 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "t_step.h"
#include "e_op.h"

static bool	disturb_del(int op)
{
	return (op == PA
		|| op == PB
		|| op == RA
		|| op == RR
		|| op == RRA
		|| op == RRR
		|| op == SA
		|| op == SS);
}

static bool	disturb_merge(int op)
{
	return (op == PA
		|| op == PB
		|| op == RA
		|| op == RB
		|| op == RR
		|| op == RRA
		|| op == RRB
		|| op == RRR
		|| op == SA
		|| op == SB
		|| op == SS);
}

t_step	*find_cancel_ra(t_step *action)
{
	t_step	*cancel;

	cancel = action->next;
	while (cancel && cancel->op != RRA && !disturb_del(cancel->op))
		cancel = cancel->next;
	if (cancel && cancel->op == RRA)
		return (cancel);
	cancel = action->next;
	while (cancel && cancel->op != RB && !disturb_merge(cancel->op))
		cancel = cancel->next;
	if (cancel && cancel->op == RB)
		return (cancel);
	return (NULL);
}

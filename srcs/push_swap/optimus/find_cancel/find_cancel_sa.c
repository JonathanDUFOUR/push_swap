/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_cancel_sa.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 01:39:04 by jodufour          #+#    #+#             */
/*   Updated: 2022/04/27 10:07:13 by jodufour         ###   ########.fr       */
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

t_step	*find_cancel_sa(t_step *action)
{
	t_step	*cancel;

	cancel = action->next;
	while (cancel && cancel->op != SA && !disturb_del(cancel->op))
		cancel = cancel->next;
	if (cancel && cancel->op == SA)
		return (cancel);
	cancel = action->next;
	while (cancel && cancel->op != SB && !disturb_merge(cancel->op))
		cancel = cancel->next;
	if (cancel && cancel->op == SB)
		return (cancel);
	return (NULL);
}

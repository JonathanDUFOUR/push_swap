/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_cancel_rrb.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 01:38:31 by jodufour          #+#    #+#             */
/*   Updated: 2021/08/19 11:54:45 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "type/t_step.h"
#include "enum/e_op.h"

static bool	disturb_del(int op)
{
	return (op == PA
		|| op == PB
		|| op == RB
		|| op == RR
		|| op == RRB
		|| op == RRR
		|| op == SB
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

t_step	*find_cancel_rrb(t_step *action)
{
	t_step	*cancel;

	cancel = action->next;
	while (cancel && cancel->op != RB && !disturb_del(cancel->op))
		cancel = cancel->next;
	if (cancel && cancel->op == RB)
		return (cancel);
	cancel = action->next;
	while (cancel && cancel->op != RRA && !disturb_merge(cancel->op))
		cancel = cancel->next;
	if (cancel && cancel->op == RRA)
		return (cancel);
	return (NULL);
}

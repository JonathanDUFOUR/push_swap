/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_cancel_sb.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 01:39:32 by jodufour          #+#    #+#             */
/*   Updated: 2021/08/19 11:56:02 by jodufour         ###   ########.fr       */
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

t_step	*find_cancel_sb(t_step *action)
{
	t_step	*cancel;

	cancel = action->next;
	while (cancel && cancel->op != SB && !disturb_del(cancel->op))
		cancel = cancel->next;
	if (cancel && cancel->op == SB)
		return (cancel);
	cancel = action->next;
	while (cancel && cancel->op != SA && !disturb_merge(cancel->op))
		cancel = cancel->next;
	if (cancel && cancel->op == SA)
		return (cancel);
	return (NULL);
}

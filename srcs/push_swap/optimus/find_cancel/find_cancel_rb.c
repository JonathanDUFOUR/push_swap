/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_cancel_rb.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 01:37:25 by jodufour          #+#    #+#             */
/*   Updated: 2022/04/27 10:06:59 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "t_step.h"
#include "e_op.h"

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

t_step	*find_cancel_rb(t_step *action)
{
	t_step	*cancel;

	cancel = action->next;
	while (cancel && cancel->op != RRB && !disturb_del(cancel->op))
		cancel = cancel->next;
	if (cancel && cancel->op == RRB)
		return (cancel);
	cancel = action->next;
	while (cancel && cancel->op != RA && !disturb_merge(cancel->op))
		cancel = cancel->next;
	if (cancel && cancel->op == RA)
		return (cancel);
	return (NULL);
}

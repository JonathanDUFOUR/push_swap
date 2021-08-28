/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_cancel_rrr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 01:38:45 by jodufour          #+#    #+#             */
/*   Updated: 2021/08/19 10:17:36 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "type/t_step.h"
#include "enum/e_op.h"

static bool	disturb_del(int op)
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

t_step	*find_cancel_rrr(t_step *action)
{
	t_step	*cancel;

	cancel = action->next;
	while (cancel && cancel->op != RR && !disturb_del(cancel->op))
		cancel = cancel->next;
	if (cancel && cancel->op == RR)
		return (cancel);
	return (NULL);
}

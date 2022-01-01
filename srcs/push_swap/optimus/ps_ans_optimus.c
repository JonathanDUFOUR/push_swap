/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_ans_optimus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 03:54:58 by jodufour          #+#    #+#             */
/*   Updated: 2022/01/01 21:12:02 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lookup_find_cancel.h"
#include "type/t_ans.h"
#include "enum/e_op.h"

static t_step	*find_cancel(t_step *action)
{
	int	i;

	i = 0;
	while (g_find_cancel[i].fct)
	{
		if (g_find_cancel[i].op == action->op)
			return (g_find_cancel[i].fct(action));
		++i;
	}
	return (NULL);
}

bool	ps_ans_optimus(t_ans *ans)
{
	bool	optimized;
	t_step	*action;
	t_step	*cancel;
	t_step	*prev;

	optimized = false;
	action = ans->head;
	while (action)
	{
		cancel = find_cancel(action);
		if (cancel)
		{
			prev = action->prev;
			if (ps_are_mergeable(action, cancel))
				ps_ans_merge_two(ans, action, cancel);
			else if (ps_are_deletable(action, cancel))
				ps_ans_del_two(ans, action, cancel);
			optimized = true;
			action = prev;
		}
		else
			action = action->next;
	}
	return (optimized);
}

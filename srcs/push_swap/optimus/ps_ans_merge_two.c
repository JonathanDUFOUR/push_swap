/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_ans_merge_two.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 14:43:29 by jodufour          #+#    #+#             */
/*   Updated: 2021/08/18 02:27:06 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "type/t_ans.h"
#include "enum/e_op.h"

void	ps_ans_merge_two(t_ans *ans, t_step *action, t_step *cancel)
{
	if (action->op == RA || action->op == RB)
		action->op = RR;
	else if (action->op == RRA || action->op == RRB)
		action->op = RRR;
	else if (action->op == SA || action->op == SB)
		action->op = SS;
	ps_ans_del_one(ans, cancel);
}

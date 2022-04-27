/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_ans_del_one.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 04:10:09 by jodufour          #+#    #+#             */
/*   Updated: 2022/04/27 10:04:39 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "t_ans.h"

static void	ps_preliminaries(t_ans *ans, t_step *step)
{
	if (step == ans->head && step == ans->tail)
	{
		ans->head = NULL;
		ans->tail = NULL;
	}
	else if (step == ans->head)
	{
		step->next->prev = NULL;
		ans->head = step->next;
	}
	else if (step == ans->tail)
	{
		step->prev->next = NULL;
		ans->tail = step->prev;
	}
	else
	{
		step->prev->next = step->next;
		step->next->prev = step->prev;
	}
}

void	ps_ans_del_one(t_ans *ans, t_step *step)
{
	ps_preliminaries(ans, step);
	step->op = 0;
	step->next = NULL;
	step->prev = NULL;
	--ans->size;
	free(step);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_ans_add_back.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 14:16:53 by jodufour          #+#    #+#             */
/*   Updated: 2022/04/27 10:10:34 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "t_ans.h"
#include "e_ret.h"

int	ps_ans_add_back(t_ans *ans, int op)
{
	t_step	*new;

	if (!ans->head && !ans->tail && !ans->size)
		return (ps_ans_init(ans, op));
	else if (ans->head && ans->tail && ans->size)
	{
		new = malloc(sizeof(t_step));
		if (!new)
			return (MALLOC_ERRNO);
		new->op = op;
		new->next = NULL;
		new->prev = ans->tail;
		new->prev->next = new;
		ans->tail = new;
		++ans->size;
		return (SUCCESS);
	}
	else
		return (DATA_ERRNO);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_ans_init.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 14:21:33 by jodufour          #+#    #+#             */
/*   Updated: 2021/08/18 02:27:06 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "enum/e_ret.h"
#include "type/t_ans.h"

int	ps_ans_init(t_ans *ans, int op)
{
	t_step	*new;

	new = malloc(sizeof(t_step));
	if (!new)
		return (MALLOC_ERRNO);
	new->op = op;
	new->next = NULL;
	new->prev = NULL;
	ans->head = new;
	ans->tail = new;
	ans->size = 1;
	return (SUCCESS);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_ans_free.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 14:42:31 by jodufour          #+#    #+#             */
/*   Updated: 2022/04/27 10:04:39 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "t_ans.h"

int	ps_ans_free(t_ans *ans, int ret)
{
	t_step	*next;

	while (ans->head)
	{
		next = ((t_step *)ans->head)->next;
		((t_step *)ans->head)->op = 0;
		((t_step *)ans->head)->next = NULL;
		free(ans->head);
		ans->head = next;
	}
	ans->tail = NULL;
	ans->size = 0;
	return (ret);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_pa.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 21:49:44 by jodufour          #+#    #+#             */
/*   Updated: 2022/04/27 10:11:10 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "t_lst.h"
#include "e_op.h"

int	do_pa(void)
{
	t_lst *const	a = a_lst();
	t_lst *const	b = b_lst();
	t_elem			*elem;

	if (b->size)
	{
		elem = b->head;
		if (b->size == 1)
			ps_lst_set_all(b, NULL, 0);
		else
		{
			elem->next->prev = elem->prev;
			elem->prev->next = elem->next;
			ps_lst_set_all(b, elem->next, b->size - 1);
		}
		elem->next = elem;
		elem->prev = elem;
		if (a->size)
			ps_lst_push_front(a, elem);
		else
			ps_lst_set_all(a, elem, 1);
	}
	return (PA);
}

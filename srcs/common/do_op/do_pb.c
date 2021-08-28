/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_pb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 23:01:08 by jodufour          #+#    #+#             */
/*   Updated: 2021/08/18 02:27:06 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "type/t_lst.h"
#include "enum/e_op.h"

int	do_pb(void)
{
	t_lst *const	a = a_lst();
	t_lst *const	b = b_lst();
	t_elem			*elem;

	if (a->size)
	{
		elem = a->head;
		if (a->size == 1)
			ps_lst_set_all(a, NULL, 0);
		else
		{
			elem->next->prev = elem->prev;
			elem->prev->next = elem->next;
			ps_lst_set_all(a, elem->next, a->size - 1);
		}
		elem->next = elem;
		elem->prev = elem;
		if (b->size)
			ps_lst_push_front(b, elem);
		else
			ps_lst_set_all(b, elem, 1);
	}
	return (PB);
}

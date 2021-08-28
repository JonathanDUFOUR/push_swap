/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_sb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 21:41:30 by jodufour          #+#    #+#             */
/*   Updated: 2021/08/18 02:27:06 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "type/t_lst.h"
#include "enum/e_op.h"

int	do_sb(void)
{
	t_lst *const	b = b_lst();
	t_elem			*elem0;
	t_elem			*elem1;

	if (b->size > 1)
	{
		elem0 = b->head;
		elem1 = elem0->next;
		elem0->next = elem1->next;
		elem0->next->prev = elem0;
		elem1->prev = elem0->prev;
		elem1->prev->next = elem1;
		elem0->prev = elem1;
		elem1->next = elem0;
		b->head = elem1;
	}
	return (SB);
}

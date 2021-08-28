/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_lst_push_front.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 03:14:19 by jodufour          #+#    #+#             */
/*   Updated: 2021/08/18 02:26:21 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "type/t_lst.h"

void	ps_lst_push_front(t_lst *lst, t_elem *elem)
{
	elem->next = lst->head;
	elem->prev = lst->head->prev;
	elem->next->prev = elem;
	elem->prev->next = elem;
	lst->head = elem;
	++lst->size;
	if (elem->n < lst->min->n)
		lst->min = elem;
	if (elem->n > lst->max->n)
		lst->max = elem;
	lst->med = ps_lst_get_med(lst, lst->size);
}

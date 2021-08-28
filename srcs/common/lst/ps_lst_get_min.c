/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_lst_get_min.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/16 23:06:49 by jodufour          #+#    #+#             */
/*   Updated: 2021/08/18 02:26:22 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "type/t_lst.h"

t_elem	*ps_lst_get_min(t_lst *lst, size_t size)
{
	t_elem const	*elem = lst->head;
	t_elem const	*submin = lst->head;

	if (size > lst->size)
		size = lst->size;
	while (size--)
	{
		if (elem->n < submin->n)
			submin = elem;
		elem = elem->next;
	}
	return ((t_elem *)submin);
}

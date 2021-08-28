/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_lst_get_max.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/16 23:10:04 by jodufour          #+#    #+#             */
/*   Updated: 2021/08/18 02:26:21 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "type/t_lst.h"

t_elem	*ps_lst_get_max(t_lst *lst, size_t size)
{
	t_elem const	*elem = lst->head;
	t_elem const	*submax = lst->head;

	if (size > lst->size)
		size = lst->size;
	while (size--)
	{
		if (elem->n > submax->n)
			submax = elem;
		elem = elem->next;
	}
	return ((t_elem *)submax);
}

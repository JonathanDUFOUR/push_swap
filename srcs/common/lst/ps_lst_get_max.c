/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_lst_get_max.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/16 23:10:04 by jodufour          #+#    #+#             */
/*   Updated: 2022/04/27 10:04:39 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "t_lst.h"

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

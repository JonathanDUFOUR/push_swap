/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_lst_is_in.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 09:13:20 by jodufour          #+#    #+#             */
/*   Updated: 2021/08/18 02:26:22 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "type/t_lst.h"

bool	ps_lst_is_in(t_lst *lst, int n)
{
	size_t	i;
	t_elem	*elem;

	i = lst->size;
	elem = lst->head;
	while (i && elem->n != n)
	{
		elem = elem->next;
		--i;
	}
	return (!!i);
}

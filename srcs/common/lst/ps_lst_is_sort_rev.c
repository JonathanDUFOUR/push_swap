/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_lst_is_sort_rev.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 09:34:11 by jodufour          #+#    #+#             */
/*   Updated: 2022/04/27 10:04:39 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "t_lst.h"

bool	ps_lst_is_sort_rev(t_elem *elem, size_t size)
{
	while (size-- > 1)
	{
		if (elem->n < elem->next->n)
			return (false);
		elem = elem->next;
	}
	return (true);
}

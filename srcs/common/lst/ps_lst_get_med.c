/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_lst_get_med.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 20:39:43 by jodufour          #+#    #+#             */
/*   Updated: 2022/04/27 10:12:59 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdint.h>
#include "t_lst.h"
#include "e_count.h"

static int	ps_get_count(t_lst *lst, size_t size, int n, int edge)
{
	t_elem	*elem;
	int		count_sup;
	int		count_inf;

	elem = lst->head;
	count_sup = 0;
	count_inf = 0;
	while (size--)
	{
		if (elem->n < n)
			++count_inf;
		else if (elem->n > n)
			++count_sup;
		elem = elem->next;
	}
	return (count_inf * (edge == INF) + count_sup * (edge == SUP));
}

static int	ps_lst_get_med_odd(t_lst *lst, size_t size)
{
	t_elem const	*elem = lst->head;
	size_t			size_cpy;
	int				count[2];

	size_cpy = size;
	while (size_cpy--)
	{
		count[INF] = ps_get_count(lst, size, elem->n, INF);
		count[SUP] = ps_get_count(lst, size, elem->n, SUP);
		if (count[INF] == count[SUP])
			return (elem->n);
		elem = elem->next;
	}
	return (0);
}

static int	ps_lst_get_med_even(t_lst *lst, size_t size)
{
	t_elem const	*elem = lst->head;
	t_elem const	*med0 = NULL;
	t_elem const	*med1 = NULL;
	size_t			size_cpy;
	int				count[2];

	size_cpy = size;
	while (size_cpy--)
	{
		count[INF] = ps_get_count(lst, size, elem->n, INF);
		count[SUP] = ps_get_count(lst, size, elem->n, SUP);
		if ((count[INF] == count[SUP] + 1) || (count[INF] == count[SUP] - 1))
		{
			med0 = (t_elem *)(!!med1 * (uintptr_t)elem);
			med1 = (t_elem *)(!med0 * (uintptr_t)elem + (uintptr_t)med1);
		}
		elem = elem->next;
	}
	if (med0 && med1)
		return ((med0->n + med1->n) / 2);
	return (0);
}

int	ps_lst_get_med(t_lst *lst, size_t size)
{
	if (size > lst->size)
		size = lst->size;
	if (size % 2)
		return (ps_lst_get_med_odd(lst, size));
	else
		return (ps_lst_get_med_even(lst, size));
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_lst_add_back.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 06:34:40 by jodufour          #+#    #+#             */
/*   Updated: 2021/08/18 02:27:06 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "enum/e_ret.h"
#include "type/t_lst.h"

int	ps_lst_add_back(t_lst *lst, int n)
{
	t_elem		*new;

	if (!lst->head && !lst->size)
		return (ps_lst_init(lst, n));
	else if (lst->head && lst->size)
	{
		new = malloc(sizeof(t_elem));
		if (!new)
			return (MALLOC_ERRNO);
		new->n = n;
		ps_lst_push_back(lst, new);
		return (SUCCESS);
	}
	else
		return (DATA_ERRNO);
}

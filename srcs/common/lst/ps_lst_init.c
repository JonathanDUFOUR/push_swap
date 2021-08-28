/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_lst_init.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 08:51:10 by jodufour          #+#    #+#             */
/*   Updated: 2021/08/18 02:27:06 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "enum/e_ret.h"
#include "type/t_lst.h"

int	ps_lst_init(t_lst *lst, int n)
{
	t_elem	*new;

	new = malloc(sizeof(t_elem));
	if (!new)
		return (MALLOC_ERRNO);
	new->next = new;
	new->prev = new;
	new->n = n;
	lst->head = new;
	lst->min = new;
	lst->max = new;
	lst->size = 1;
	lst->med = n;
	return (SUCCESS);
}

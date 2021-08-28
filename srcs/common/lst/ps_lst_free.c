/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_lst_free.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 09:21:02 by jodufour          #+#    #+#             */
/*   Updated: 2021/08/18 02:26:21 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "type/t_lst.h"

int	ps_lst_free(t_lst *lst, int ret)
{
	t_elem	*next;

	while (lst->size)
	{
		next = lst->head->next;
		lst->head->n = 0;
		lst->head->prev = NULL;
		lst->head->next = NULL;
		free(lst->head);
		lst->head = next;
		--lst->size;
	}
	lst->head = NULL;
	return (ret);
}
/*
**	5 52 12
**
**	ra
**	sa
**	rra
**	ra
**	sa
**	rra
*/

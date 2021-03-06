/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_lst_set_all.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 11:53:55 by jodufour          #+#    #+#             */
/*   Updated: 2022/04/27 10:04:39 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "t_lst.h"

void	ps_lst_set_all(t_lst *lst, t_elem *head, size_t size)
{
	lst->head = head;
	lst->size = size;
	lst->min = ps_lst_get_min(lst, size);
	lst->max = ps_lst_get_max(lst, size);
	lst->med = ps_lst_get_med(lst, size);
}

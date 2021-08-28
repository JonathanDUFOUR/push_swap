/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_rrb.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/03 00:07:11 by jodufour          #+#    #+#             */
/*   Updated: 2021/08/18 02:27:06 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "type/t_lst.h"
#include "enum/e_op.h"

int	do_rrb(void)
{
	t_lst *const	b = b_lst();

	if (b->size > 1)
		b->head = b->head->prev;
	return (RRB);
}

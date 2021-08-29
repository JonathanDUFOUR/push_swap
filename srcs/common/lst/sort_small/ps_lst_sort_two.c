/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_lst_sort_two.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 22:01:48 by jodufour          #+#    #+#             */
/*   Updated: 2021/08/18 02:27:06 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op_lookup.h"
#include "type/t_lst.h"
#include "type/t_ans.h"
#include "enum/e_lst_id.h"
#include "enum/e_ret.h"

int	ps_lst_sort_two(t_lst *lst, int lst_id)
{
	t_ans *const	ans = ans_lst();

	if (lst_id == A)
	{
		if (lst->head->n > lst->head->next->n)
			return (ps_ans_add_back(ans, do_sa()));
	}
	else if (lst_id == B)
	{
		if (lst->head->n < lst->head->next->n)
			return (ps_ans_add_back(ans, do_sb()));
	}
	else
		return (LST_ID_ERRNO);
	return (SUCCESS);
}
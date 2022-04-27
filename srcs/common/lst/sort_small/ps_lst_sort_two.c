/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_lst_sort_two.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 22:01:48 by jodufour          #+#    #+#             */
/*   Updated: 2022/04/27 10:12:25 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lookup_do_op.h"
#include "t_ans.h"
#include "t_lst.h"
#include "e_lst_id.h"
#include "e_ret.h"

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

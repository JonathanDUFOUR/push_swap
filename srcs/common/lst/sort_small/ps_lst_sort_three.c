/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_lst_sort_three.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 17:03:10 by jodufour          #+#    #+#             */
/*   Updated: 2022/01/01 21:17:37 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lookup_do_op.h"
#include "type/t_ans.h"
#include "type/t_lst.h"
#include "enum/e_lst_id.h"
#include "enum/e_ret.h"
#include "enum/e_op.h"

int	ps_psort_a_large(t_lst *a, t_ans *const ans);
int	ps_rsort_a_large(t_lst *a, t_ans *const ans);

int	ps_psort_b_large(t_lst *b, t_ans *const ans);
int	ps_rsort_b_large(t_lst *b, t_ans *const ans);

static int	ps_sort_a_small(t_lst *a, t_ans *const ans)
{
	t_elem *const	max = a->max;
	int				ret;

	ret = SUCCESS;
	if (max == a->head)
		ret = ps_ans_add_back(ans, do_ra());
	else if (max == a->head->next)
		ret = ps_ans_add_back(ans, do_rra());
	if (ret == SUCCESS)
		ret = ps_lst_sort_two(a, A);
	return (ret);
}

static int	ps_sort_b_small(t_lst *b, t_ans *const ans)
{
	t_elem *const	min = b->min;
	int				ret;

	ret = SUCCESS;
	if (min == b->head)
		ret = ps_ans_add_back(ans, do_rb());
	else if (min == b->head->next)
		ret = ps_ans_add_back(ans, do_rrb());
	if (ret == SUCCESS)
		ret = ps_lst_sort_two(b, B);
	return (ret);
}

static int	ps_sort_a_large(t_lst *a, t_ans *const ans)
{
	if (ans->tail->op == PA)
		return (ps_psort_a_large(a, ans));
	else
		return (ps_rsort_a_large(a, ans));
}

static int	ps_sort_b_large(t_lst *b, t_ans *const ans)
{
	if (ans->tail->op == PB)
		return (ps_psort_b_large(b, ans));
	else
		return (ps_rsort_b_large(b, ans));
}

int	ps_lst_sort_three(t_lst *lst, int lst_id)
{
	t_ans *const	ans = ans_lst();

	if (lst_id == A)
	{
		if (lst->size == 3)
			return (ps_sort_a_small(lst, ans));
		else
			return (ps_sort_a_large(lst, ans));
	}
	else if (lst_id == B)
	{
		if (lst->size == 3)
			return (ps_sort_b_small(lst, ans));
		else
			return (ps_sort_b_large(lst, ans));
	}
	else
		return (LST_ID_ERRNO);
}

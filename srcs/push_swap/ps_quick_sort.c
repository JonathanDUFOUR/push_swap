/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_quick_sort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 14:34:51 by jodufour          #+#    #+#             */
/*   Updated: 2022/04/27 10:10:08 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "lookup_do_op.h"
#include "t_lst.h"
#include "t_ans.h"
#include "e_lst_id.h"
#include "e_ret.h"

static int	ps_do_right_sort(t_lst *lst, size_t size, int lst_id)
{
	if (size == 3)
		return (ps_lst_sort_three(lst, lst_id));
	if (size == 2)
		return (ps_lst_sort_two(lst, lst_id));
	return (SUCCESS);
}

static void	ps_var_init(size_t *i, size_t *rot, size_t *push, int *ret)
{
	*i = 0;
	*rot = 0;
	*push = 0;
	*ret = SUCCESS;
}

static int	ps_lst_reset(t_lst *lst, size_t rot, int lst_id)
{
	t_ans *const	ans = ans_lst();
	int				ret;

	ret = SUCCESS;
	if (rot > lst->size / 2)
	{
		while (ret == SUCCESS && rot++ < lst->size)
			if (lst_id == A)
				ret = ps_ans_add_back(ans, do_ra());
		else if (lst_id == B)
			ret = ps_ans_add_back(ans, do_rb());
		else
			ret = LST_ID_ERRNO;
	}
	else
	{
		while (ret == SUCCESS && rot--)
			if (lst_id == A)
				ret = ps_ans_add_back(ans, do_rra());
		else if (lst_id == B)
			ret = ps_ans_add_back(ans, do_rrb());
		else
			ret = LST_ID_ERRNO;
	}
	return (ret);
}

int	ps_quick_sort_rev(t_lst *const b, size_t size, int piv, t_ans *const ans)
{
	t_lst *const	a = a_lst();
	size_t			i;
	size_t			rot;
	size_t			push;
	int				ret;

	if (size <= 3)
		return (ps_do_right_sort(b, size, B));
	ps_var_init(&i, &rot, &push, &ret);
	while (ret == SUCCESS && i < size && ps_lst_get_max(b, size - i++)->n > piv)
		if (b->head->n > piv && ++push)
			ret = ps_ans_add_back(ans, do_pa());
	else if (++rot)
		ret = ps_ans_add_back(ans, do_rb());
	if (ret == SUCCESS)
		ret = ps_quick_sort(a, push, ps_lst_get_med(a, push), ans);
	if (ret == SUCCESS)
		ret = ps_lst_reset(b, rot, B);
	if (ret == SUCCESS)
		ret = ps_quick_sort_rev(b, size - push,
				ps_lst_get_med(b, size - push), ans);
	while (ret == SUCCESS && push--)
		ret = ps_ans_add_back(ans, do_pb());
	return (ret);
}

int	ps_quick_sort(t_lst *const a, size_t size, int piv, t_ans *const ans)
{
	t_lst *const	b = b_lst();
	size_t			push;
	size_t			rot;
	size_t			i;
	int				ret;

	if (size <= 3)
		return (ps_do_right_sort(a, size, A));
	ps_var_init(&i, &rot, &push, &ret);
	while (ret == SUCCESS && i < size && ps_lst_get_min(a, size - i++)->n < piv)
		if (a->head->n < piv && ++push)
			ret = ps_ans_add_back(ans, do_pb());
	else if (++rot)
		ret = ps_ans_add_back(ans, do_ra());
	if (ret == SUCCESS)
		ret = ps_lst_reset(a, rot, A);
	if (ret == SUCCESS)
		ret = ps_quick_sort(a, size - push,
				ps_lst_get_med(a, size - push), ans);
	if (ret == SUCCESS)
		ret = ps_quick_sort_rev(b, push, ps_lst_get_med(b, push), ans);
	while (ret == SUCCESS && push--)
		ret = ps_ans_add_back(ans, do_pa());
	return (ret);
}

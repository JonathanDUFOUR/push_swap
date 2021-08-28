/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_sort_large.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 16:15:54 by jodufour          #+#    #+#             */
/*   Updated: 2021/08/20 16:30:13 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "type/t_ans.h"
#include "type/t_lst.h"
#include "enum/e_ret.h"

int		ps_psort_a_large_acb(t_ans *const ans);
int		ps_psort_a_large_bac(t_ans *const ans);
int		ps_psort_a_large_bca(t_ans *const ans);
int		ps_psort_a_large_cab(t_ans *const ans);
int		ps_psort_a_large_cba(t_ans *const ans);

int		ps_rsort_a_large_acb(t_ans *const ans);
int		ps_rsort_a_large_bac(t_ans *const ans);
int		ps_rsort_a_large_bca(t_ans *const ans);
int		ps_rsort_a_large_cab(t_ans *const ans);
int		ps_rsort_a_large_cba(t_ans *const ans);

int		ps_psort_b_large_abc(t_ans *const ans);
int		ps_psort_b_large_acb(t_ans *const ans);
int		ps_psort_b_large_bac(t_ans *const ans);
int		ps_psort_b_large_bca(t_ans *const ans);
int		ps_psort_b_large_cab(t_ans *const ans);

int		ps_rsort_b_large_abc(t_ans *const ans);
int		ps_rsort_b_large_acb(t_ans *const ans);
int		ps_rsort_b_large_bac(t_ans *const ans);
int		ps_rsort_b_large_bca(t_ans *const ans);
int		ps_rsort_b_large_cab(t_ans *const ans);

int	ps_psort_a_large(t_lst *a, t_ans *const ans)
{
	int const	min = ps_lst_get_min(a, 3)->n;
	int const	max = ps_lst_get_max(a, 3)->n;
	int			ret;

	ret = SUCCESS;
	if (min == a->head->n && max == a->head->next->n)
		ret = ps_psort_a_large_acb(ans);
	else if (min == a->head->next->n && max == a->head->next->next->n)
		ret = ps_psort_a_large_bac(ans);
	else if (min == a->head->next->next->n && max == a->head->next->n)
		ret = ps_psort_a_large_bca(ans);
	else if (min == a->head->next->n && max == a->head->n)
		ret = ps_psort_a_large_cab(ans);
	else if (min == a->head->next->next->n && max == a->head->n)
		ret = ps_psort_a_large_cba(ans);
	return (ret);
}

int	ps_psort_b_large(t_lst *b, t_ans *const ans)
{
	int const	min = ps_lst_get_min(b, 3)->n;
	int const	max = ps_lst_get_max(b, 3)->n;
	int			ret;

	ret = SUCCESS;
	if (min == b->head->next->n && max == b->head->n)
		ret = ps_psort_b_large_cab(ans);
	else if (min == b->head->next->next->n && max == b->head->next->n)
		ret = ps_psort_b_large_bca(ans);
	else if (min == b->head->next->n && max == b->head->next->next->n)
		ret = ps_psort_b_large_bac(ans);
	else if (min == b->head->n && max == b->head->next->n)
		ret = ps_psort_b_large_acb(ans);
	else if (min == b->head->n && max == b->head->next->next->n)
		ret = ps_psort_b_large_abc(ans);
	return (ret);
}

int	ps_rsort_a_large(t_lst *a, t_ans *const ans)
{
	int const	min = ps_lst_get_min(a, 3)->n;
	int const	max = ps_lst_get_max(a, 3)->n;
	int			ret;

	ret = SUCCESS;
	if (min == a->head->n && max == a->head->next->n)
		ret = ps_rsort_a_large_acb(ans);
	else if (min == a->head->next->n && max == a->head->next->next->n)
		ret = ps_rsort_a_large_bac(ans);
	else if (min == a->head->next->next->n && max == a->head->next->n)
		ret = ps_rsort_a_large_bca(ans);
	else if (min == a->head->next->n && max == a->head->n)
		ret = ps_rsort_a_large_cab(ans);
	else if (min == a->head->next->next->n && max == a->head->n)
		ret = ps_rsort_a_large_cba(ans);
	return (ret);
}

int	ps_rsort_b_large(t_lst *b, t_ans *const ans)
{
	int const	min = ps_lst_get_min(b, 3)->n;
	int const	max = ps_lst_get_max(b, 3)->n;
	int			ret;

	ret = SUCCESS;
	if (min == b->head->next->n && max == b->head->n)
		ret = ps_rsort_b_large_cab(ans);
	else if (min == b->head->next->next->n && max == b->head->next->n)
		ret = ps_rsort_b_large_bca(ans);
	else if (min == b->head->next->n && max == b->head->next->next->n)
		ret = ps_rsort_b_large_bac(ans);
	else if (min == b->head->n && max == b->head->next->n)
		ret = ps_rsort_b_large_acb(ans);
	else if (min == b->head->n && max == b->head->next->next->n)
		ret = ps_rsort_b_large_abc(ans);
	return (ret);
}

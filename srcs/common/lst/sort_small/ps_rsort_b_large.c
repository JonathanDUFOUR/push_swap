/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_rsort_b_large.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 15:27:35 by jodufour          #+#    #+#             */
/*   Updated: 2021/08/20 16:32:33 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "type/t_ans.h"
#include "do_op_lookup.h"
#include "enum/e_ret.h"

/*
**	sb rb sb rrb sb
*/
int	ps_rsort_b_large_abc(t_ans *const ans)
{
	int	ret;

	ret = ps_ans_add_back(ans, do_sb());
	if (ret == SUCCESS)
		ret = ps_ans_add_back(ans, do_rb());
	if (ret == SUCCESS)
		ret = ps_ans_add_back(ans, do_sb());
	if (ret == SUCCESS)
		ret = ps_ans_add_back(ans, do_rrb());
	if (ret == SUCCESS)
		ret = ps_ans_add_back(ans, do_sb());
	return (ret);
}

/*
**	sb rb sb rrb
*/
int	ps_rsort_b_large_acb(t_ans *const ans)
{
	int	ret;

	ret = ps_ans_add_back(ans, do_sb());
	if (ret == SUCCESS)
		ret = ps_ans_add_back(ans, do_rb());
	if (ret == SUCCESS)
		ret = ps_ans_add_back(ans, do_sb());
	if (ret == SUCCESS)
		ret = ps_ans_add_back(ans, do_rrb());
	return (ret);
}

/*
**	rb sb rrb sb
*/
int	ps_rsort_b_large_bac(t_ans *const ans)
{
	int	ret;

	ret = ps_ans_add_back(ans, do_rb());
	if (ret == SUCCESS)
		ret = ps_ans_add_back(ans, do_sb());
	if (ret == SUCCESS)
		ret = ps_ans_add_back(ans, do_rrb());
	if (ret == SUCCESS)
		ret = ps_ans_add_back(ans, do_sb());
	return (ret);
}

/*
**	sb
*/
int	ps_rsort_b_large_bca(t_ans *const ans)
{
	int	ret;

	ret = ps_ans_add_back(ans, do_sb());
	return (ret);
}

/*
**	rb sb rrb
*/
int	ps_rsort_b_large_cab(t_ans *const ans)
{
	int	ret;

	ret = ps_ans_add_back(ans, do_rb());
	if (ret == SUCCESS)
		ret = ps_ans_add_back(ans, do_sb());
	if (ret == SUCCESS)
		ret = ps_ans_add_back(ans, do_rrb());
	return (ret);
}

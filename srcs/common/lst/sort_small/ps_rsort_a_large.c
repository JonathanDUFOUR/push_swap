/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_rsort_a_large.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 15:00:04 by jodufour          #+#    #+#             */
/*   Updated: 2022/01/01 21:17:08 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lookup_do_op.h"
#include "type/t_ans.h"
#include "enum/e_ret.h"

/*
**	ra sa rra
*/
int	ps_rsort_a_large_acb(t_ans *const ans)
{
	int	ret;

	ret = ps_ans_add_back(ans, do_ra());
	if (ret == SUCCESS)
		ret = ps_ans_add_back(ans, do_sa());
	if (ret == SUCCESS)
		ret = ps_ans_add_back(ans, do_rra());
	return (ret);
}

/*
**	sa
*/
int	ps_rsort_a_large_bac(t_ans *const ans)
{
	int	ret;

	ret = ps_ans_add_back(ans, do_sa());
	return (ret);
}

/*
**	ra sa rra sa
*/
int	ps_rsort_a_large_bca(t_ans *const ans)
{
	int	ret;

	ret = ps_ans_add_back(ans, do_ra());
	if (ret == SUCCESS)
		ret = ps_ans_add_back(ans, do_sa());
	if (ret == SUCCESS)
		ret = ps_ans_add_back(ans, do_rra());
	if (ret == SUCCESS)
		ret = ps_ans_add_back(ans, do_sa());
	return (ret);
}

/*
**	sa ra sa rra
*/
int	ps_rsort_a_large_cab(t_ans *const ans)
{
	int	ret;

	ret = ps_ans_add_back(ans, do_sa());
	if (ret == SUCCESS)
		ret = ps_ans_add_back(ans, do_ra());
	if (ret == SUCCESS)
		ret = ps_ans_add_back(ans, do_sa());
	if (ret == SUCCESS)
		ret = ps_ans_add_back(ans, do_rra());
	return (ret);
}

/*
**	sa ra sa rra sa
*/
int	ps_rsort_a_large_cba(t_ans *const ans)
{
	int	ret;

	ret = ps_ans_add_back(ans, do_sa());
	if (ret == SUCCESS)
		ret = ps_ans_add_back(ans, do_ra());
	if (ret == SUCCESS)
		ret = ps_ans_add_back(ans, do_sa());
	if (ret == SUCCESS)
		ret = ps_ans_add_back(ans, do_rra());
	if (ret == SUCCESS)
		ret = ps_ans_add_back(ans, do_sa());
	return (ret);
}

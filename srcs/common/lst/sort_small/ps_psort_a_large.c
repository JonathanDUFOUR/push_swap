/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_psort_a_large.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 21:30:05 by jodufour          #+#    #+#             */
/*   Updated: 2022/04/27 10:04:39 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lookup_do_op.h"
#include "t_ans.h"
#include "e_ret.h"

/*
**	pb sa pa
*/
int	ps_psort_a_large_acb(t_ans *const ans)
{
	int	ret;

	ret = ps_ans_add_back(ans, do_pb());
	if (ret == SUCCESS)
		ret = ps_ans_add_back(ans, do_sa());
	if (ret == SUCCESS)
		ret = ps_ans_add_back(ans, do_pa());
	return (ret);
}

/*
**	sa
*/
int	ps_psort_a_large_bac(t_ans *const ans)
{
	int	ret;

	ret = ps_ans_add_back(ans, do_sa());
	return (ret);
}

/*
**	pb pb ra pa pa rra
*/
int	ps_psort_a_large_bca(t_ans *const ans)
{
	int	ret;

	ret = ps_ans_add_back(ans, do_pb());
	if (ret == SUCCESS)
		ret = ps_ans_add_back(ans, do_pb());
	if (ret == SUCCESS)
		ret = ps_ans_add_back(ans, do_ra());
	if (ret == SUCCESS)
		ret = ps_ans_add_back(ans, do_pa());
	if (ret == SUCCESS)
		ret = ps_ans_add_back(ans, do_pa());
	if (ret == SUCCESS)
		ret = ps_ans_add_back(ans, do_rra());
	return (ret);
}

/*
**	pb pb sb pb sb pa pa pa
*/
int	ps_psort_a_large_cab(t_ans *const ans)
{
	int	ret;

	ret = ps_ans_add_back(ans, do_pb());
	if (ret == SUCCESS)
		ret = ps_ans_add_back(ans, do_pb());
	if (ret == SUCCESS)
		ret = ps_ans_add_back(ans, do_sb());
	if (ret == SUCCESS)
		ret = ps_ans_add_back(ans, do_pb());
	if (ret == SUCCESS)
		ret = ps_ans_add_back(ans, do_sb());
	if (ret == SUCCESS)
		ret = ps_ans_add_back(ans, do_pa());
	if (ret == SUCCESS)
		ret = ps_ans_add_back(ans, do_pa());
	if (ret == SUCCESS)
		ret = ps_ans_add_back(ans, do_pa());
	return (ret);
}

/*
**	pb pb sb ra pa pa rra
*/
int	ps_psort_a_large_cba(t_ans *const ans)
{
	int	ret;

	ret = ps_ans_add_back(ans, do_pb());
	if (ret == SUCCESS)
		ret = ps_ans_add_back(ans, do_pb());
	if (ret == SUCCESS)
		ret = ps_ans_add_back(ans, do_sb());
	if (ret == SUCCESS)
		ret = ps_ans_add_back(ans, do_ra());
	if (ret == SUCCESS)
		ret = ps_ans_add_back(ans, do_pa());
	if (ret == SUCCESS)
		ret = ps_ans_add_back(ans, do_pa());
	if (ret == SUCCESS)
		ret = ps_ans_add_back(ans, do_rra());
	return (ret);
}

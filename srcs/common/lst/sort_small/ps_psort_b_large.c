/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_psort_b_large.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 00:33:29 by jodufour          #+#    #+#             */
/*   Updated: 2021/08/20 16:32:27 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "type/t_ans.h"
#include "type/t_lst.h"
#include "do_op_lookup.h"
#include "enum/e_ret.h"

/*
**	pa pa sa rb pb pb rrb
*/
int	ps_psort_b_large_abc(t_ans *const ans)
{
	int	ret;

	ret = ps_ans_add_back(ans, do_pa());
	if (ret == SUCCESS)
		ret = ps_ans_add_back(ans, do_pa());
	if (ret == SUCCESS)
		ret = ps_ans_add_back(ans, do_sa());
	if (ret == SUCCESS)
		ret = ps_ans_add_back(ans, do_rb());
	if (ret == SUCCESS)
		ret = ps_ans_add_back(ans, do_pb());
	if (ret == SUCCESS)
		ret = ps_ans_add_back(ans, do_pb());
	if (ret == SUCCESS)
		ret = ps_ans_add_back(ans, do_rrb());
	return (ret);
}

/*
**	pa pa sa pa sa pb pb pb
*/
int	ps_psort_b_large_acb(t_ans *const ans)
{
	int	ret;

	ret = ps_ans_add_back(ans, do_pa());
	if (ret == SUCCESS)
		ret = ps_ans_add_back(ans, do_pa());
	if (ret == SUCCESS)
		ret = ps_ans_add_back(ans, do_sa());
	if (ret == SUCCESS)
		ret = ps_ans_add_back(ans, do_pa());
	if (ret == SUCCESS)
		ret = ps_ans_add_back(ans, do_sa());
	if (ret == SUCCESS)
		ret = ps_ans_add_back(ans, do_pb());
	if (ret == SUCCESS)
		ret = ps_ans_add_back(ans, do_pb());
	if (ret == SUCCESS)
		ret = ps_ans_add_back(ans, do_pb());
	return (ret);
}

/*
**	pa pa rb pb pb rrb
*/
int	ps_psort_b_large_bac(t_ans *const ans)
{
	int	ret;

	ret = ps_ans_add_back(ans, do_pa());
	if (ret == SUCCESS)
		ret = ps_ans_add_back(ans, do_pa());
	if (ret == SUCCESS)
		ret = ps_ans_add_back(ans, do_rb());
	if (ret == SUCCESS)
		ret = ps_ans_add_back(ans, do_pb());
	if (ret == SUCCESS)
		ret = ps_ans_add_back(ans, do_pb());
	if (ret == SUCCESS)
		ret = ps_ans_add_back(ans, do_rrb());
	return (ret);
}

/*
**	sb
*/
int	ps_psort_b_large_bca(t_ans *const ans)
{
	int	ret;

	ret = ps_ans_add_back(ans, do_sb());
	return (ret);
}

/*
**	pa sb pb
*/
int	ps_psort_b_large_cab(t_ans *const ans)
{
	int	ret;

	ret = ps_ans_add_back(ans, do_pa());
	if (ret == SUCCESS)
		ret = ps_ans_add_back(ans, do_sb());
	if (ret == SUCCESS)
		ret = ps_ans_add_back(ans, do_pb());
	return (ret);
}

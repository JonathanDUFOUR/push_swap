/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 09:34:49 by jodufour          #+#    #+#             */
/*   Updated: 2021/08/26 18:07:26 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "push_swap.h"
#include "type/t_ans.h"
#include "type/t_lst.h"
#include "enum/e_lst_id.h"
#include "enum/e_ret.h"

int	main(int const ac, char const **av)
{
	t_lst *const	a = a_lst();
	t_lst *const	b = b_lst();
	t_ans *const	ans = ans_lst();
	int				ret;

	(void)ac;
	ret = ps_check_args(av + 1);
	if (ret == SUCCESS)
		ret = ps_quick_sort(a, a->size, a->med, ans);
	ps_lst_free(a, 0);
	ps_lst_free(b, 0);
	while (ret == SUCCESS && ps_ans_optimus(ans))
		continue ;
	if (ret == SUCCESS)
		ps_ans_print(ans);
	else
		ps_err_msg(ret);
	return (ps_ans_free(ans, ret));
}

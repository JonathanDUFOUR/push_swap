/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 04:58:41 by jodufour          #+#    #+#             */
/*   Updated: 2022/04/27 10:13:49 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include "checker.h"
#include "e_ret.h"
#include "t_lst.h"

int	main(int ac, char const **av)
{
	t_lst *const	a = a_lst();
	t_lst *const	b = b_lst();
	int				ret;

	(void)ac;
	ret = ps_check_args(av + 1);
	if (ret == SUCCESS)
	{
		if (!a->size)
			exit(SUCCESS);
		ret = ps_answer_apply();
	}
	if (ret == SUCCESS)
	{
		if (!b->size && ps_lst_is_sort(a->head, a->size))
			write(1, "\e[32mOK\e[0m\n", 12);
		else
			write(1, "\e[31mKO\e[0m\n", 12);
	}
	else
		ps_err_msg(ret);
	ps_lst_free(a, 0);
	ps_lst_free(b, 0);
	return (ret);
}

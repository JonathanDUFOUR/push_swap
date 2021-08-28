/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_check_args.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 10:18:14 by jodufour          #+#    #+#             */
/*   Updated: 2021/08/26 22:09:12 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_io.h"
#include "ft_string.h"
#include "push_swap.h"
#include "enum/e_ret.h"
#include "type/t_lst.h"

int	ps_check_args(char const **av)
{
	int	ret;

	ret = ps_check_format(av);
	if (ret == SUCCESS)
		ret = ps_get_arg(av);
	return (ret);
}

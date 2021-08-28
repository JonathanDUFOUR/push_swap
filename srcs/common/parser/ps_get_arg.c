/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_get_arg.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 22:08:18 by jodufour          #+#    #+#             */
/*   Updated: 2021/08/26 22:10:48 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_io.h"
#include "push_swap.h"
#include "enum/e_ret.h"

int	ps_get_arg(char const **av)
{
	char const	*ptr;
	int			n;
	int			ret;

	while (*av)
	{
		ptr = *av;
		while (ft_isspace(*ptr))
			++ptr;
		while (*ptr)
		{
			n = ft_atoi(ptr);
			ret = ps_check_value(n, ptr);
			if (ret == SUCCESS)
				ret = ps_lst_add_back(a_lst(), n);
			if (ret != SUCCESS)
				return (ret);
			while (ps_issign(*ptr) || ft_isdigit(*ptr))
				++ptr;
			while (ft_isspace(*ptr))
				++ptr;
		}
		++av;
	}
	return (SUCCESS);
}

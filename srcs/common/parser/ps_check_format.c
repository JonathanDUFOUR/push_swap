/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_check_format.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 22:00:23 by jodufour          #+#    #+#             */
/*   Updated: 2022/04/27 09:20:24 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_io.h"
#include "push_swap.h"
#include "e_ret.h"

int	ps_check_format(char const **av)
{
	char const	*ptr;

	while (av && *av)
	{
		ptr = *av;
		while (ft_isspace(*ptr))
			++ptr;
		while (*ptr)
		{
			if ((!ft_isdigit(*ptr) && !ps_issign(*ptr))
				|| (ps_issign(*ptr) && !ft_isdigit(*(ptr + 1))))
				return (ARG_ERRNO);
			++ptr;
			while (*ptr >= '0' && *ptr <= '9')
				++ptr;
			if (*ptr && !ft_isspace(*ptr))
				return (ARG_ERRNO);
			while (ft_isspace(*ptr))
				++ptr;
		}
		++av;
	}
	return (SUCCESS);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_check_value.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 19:04:55 by jodufour          #+#    #+#             */
/*   Updated: 2022/04/27 10:04:39 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_io.h"
#include "ft_string.h"
#include "push_swap.h"
#include "t_lst.h"
#include "e_ret.h"

static void	ps_fill_nb(char *nb, int n)
{
	t_uint	abs;
	t_uint	len;

	abs = (-(n < 0)) * n + (n >= 0) * n;
	len = ft_uintlen(abs) + (n < 0);
	nb += len;
	*nb-- = 0;
	while (len-- - (n < 0))
	{
		*nb-- = abs % 10 + '0';
		abs /= 10;
	}
	if (n < 0)
		*nb = '-';
}

int	ps_check_value(int n, char const *s)
{
	char	nb[12];

	ps_fill_nb(nb, n);
	if (ps_valcmp(s, nb))
		return (INT_LIMITS_ERRNO);
	if (ps_lst_is_in(a_lst(), n))
		return (UNIQ_ERRNO);
	return (SUCCESS);
}

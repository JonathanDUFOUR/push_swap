/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_valcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 22:15:10 by jodufour          #+#    #+#             */
/*   Updated: 2021/08/26 22:34:23 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_io.h"

static int	ps_is_zero(char const *s)
{
	while (*s == '0')
		++s;
	return (!(!*s || *s == ' '));
}

int	ps_valcmp(char const *s, char const *nb)
{
	if (*s == '+')
		++s;
	if (*s == '-')
	{
		++s;
		if (*nb == '0')
			return (ps_is_zero(s));
		++nb;
	}
	while (*s == '0' && ft_isdigit(*(s + 1)))
		++s;
	while (ft_isdigit(*s) && *s == *nb)
	{
		++s;
		++nb;
	}
	return (!(!*s || *s == ' '));
}

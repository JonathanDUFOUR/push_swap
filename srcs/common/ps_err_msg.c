/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_err_msg.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 09:50:23 by jodufour          #+#    #+#             */
/*   Updated: 2021/08/28 23:42:53 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "err_msg_lookup.h"

void	ps_err_msg(int err)
{
	int	i;

	write(2, "\n\e[31mError:\n", 13);
	i = 0;
	while (err != g_err[i].err && g_err[i].msg)
		++i;
	write(2, g_err[i].msg, g_err[i].len);
	write(2, " 😵\e[0m\n\n", 11);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_answer_apply.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 13:52:36 by jodufour          #+#    #+#             */
/*   Updated: 2021/08/18 02:27:06 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "get_next_line.h"
#include "ft_string.h"
#include "checker.h"
#include "enum/e_ret.h"
#include "type/t_lst.h"
#include "do_op_lookup.h"

int	ps_answer_apply(void)
{
	char	*line;
	int		ret;
	int		i;

	line = NULL;
	ret = get_next_line(0, &line);
	while (ret == 1 && *line)
	{
		i = 0;
		while (g_do_op[i].op && ft_strcmp(g_do_op[i].op, line))
			++i;
		if (g_do_op[i].fct)
			g_do_op[i].fct();
		else
			ret = INPUT_ERRNO;
		free(line);
		line = NULL;
		if (ret != INPUT_ERRNO)
			ret = get_next_line(0, &line);
	}
	gnl_clear();
	free(line);
	ret = (ret == -1) * GNL_ERRNO + (ret == INPUT_ERRNO) * INPUT_ERRNO;
	return (ret);
}

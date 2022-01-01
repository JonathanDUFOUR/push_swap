/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lookup_err_msg.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 01:50:22 by jodufour          #+#    #+#             */
/*   Updated: 2022/01/01 21:10:55 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LOOKUP_ERR_MSG_H
# define LOOKUP_ERR_MSG_H

# include <stddef.h>
# include "enum/e_ret.h"

typedef struct s_err	t_err;

struct s_err
{
	int			err;
	char const	*msg;
	size_t		len;
};

static t_err const		g_err[] = {
	{ARG_ERRNO, "Wrong arguments", 15},
	{DATA_ERRNO, "Meta data error", 15},
	{MALLOC_ERRNO, "Memory allocation failed", 24},
	{INT_LIMITS_ERRNO, "Input has an over limits int", 28},
	{UNIQ_ERRNO, "Input has twice same integer", 28},
	{INPUT_ERRNO, "Unrecognized operation", 22},
	{GNL_ERRNO, "Function get_next_line() failed", 31},
	{LST_ID_ERRNO, "Unrecognized lst id", 19},
	{PROCESS_ERRNO, "Quick Sort process issue", 24},
	{NO_SOLVE_ERRNO, "No solution found", 17},
	{0, NULL, 0}
};

#endif

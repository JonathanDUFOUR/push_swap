/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lookup_put_op.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 16:42:37 by jodufour          #+#    #+#             */
/*   Updated: 2022/01/01 21:11:37 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LOOKUP_PUT_OP_H
# define LOOKUP_PUT_OP_H

# include <stddef.h>

typedef struct s_put_op	t_put_op;

struct	s_put_op
{
	char const	*name;
	size_t		len;
};

static t_put_op const	g_put_op[] = {
	{"pa\n", 3},
	{"pb\n", 3},
	{"ra\n", 3},
	{"rb\n", 3},
	{"rr\n", 3},
	{"rra\n", 4},
	{"rrb\n", 4},
	{"rrr\n", 4},
	{"sa\n", 3},
	{"sb\n", 3},
	{"ss\n", 3},
	{0}
};

#endif

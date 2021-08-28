/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_op_lookup.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 16:42:37 by jodufour          #+#    #+#             */
/*   Updated: 2021/08/15 17:50:05 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUT_OP_LOOKUP_H
# define PUT_OP_LOOKUP_H

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

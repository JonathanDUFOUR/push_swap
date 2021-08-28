/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op_lookup.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 16:43:00 by jodufour          #+#    #+#             */
/*   Updated: 2021/08/13 12:15:04 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DO_OP_LOOKUP_H
# define DO_OP_LOOKUP_H

typedef struct s_do_op	t_do_op;

struct s_do_op
{
	char const	*op;
	int			(*fct)(void);
};

int	do_sa(void);
int	do_sb(void);
int	do_ss(void);
int	do_pa(void);
int	do_pb(void);
int	do_ra(void);
int	do_rb(void);
int	do_rr(void);
int	do_rra(void);
int	do_rrb(void);
int	do_rrr(void);

static t_do_op const	g_do_op[] = {
	{"pa", do_pa},
	{"pb", do_pb},
	{"ra", do_ra},
	{"rb", do_rb},
	{"rr", do_rr},
	{"rra", do_rra},
	{"rrb", do_rrb},
	{"rrr", do_rrr},
	{"sa", do_sa},
	{"sb", do_sb},
	{"ss", do_ss},
	{0}
};

#endif

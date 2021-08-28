/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_cancel_lookup.h                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 17:05:38 by jodufour          #+#    #+#             */
/*   Updated: 2021/08/18 02:27:06 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIND_CANCEL_LOOKUP_H
# define FIND_CANCEL_LOOKUP_H

# include "type/t_step.h"
# include "enum/e_op.h"

typedef struct s_find_cancel	t_find_cancel;

struct	s_find_cancel
{
	int		op;
	t_step	*(*fct)(t_step *);
};

t_step	*find_cancel_pa(t_step *action);
t_step	*find_cancel_pb(t_step *action);
t_step	*find_cancel_ra(t_step *action);
t_step	*find_cancel_rb(t_step *action);
t_step	*find_cancel_rr(t_step *action);
t_step	*find_cancel_rra(t_step *action);
t_step	*find_cancel_rrb(t_step *action);
t_step	*find_cancel_rrr(t_step *action);
t_step	*find_cancel_sa(t_step *action);
t_step	*find_cancel_sb(t_step *action);
t_step	*find_cancel_ss(t_step *action);

static t_find_cancel const		g_find_cancel[] = {
	{PA, find_cancel_pa},
	{PB, find_cancel_pb},
	{RA, find_cancel_ra},
	{RB, find_cancel_rb},
	{RR, find_cancel_rr},
	{RRA, find_cancel_rra},
	{RRB, find_cancel_rrb},
	{RRR, find_cancel_rrr},
	{SA, find_cancel_sa},
	{SB, find_cancel_sb},
	{SS, find_cancel_ss},
	{0}
};

#endif

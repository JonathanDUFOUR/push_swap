/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_step.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 15:03:24 by jodufour          #+#    #+#             */
/*   Updated: 2021/08/17 16:58:18 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef T_STEP_H
# define T_STEP_H

# include <stdbool.h>

typedef struct s_tep	t_step;

struct	s_tep
{
	int		op;
	t_step	*next;
	t_step	*prev;
};

bool	ps_are_mergeable(t_step *action, t_step *cancel);
bool	ps_are_deletable(t_step *action, t_step *cancel);

#endif

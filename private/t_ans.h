/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_ans.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 11:02:35 by jodufour          #+#    #+#             */
/*   Updated: 2021/08/17 15:07:42 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef T_ANS_H
# define T_ANS_H

# include <stdbool.h>
# include <stddef.h>
# include "t_step.h"

typedef struct s_ans	t_ans;

struct	s_ans
{
	t_step	*head;
	t_step	*tail;
	size_t	size;
};

int		ps_ans_add_back(t_ans *ans, int op);
int		ps_ans_free(t_ans *ans, int ret);
int		ps_ans_init(t_ans *ans, int op);
bool	ps_ans_optimus(t_ans *ans);

void	ps_ans_del_one(t_ans *ans, t_step *step);
void	ps_ans_del_two(t_ans *ans, t_step *action, t_step *cancel);
void	ps_ans_merge_two(t_ans *ans, t_step *action, t_step *cancel);
void	ps_ans_print(t_ans *ans);

t_ans	*ans_lst(void);

#endif

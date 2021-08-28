/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_lst.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 21:20:10 by jodufour          #+#    #+#             */
/*   Updated: 2021/08/24 23:37:09 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef T_LST_H
# define T_LST_H

# include <stddef.h>
# include <stdbool.h>
# include "t_elem.h"

typedef struct s_lst	t_lst;

struct	s_lst
{
	t_elem	*head;
	t_elem	*min;
	t_elem	*max;
	size_t	size;
	int		med;
};

int		ps_lst_add_back(t_lst *lst, int n);
int		ps_lst_free(t_lst *lst, int ret);
int		ps_lst_get_med(t_lst *lst, size_t size);
int		ps_lst_init(t_lst *lst, int n);
int		ps_lst_rotate_to_head(t_lst *lst, t_elem *new_head, int lst_id);
int		ps_lst_sort_four(t_lst *lst, int lst_id);
int		ps_lst_sort_three(t_lst *lst, int lst_id);
int		ps_lst_sort_two(t_lst *lst, int lst_id);

bool	ps_lst_is_in(t_lst *lst, int n);
bool	ps_lst_is_sort(t_elem *elem, size_t size);
bool	ps_lst_is_sort_rev(t_elem *elem, size_t size);

void	ps_lst_push_back(t_lst *lst, t_elem *elem);
void	ps_lst_push_front(t_lst *lst, t_elem *elem);
void	ps_lst_set_all(t_lst *lst, t_elem *head, size_t size);

t_elem	*ps_lst_get_max(t_lst *lst, size_t size);
t_elem	*ps_lst_get_min(t_lst *lst, size_t size);

t_lst	*a_lst(void);
t_lst	*b_lst(void);

#endif

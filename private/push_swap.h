/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 09:37:03 by jodufour          #+#    #+#             */
/*   Updated: 2021/08/26 22:19:06 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "type/t_lst.h"
# include "type/t_ans.h"
# include "type/t_int.h"

int		ps_check_args(char const **av);
int		ps_check_format(char const **av);
int		ps_check_value(int n, char const *s);
int		ps_get_arg(char const **av);
int		ps_quick_sort(t_lst *const a, size_t size, int piv, t_ans *const ans);
int		ps_quick_sort_rev(t_lst *const b, size_t size, int piv,
			t_ans *const ans);
int		ps_valcmp(char const *s, char const *nb);

bool	ps_issign(char const c);

void	ps_err_msg(int errno);

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_elem.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 15:15:12 by jodufour          #+#    #+#             */
/*   Updated: 2021/07/08 20:12:17 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef T_ELEM_H
# define T_ELEM_H

typedef struct s_elem	t_elem;

struct	s_elem
{
	int		n;
	t_elem	*next;
	t_elem	*prev;
};

#endif

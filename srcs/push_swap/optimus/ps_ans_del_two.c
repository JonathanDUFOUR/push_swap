/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_ans_del_two.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 14:56:58 by jodufour          #+#    #+#             */
/*   Updated: 2021/08/18 02:26:22 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "type/t_ans.h"

void	ps_ans_del_two(t_ans *ans, t_step *action, t_step *cancel)
{
	ps_ans_del_one(ans, action);
	ps_ans_del_one(ans, cancel);
}

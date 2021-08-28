/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_ans_print.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 15:43:02 by jodufour          #+#    #+#             */
/*   Updated: 2021/08/18 02:27:06 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "type/t_ans.h"
#include "put_op_lookup.h"
#include "enum/e_op.h"

void	ps_ans_print(t_ans *ans)
{
	t_step	*step;

	step = ans->head;
	while (step)
	{
		write(1, g_put_op[step->op].name, g_put_op[step->op].len);
		step = step->next;
	}
}

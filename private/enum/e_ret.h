/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   e_ret.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/03 01:10:46 by jodufour          #+#    #+#             */
/*   Updated: 2021/08/15 11:21:48 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef E_RET_H
# define E_RET_H

enum	e_ret
{
	SUCCESS,
	ARG_ERRNO,
	DATA_ERRNO,
	MALLOC_ERRNO,
	INT_LIMITS_ERRNO,
	UNIQ_ERRNO,
	INPUT_ERRNO,
	GNL_ERRNO,
	ANSWER_ERRNO,
	LST_ID_ERRNO,
	PROCESS_ERRNO,
	NO_SOLVE_ERRNO,
};

#endif

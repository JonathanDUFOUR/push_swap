/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 04:59:11 by jodufour          #+#    #+#             */
/*   Updated: 2021/08/26 19:13:59 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H

int		ps_answer_apply(void);
int		ps_answer_verif(void);
int		ps_check_args(char const **av);

void	ps_err_msg(int errno);

#endif

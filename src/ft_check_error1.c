/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_error1.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelorria <jelorria@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 19:23:58 by jelorria          #+#    #+#             */
/*   Updated: 2022/09/29 19:24:24 by jelorria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_check_error1(void *param, char **argv)
{
	t_program	*m;

	m = param;
	if (!ft_check_arg(argv[1]))
	{
		ft_write_error();
	}
}

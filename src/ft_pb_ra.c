/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pb_ra.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelorria <jelorria@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 14:05:28 by jelorria          #+#    #+#             */
/*   Updated: 2022/09/29 14:05:30 by jelorria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_pb_ra(void *param)
{
	t_program	*m;

	m = param;
	if (m->mtrx_a[0][m->dec_pos] == '0')
	{
		ft_pb(&*m);
		write(1, "pb\n", 3);
	}
	else
	{
		ft_ra(&*m, m->mtrx_a, m->a_len);
		write(1, "ra\n", 3);
	}
}

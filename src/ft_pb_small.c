/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pb_small.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelorria <jelorria@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 14:05:55 by jelorria          #+#    #+#             */
/*   Updated: 2022/09/29 14:05:58 by jelorria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_pb_small_real(int *stack_a, int *stack_b)
{
	stack_b[0] = stack_a[0];
	stack_a[0] = 0;
}

void	ft_pb_small(void *param)
{
	t_program	*m;
	int			temp;

	m = param;
	ft_reorder_down_small(m->temp_b_int);
	ft_pb_small_real(m->temp_a_int, m->temp_b_int);
	ft_reorder_up_small(&*m);
	write(1, "pb\n", 3);
	if (m->temp_b_int[0] < m->temp_b_int[1])
	{
		temp = m->temp_b_int[0];
		m->temp_b_int[0] = m->temp_b_int[1];
		m->temp_b_int[1] = temp;
		write(1, "sb\n", 3);
	}
	m->counter ++;
}

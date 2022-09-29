/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_order_small5.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelorria <jelorria@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 14:03:28 by jelorria          #+#    #+#             */
/*   Updated: 2022/09/29 14:03:51 by jelorria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_order_three_on_five(int *stack_a)
{
	if (stack_a[0] == 11 && stack_a[1] == 101)
		write(1, "sa\nra\n", 6);
	else if (stack_a[0] == 12 && stack_a[1] == 101)
		write(1, "rra\n", 4);
	else if (stack_a[0] == 12 && stack_a[1] == 11)
		write(1, "sa\n", 3);
	else if (stack_a[0] == 101 && stack_a[1] == 12)
		write(1, "sa\nrra\n", 7);
	else if (stack_a[0] == 101 && stack_a[1] == 11)
		write(1, "ra\n", 3);
	stack_a[0] = 11;
	stack_a[1] = 12;
	stack_a[2] = 101;
}

void	ft_5_loop_shorter(void *param)
{
	t_program	*m;

	m = param;
	ft_pb_small(&*m);
	m->f = 1;
	m->reverse_len--;
}

void	ft_order_five_loop(void *param)
{
	t_program	*m;

	m = param;
	while (m->f < 6 || m->counter < 2)
	{
		if (m->temp_a_int[m->z] == 2)
		{
			ft_5_loop_shorter(&*m);
		}
		else if (m->temp_a_int[m->z] == 1)
		{
			ft_pb_small(&*m);
			m->reverse_len--;
		}
		else if (m->temp_a_int[m->reverse_len] == 2)
		{
			ft_rra_small(m->temp_a_int, m->reverse_len);
			ft_pb_small(&*m);
		}
		else
			ft_ra_small(&*m);
		m->z = 0;
		m->f ++;
	}
}

void	ft_order_five(void *param)
{
	t_program	*m;

	m = param;
	m->z = 0;
	m->f = 0;
	m->counter = 0;
	m->reverse_len = m->total_len - 1;
	m->temp_b_int = (int *)malloc((m->total_len) * sizeof(int));
	while (m->z < m->total_len)
	{
		m->temp_b_int[m->z] = 0;
		m->z ++;
	}
	m->z = 0;
	ft_order_five_loop(&*m);
	ft_order_three_on_five(m->temp_a_int);
	write(1, "pa\npa\n", 6);
	free(m->temp_b_int);
}

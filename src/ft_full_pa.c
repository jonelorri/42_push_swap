/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_full_pa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelorria <jelorria@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 13:59:14 by jelorria          #+#    #+#             */
/*   Updated: 2022/09/29 13:59:16 by jelorria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_reorder_down_a(void *param, char **matrix, int big_int)
{
	t_program	*m;
	int			real_len;

	m = param;
	real_len = m->a_len;
	while (real_len > 0)
	{
		ft_memcpy(matrix[real_len], matrix[real_len - 1], big_int);
		real_len --;
	}
}

void	ft_reorder_up_b(void *param, char **matrix, int len)
{
	t_program	*m;
	int			temp_len;
	int			z;

	m = param;
	temp_len = len;
	z = 0;
	while (z < temp_len - 1)
	{
		ft_memcpy(matrix[z], matrix[z + 1], m->big_int);
		z ++;
	}
}

void	ft_full_pa(void *param)
{
	t_program	*m;

	m = param;
	while (m->b_len > 0)
	{
		ft_reorder_down_a(&*m, m->mtrx_a, m->big_int);
		ft_memcpy(m->mtrx_a[0], m->mtrx_b[0], m->big_int);
		ft_reorder_up_b(&*m, m->mtrx_b, m->total_len);
		write(1, "pa\n", 3);
		m->b_len --;
		m->a_len ++;
	}
}

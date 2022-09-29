/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelorria <jelorria@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 14:04:23 by jelorria          #+#    #+#             */
/*   Updated: 2022/09/29 14:05:15 by jelorria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_reorder_down(void *param, char **matrix, int len)
{
	t_program	*m;
	int			temp_len;

	m = param;
	temp_len = len;
	while (temp_len > 0)
	{
		ft_memcpy(matrix[temp_len], matrix[temp_len - 1], m->big_int);
		temp_len --;
	}
}

void	ft_reorder_up(void *param, char **matrix, int len)
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

void	ft_pb(void *param)
{
	t_program	*m;

	m = param;
	ft_reorder_down(&*m, m->mtrx_b, m->b_len);
	ft_memcpy(m->mtrx_b[0], m->mtrx_a[0], m->big_int);
	ft_reorder_up(&*m, m->mtrx_a, m->a_len);
	m->b_len ++;
	m->a_len --;
}

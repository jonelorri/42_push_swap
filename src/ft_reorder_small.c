/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reorder_small.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelorria <jelorria@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 14:08:03 by jelorria          #+#    #+#             */
/*   Updated: 2022/09/29 14:08:06 by jelorria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_reorder_down_small(int *stack)
{
	int	i;

	i = 0;
	while (stack[i])
		i ++;
	while (i > 0)
	{
		stack[i] = stack[i - 1];
		i --;
	}
}

void	ft_reorder_up_small(void *param)
{
	t_program	*m;
	int			len;

	m = param;
	len = 1;
	m->i = 0;
	while (len < m->total_len && m->temp_a_int[len])
		len ++;
	while (m->i < len - 1)
	{
		m->temp_a_int[m->i] = m->temp_a_int[m->i + 1];
		m->i ++;
	}
}

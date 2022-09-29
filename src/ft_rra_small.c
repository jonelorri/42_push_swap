/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rra_small.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelorria <jelorria@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 14:08:35 by jelorria          #+#    #+#             */
/*   Updated: 2022/09/29 14:08:48 by jelorria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_reorder_down_rra(int *stack, int len)
{
	int	i;

	i = len;
	while (i > 0)
	{
		stack[i] = stack[i - 1];
		i --;
	}
}

void	ft_rra_small(int *stack_a, int len)
{
	ft_reorder_down_rra(stack_a, len);
	stack_a[0] = stack_a[len];
	write(1, "rra\n", 4);
}

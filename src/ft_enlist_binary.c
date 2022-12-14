/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_enlist_binary.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelorria <jelorria@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 13:56:40 by jelorria          #+#    #+#             */
/*   Updated: 2022/09/29 13:56:47 by jelorria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_to_binary(int x)
{
	if (x == 0)
		return (x);
	else
		return (ft_to_binary(x / 2) * 10 + x % 2);
}

void	ft_enlist_binary(int *stack_a, int len)
{
	int	i;

	i = 0;
	while (i < len)
	{
		stack_a[i] = ft_to_binary(stack_a[i]);
		i ++;
	}
}

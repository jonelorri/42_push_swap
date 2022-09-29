/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_to_positive.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelorria <jelorria@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 14:09:17 by jelorria          #+#    #+#             */
/*   Updated: 2022/09/29 14:09:18 by jelorria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_to_positive(int *stack_a, int *new_stack, int len)
{
	int	z;
	int	i;

	z = 0;
	i = 0;
	while (z < len)
	{
		if (i < len && stack_a[i] == new_stack[z])
		{
			stack_a[i] = z;
			i ++;
			z = 0;
		}
		else
			z ++;
	}
}

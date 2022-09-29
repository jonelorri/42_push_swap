/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ordered.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelorria <jelorria@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 14:04:06 by jelorria          #+#    #+#             */
/*   Updated: 2022/09/29 14:04:07 by jelorria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_ordered(int *new_stack, int len)
{
	int	i;
	int	temp;
	int	z;

	z = 0;
	i = 0;
	while (z < len)
	{
		while (i < len - 1)
		{
			if (new_stack[i] > new_stack[i + 1])
			{
				temp = new_stack[i];
				new_stack[i] = new_stack[i + 1];
				new_stack[i + 1] = temp;
			}
			else
				i ++;
		}
		i = 0;
		z ++;
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_duplicates.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelorria <jelorria@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 13:44:10 by jelorria          #+#    #+#             */
/*   Updated: 2022/09/29 13:45:17 by jelorria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_duplicates(int *stack, int len)
{
	int	i;
	int	z;

	i = 0;
	z = 1;
	while (i < len)
	{
		while (z < len)
		{
			if (stack[i] == stack[z])
				return (0);
			z++;
		}
		i ++;
		z = i + 1;
	}
	return (1);
}

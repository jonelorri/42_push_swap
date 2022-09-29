/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_copy_stacks.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelorria <jelorria@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 13:56:04 by jelorria          #+#    #+#             */
/*   Updated: 2022/09/29 13:56:30 by jelorria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_copy_stacks(int *new_stack, int *stack_a, int len)
{
	int	i;

	i = 0;
	while (i < len)
	{
		new_stack[i] = stack_a[i];
		i ++;
	}
}

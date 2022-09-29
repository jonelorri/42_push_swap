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

void	ft_rra_small(int *stack_a)
{
	int	temp;
	int	temp2;
	int	temp3;
	int	temp4;
	int	temp5;

	temp = stack_a[0];
	stack_a[0] = stack_a[4];
	temp2 = stack_a[1];
	stack_a[1] = temp;
	temp3 = stack_a[2];
	stack_a[2] = temp2;
	temp4 = stack_a[3];
	stack_a[3] = temp3;
	temp5 = stack_a[4];
	stack_a[4] = temp4;

	write(1, "rra\n", 4);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_order_small3.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelorria <jelorria@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 14:00:13 by jelorria          #+#    #+#             */
/*   Updated: 2022/09/29 14:03:05 by jelorria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_order_three(int *stack_a)
{
	if (stack_a[0] == 0)
		write(1, "sa\nra\n", 6);
	else if (stack_a[0] < stack_a[1])
		write(1, "rra\n", 4);
	else if (stack_a[0] == 1)
		write(1, "sa\n", 3);
	else if (stack_a[1] == 1)
		write(1, "sa\nrra\n", 7);
	else
		write(1, "ra\n", 3);
}

int	ft_is_it_ordered(int *stack, int len)
{
	int	i;

	i = 0;
	while (i < len)
	{
		if (i < len - 1 && stack[i] < stack[i + 1])
			i ++;
		else
			break ;
	}
	if (i == len - 1)
		return (1);
	return (0);
}

int	ft_is_it_ordered2(char **matrix, int len)
{
	int	i;
	int	real_len;
	int	*new_stack;
	int	result;

	new_stack = (int *)malloc(len * sizeof(int));
	real_len = 0;
	i = 0;
	while (real_len < len && ft_strlen(matrix[real_len]) > 0)
		real_len ++;
	if (real_len < len)
	{
		free(new_stack);
		return (0);
	}
	while (i < real_len)
	{
		new_stack[i] = ft_atoi(matrix[i]);
		i ++;
	}
	result = ft_is_it_ordered(new_stack, real_len);
	free(new_stack);
	return (result);
}

void	ft_reorder_stack_a_simple(int *stack_a, int len)
{
	int	i;

	i = 0;
	while (i < len)
	{
		stack_a[i] = stack_a[i] + 1;
		i ++;
	}
}

int	ft_order_small(void *param)
{
	t_program	*m;

	m = param;
	if (m->total_len == 3 && ft_is_it_ordered2(m->mtrx_a, m->total_len) == 0)
	{
		ft_order_three(m->temp_a_int);
		return (0);
	}
	if (m->total_len == 5 && ft_is_it_ordered2(m->mtrx_a, m->total_len) == 0)
	{
		ft_reorder_stack_a_simple(m->temp_a_int, m->total_len);
		ft_order_five(&*m);
		return (0);
	}
	return (1);
}

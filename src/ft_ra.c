/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ra.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelorria <jelorria@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 14:06:19 by jelorria          #+#    #+#             */
/*   Updated: 2022/09/29 14:06:45 by jelorria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_ra(void *param, char **matrix, int len)
{
	t_program	*m;
	int			i;
	char		*temp;

	m = param;
	i = 0;
	temp = (char *)malloc(m->big_int * sizeof(char));
	ft_memcpy(temp, matrix[0], m->big_int);
	while (i < len - 1)
	{
		ft_memcpy(matrix[i], matrix[i + 1], m->big_int);
		i ++;
	}
	ft_memcpy(matrix[len - 1], temp, m->big_int);
	free(temp);
}

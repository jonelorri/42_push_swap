/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_cero.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelorria <jelorria@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 13:41:22 by jelorria          #+#    #+#             */
/*   Updated: 2022/09/29 13:41:54 by jelorria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_add_cero(char *array)
{
	int	i;
	int	len;

	i = 1;
	len = ft_strlen(array) + 1;
	while (i < len)
	{
		array[len - i] = array[len - i - 1];
		i ++;
	}
	array[0] = '0';
	array[len] = '\0';
}

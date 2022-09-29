/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelorria <jelorria@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 13:58:03 by jelorria          #+#    #+#             */
/*   Updated: 2022/09/29 13:58:36 by jelorria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_free_mtrx(char **mtrx, int len)
{
	int	i;

	i = 0;
	while (i < len)
	{
		free(mtrx[i]);
		i ++;
	}
	free(mtrx);
}

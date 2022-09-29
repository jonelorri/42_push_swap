/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ra_small.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelorria <jelorria@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 14:07:36 by jelorria          #+#    #+#             */
/*   Updated: 2022/09/29 14:07:54 by jelorria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_ra_small(void *param)
{
	t_program	*m;
	int			real_len;
	int			temp;

	m = param;
	real_len = 0;
	m->i = 0;
	while (real_len < m->total_len && m->temp_a_int[real_len] != '\0')
		real_len ++;
	temp = m->temp_a_int[0];
	while (m->i < real_len - 1)
	{
		m->temp_a_int[m->i] = m->temp_a_int[m->i + 1];
		m->i ++;
	}
	m->temp_a_int[m->i - 1] = temp;
	write(1, "ra\n", 3);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelorria <jelorria@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 14:09:33 by jelorria          #+#    #+#             */
/*   Updated: 2022/09/29 14:10:07 by jelorria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_initialize_stack(void *param, int argc, char **argv)
{
	t_program	*m;

	m = param;
	if (m->total_len == 0)
	{
		m->temp_a_int = (int *)malloc(sizeof(int) * (argc - 1));
		m->total_len = argc - 1;
		m->i = 0;
		while (m->i < argc - 1)
		{
			m->temp_a_int[m->i] = ft_atoi(argv[m->i + 1]);
			m->i ++;
		}
		return ;
	}
	m->temp_a_int = (int *)malloc(sizeof(int) * (m->total_len));
	m->i = 0;
	while (m->i < m->total_len)
	{
		m->temp_a_int[m->i] = ft_atoi(m->temp_a_mtrx[m->i]);
		m->i ++;
	}
	ft_free_mtrx(m->temp_a_mtrx, m->total_len);
}

void	ft_start(void *param)
{
	t_program	*m;

	m = param;
	if (!ft_duplicates(m->temp_a_int, m->total_len))
	{
		free(m->temp_a_int);
		ft_write_error();
	}
	m->temp_new_int = (int *)malloc(sizeof(int) * m->total_len);
	ft_copy_stacks(m->temp_new_int, m->temp_a_int, m->total_len);
	ft_ordered(m->temp_new_int, m->total_len);
	ft_to_positive(m->temp_a_int, m->temp_new_int, m->total_len);
	ft_enlist_binary(m->temp_a_int, m->total_len);
	m->big_int = ft_big_int_size(m->temp_a_int, m->total_len);
	m->mtrx_a = (char **)malloc((m->total_len) * sizeof(char *));
	ft_fill_mtrx(&*m);
	m->mtrx_b = (char **)malloc((m->total_len) * sizeof(char *));
	m->i = 0;
	while (m->i < m->total_len)
	{
		m->mtrx_b[m->i] = (char *)malloc(m->big_int * sizeof(char));
		m->i ++;
	}
}

void	ft_execute(void *param)
{
	t_program	*m;

	m = param;
	while (m->dec_pos >= 0)
	{
		if (ft_order_small(&*m) == 1)
		{
			if (ft_is_it_ordered2(m->mtrx_a, m->total_len) == 0)
			{
				while (m->i < m->total_len)
				{
					ft_pb_ra(&*m);
					m->i ++;
					if (ft_is_it_ordered2(m->mtrx_a, m->total_len) == 1)
						break ;
				}
				ft_full_pa(&*m);
			}
		}
		else
			break ;
		m->i = 0;
		m->dec_pos --;
	}
}

int	main(int argc, char *argv[])
{
	t_program	m;

	m.total_len = 0;
	m.b_len = 0;
	ft_check_error(&m, argc, argv);
	ft_initialize_stack(&m, argc, argv);
	ft_start(&m);
	m.a_len = m.total_len;
	m.mtrx_b[0][0] = '\0';
	m.dec_pos = m.big_int - 1;
	ft_execute(&m);
	free(m.temp_new_int);
	free(m.temp_a_int);
	ft_free_mtrx(m.mtrx_a, m.total_len);
	ft_free_mtrx(m.mtrx_b, m.total_len);
	return (0);
}

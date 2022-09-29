/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_error.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelorria <jelorria@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 13:45:28 by jelorria          #+#    #+#             */
/*   Updated: 2022/09/29 19:28:07 by jelorria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_write_error(void)
{
	write(1, "Error\n", 6);
	exit(1);
}

void	ft_is_big(char *arg)
{
	int	i;

	i = 0;
	while (arg[i])
		i ++;
	if (arg[0] == '-')
	{
		if (i > 11)
			ft_write_error();
		else if (i == 11 && (arg[10] == '8' || arg[10] == '9'))
			ft_write_error();
	}
	else
	{
		if (i > 10)
			ft_write_error();
		else if (i == 10 && (arg[9] == '8' || arg[9] == '9'))
			ft_write_error();
	}
}

void	ft_check_more_errors(char **argv, int argc)
{
	if (!ft_check_args(argv))
		ft_write_error();
	else if (argc == 3)
	{
		if (ft_atoi(argv[1]) > ft_atoi(argv[2]))
			write(1, "ra\n", 3);
		exit(0);
	}
}

void	ft_check_more_errors2(void *param, char **argv)
{
	t_program	*m;

	m = param;
	m->temp_a_mtrx = ft_split(argv[1], ' ');
	while (m->temp_a_mtrx[m->i])
		m->i ++;
	if (m->i == 1)
	{
		ft_check_error1(&*m, argv);
	}
	if (m->i == 2 && !ft_check_args(m->temp_a_mtrx))
	{
		ft_free_mtrx(m->temp_a_mtrx, 2);
		ft_write_error();
	}
}

void	ft_check_error(void *param, int argc, char **argv)
{
	t_program	*m;

	m = param;
	m->i = 0;
	if (argc == 1)
		exit (0);
	else if (argc == 2)
	{
		ft_check_more_errors2(&*m, argv);
		if (m->i == 2 && atoi(m->temp_a_mtrx[0]) > atoi(m->temp_a_mtrx[1]))
		{
			ft_free_mtrx(m->temp_a_mtrx, 2);
			write(1, "ra\n", 3);
			exit(0);
		}
		m->total_len = m->i;
		if (!ft_check_args2(m->temp_a_mtrx, m->total_len))
		{
			ft_free_mtrx(m->temp_a_mtrx, m->total_len);
			ft_write_error();
		}
	}
	else
		ft_check_more_errors(argv, argc);
}

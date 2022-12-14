/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_args.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelorria <jelorria@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 13:43:33 by jelorria          #+#    #+#             */
/*   Updated: 2022/09/29 19:23:38 by jelorria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_check_args(char **args)
{
	int		i;
	int		z;
	char	arg;

	i = 0;
	z = 0;
	while (args[i + 1])
		i++;
	while (i > 0)
	{
		ft_is_big(args[i]);
		while (args[i][z])
		{
			arg = args[i][z];
			if (((arg >= 48 && arg <= 57) || arg == 45) == 0)
				return (0);
			z ++;
		}
		z = 0;
		i --;
	}
	return (1);
}

int	ft_check_arg(char *arg)
{
	int	i;
	int	z;

	i = 0;
	z = 0;
	ft_is_big(arg);
	while (arg[i])
	{
		i ++;
	}
	while (z < i)
	{
		if (((arg[z] >= 48 && arg[z] <= 57) || arg[z] == 45) == 0)
			return (0);
		z ++;
	}
	return (1);
}

int	ft_check_args2(char **args, int len)
{
	int		i;
	int		z;
	char	arg;

	i = len - 1;
	z = 0;
	while (i >= 0)
	{
		ft_is_big(args[i]);
		while (args[i][z])
		{
			arg = args[i][z];
			if (((arg >= 48 && arg <= 57) || arg == 45) == 0)
				return (0);
			z ++;
		}
		z = 0;
		i --;
	}
	return (1);
}

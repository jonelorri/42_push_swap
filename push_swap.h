/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelorria <jelorria@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 17:42:14 by jelorria          #+#    #+#             */
/*   Updated: 2022/09/26 18:01:54 by jelorria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_program
{
	int		i;
	int		total_length;
	int		b_length;
	int		a_length;
	char	**temp_a_mtrx;
	int		*temp_a_int;
	int		*temp_new_int;
}			t_program;

void	ft_check_error(void *param, int argc, char **argv);
int		ft_atoi(const char *str);
char	**ft_split(const char *s, char c);
size_t	ft_strlen(const char *s);
void	ft_free_mtrx(char **mtrx, int len);
void	ft_is_big(char *arg);
int		ft_check_args2(char **args, int len);
int		ft_check_args(char **args);
void	*ft_memcpy(void *dst, const void *src, size_t n);
int 	ft_duplicates_mtx(char **mtrx, int len);
int		ft_duplicates_argv(char **argv, int len);
void	ft_ordered(int *new_stack, int len);
void	ft_copy_stacks(int *new_stack, int *stack_a, int len);

#endif
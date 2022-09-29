/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelorria <jelorria@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 17:42:14 by jelorria          #+#    #+#             */
/*   Updated: 2022/09/29 14:10:44 by jelorria         ###   ########.fr       */
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
	int		total_len;
	int		b_len;
	int		a_len;
	char	**temp_a_mtrx;
	int		*temp_a_int;
	int		*temp_new_int;
	int		big_int;
	char	**mtrx_a;
	char	**mtrx_b;
	int		dec_pos;
	int		z;
	int		counter;
	int		small_pb_counter;
	int		reverse_len;
	int		*temp_b_int;
}			t_program;

void	ft_check_error(void *param, int argc, char **argv);
int		ft_atoi(const char *str);
char	**ft_split(const char *s, char c);
size_t	ft_strlen(const char *s);
void	ft_write_error(void);
void	ft_free_mtrx(char **mtrx, int len);
void	ft_is_big(char *arg);
int		ft_check_args2(char **args, int len);
int		ft_check_args(char **args);
void	*ft_memcpy(void *dst, const void *src, size_t n);
int		ft_duplicates(int *stack, int len);
void	ft_ordered(int *new_stack, int len);
void	ft_copy_stacks(int *new_stack, int *stack_a, int len);
void	ft_to_positive(int *stack_a, int *new_stack, int len);
void	ft_enlist_binary(int *stack_a, int len);
int		ft_big_int_size(int *array, int len);
void	ft_fill_mtrx(void *param);
char	*ft_itoa(int n);
void	ft_add_cero(char *array);
void	*ft_memcpy2(void *dst, const void *src, size_t n);
int		ft_order_small(void *param);
void	ft_order_five(void *param);
int		ft_is_it_ordered2(char **matrix, int len);
void	ft_pb_small(void *param);
void	ft_reorder_down_small(int *stack_b);
void	ft_reorder_up_small(void *param);
void	ft_rra_small(int *stack_a);
void	ft_ra_small(void *param);
void	ft_pb_ra(void *param);
void	ft_pb(void *param);
void	ft_ra(void *param, char **matrix, int len);
void	ft_full_pa(void *param);
void	ft_print_mtrx(char **mtrx, int len);
void	ft_check_error1(void *param, char **argv);
int		ft_check_arg(char *arg);

#endif

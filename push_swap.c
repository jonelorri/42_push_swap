#include "push_swap.h"

void	ft_print_mtrx(char **mtrx, int len)
{
	int	i;

	i = 0;
	while (i < len)
	{
		printf("%s\n", mtrx[i]);
		i ++;
	}
}

void	ft_print_int(int *stack, int len)
{
	int	i;

	i = 0;
	while (i < len)
	{
		printf("%d\n", stack[i]);
		i ++;
	}
}

void ft_initialize_stack(void *param, int argc, char **argv)
{
	t_program	*m;

	m = param;
	if (m->total_len == 0)
	{
		m->temp_a_int = (int *)malloc(sizeof(int) * (argc - 1));
		m->a_len = argc - 1;
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
	m->pa_counter = m->total_len; // probablemente me sobre el 'pa_counter'
	m->mtrx_b = (char **)malloc((m->total_len) * sizeof(char *));
	m->i = 0;
	while (m->i < m->total_len)
	{
		m->mtrx_b[m->i] = (char *)malloc(m->big_int * sizeof(char));
		m->i ++;
	}
	ft_print_mtrx(m->mtrx_a, m->total_len);
	free(m->temp_new_int);
}

int	main(int argc, char *argv[])
{
	t_program	m;

	m.total_len = 0;
	ft_check_error(&m, argc, argv);
	ft_initialize_stack(&m, argc, argv);
	ft_start(&m);


	free(m.temp_a_int);
	ft_free_mtrx(m.mtrx_a, m.total_len);
	ft_free_mtrx(m.mtrx_b, m.total_len);
	return (0);
}
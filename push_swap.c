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
	if (m->total_length == 0)
	{
		m->temp_a_int = (int *)malloc(sizeof(int) * (argc - 1));
		m->a_length = argc - 1;
		m->total_length = argc - 1;
		m->i = 0;
		while (m->i < argc - 1)
		{
			m->temp_a_int[m->i] = ft_atoi(argv[m->i + 1]);
			m->i ++;
		}
		return ;
	}
	m->temp_a_int = (int *)malloc(sizeof(int) * (m->total_length));
	m->i = 0;
	while (m->i < m->total_length)
	{
		m->temp_a_int[m->i] = ft_atoi(m->temp_a_mtrx[m->i]);
		m->i ++;
	}
	ft_free_mtrx(m->temp_a_mtrx, m->total_length);
}

void	ft_start(void *param)
{
	t_program	*m;

	m = param;
	m->temp_new_int = (int *)malloc(sizeof(int) * m->total_length);
	ft_copy_stacks(m->temp_new_int, m->temp_a_int, m->total_length);
	ft_ordered(m->temp_new_int, m->total_length);
	free(m->temp_new_int);
}

int	main(int argc, char *argv[])
{
	t_program	m;

	m.total_length = 0;
	ft_check_error(&m, argc, argv);
	ft_initialize_stack(&m, argc, argv);
	ft_start(&m);
	ft_print_int(m.temp_a_int, m.total_length);
	free(m.temp_a_int);
	return (0);
}
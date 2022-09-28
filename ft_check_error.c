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

void	ft_check_error(void *param, int argc, char **argv)
{
	t_program	*m;

	m = param;
    m->i = 0;
	if (argc == 1)
		exit(1);
	else if (argc == 2)
	{
        m->temp_a_mtrx = ft_split(argv[1], ' ');
        while (m->temp_a_mtrx[m->i])
            m->i ++;
		if (m-> i == 1)
		{
            ft_free_mtrx(m->temp_a_mtrx, 1);
            exit(0);
		}
        m->a_len = m->i;
        m->total_len = m->i;
        if (!ft_check_args2(m->temp_a_mtrx, m->a_len))
        {
            ft_free_mtrx(m->temp_a_mtrx, m->total_len);
            ft_write_error();
        }
    }
	else
		ft_check_more_errors(argv, argc);
}
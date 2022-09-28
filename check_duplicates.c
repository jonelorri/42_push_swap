#include "push_swap.h"

int ft_duplicates_mtx(char **mtrx, int len)
{
	int	i;
	int	z;

	i = 0;
	z = 1;
	while (i < len)
	{
		while (z < len)
		{
			if (*mtrx[i] == *mtrx[z])
				return (0);
            z++;
		}
		i ++;
		z = i + 1;
	}
    return (1);
}

int ft_duplicates_argv(char **argv, int len)
{
	int	i;
	int	z;

	i = 1;
	z = 2;
	while (i < len)
	{
		while (z < len)
		{
			if (*argv[i] == *argv[z])
				return (0);
            z++;
		}
		i ++;
		z = i + 1;
	}
    return (1);
}
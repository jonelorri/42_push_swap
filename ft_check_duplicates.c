#include "push_swap.h"

int	ft_duplicates(int *stack, int len)
{
	int	i;
	int	z;

	i = 0;
	z = 1;
	while (i < len)
	{
		while (z < len)
		{
			if (stack[i] == stack[z])
				return (0);
            z++;
		}
		i ++;
		z = i + 1;
	}
    return (1);
}
#include "push_swap.h"

int	ft_big_int_size(int *array, int len)
{
	int	i;
	int	x;
	int	rest;
	int	result;

	x = 1;
	i = 0;
	result = 1;
	while (i < len)
	{
		rest = array[i];
		while (1)
		{
			rest = rest / 10;
			if (rest >= 1)
				x ++;
			else
				break ;
		}
		if (x > result)
			result = x;
		x = 1;
		i ++;
	}
	return (result);
}
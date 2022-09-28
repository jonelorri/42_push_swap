#include "push_swap.h"

void	ft_ordered(int *new_stack, int len)
{
	int	i;
	int	temp;
	int	z;

	z = 0;
	i = 0;
	while (z < len)
	{
		while (i < len - 1)
		{
			if (new_stack[i] > new_stack[i + 1])
			{
				temp = new_stack[i];
				new_stack[i] = new_stack[i + 1];
				new_stack[i + 1] = temp;
			}
			else
				i ++;
		}
		i = 0;
		z ++;
	}
}
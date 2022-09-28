#include "push_swap.h"

void	ft_to_positive(int *stack_a, int *new_stack, int len)
{
	int	z;
	int	i;

	z = 0;
	i = 0;
	while (z < len)
	{
		if (i < len && stack_a[i] == new_stack[z])
		{
			stack_a[i] = z;
			i ++;
			z = 0;
		}
		else
			z ++;
	}
}
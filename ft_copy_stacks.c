#include "push_swap.h"

void	ft_copy_stacks(int *new_stack, int *stack_a, int len)
{
	int	i;

	i = 0;
	while (i < len)
	{
		new_stack[i] = stack_a[i];
		i ++;
	}
}
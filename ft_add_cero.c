#include "push_swap.h"

void	ft_add_cero(char *array)
{
	int	i;
	int	len;

	i = 1;
	len = ft_strlen(array) + 1;
	while (i < len)
	{
		array[len - i] = array[len - i - 1];
		i ++;
	}
	array[0] = '0';
	array[len] = '\0';
}
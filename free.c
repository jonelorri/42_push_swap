#include "push_swap.h"

void	ft_free_mtrx(char **mtrx, int len)
{
    int i;

	i = 0;
	while (i < len)
	{
		free(mtrx[i]);
		i ++;
	}
	free(mtrx);
}
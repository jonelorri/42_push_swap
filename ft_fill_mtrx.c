#include "push_swap.h"

void	ft_fill_mtrx(void *param)
{
	t_program	*m;
	char	*temp;

	m = param;
    m->i = 0;
	while (m->i < m->total_len)
	{
		temp = ft_itoa(m->temp_a_int[m->i]);
		m->mtrx_a[m->i] = (char *)malloc(m->big_int + 1 * sizeof(char));
		ft_memcpy2(m->mtrx_a[m->i], temp, ft_strlen(temp));
		free(temp);
		while (ft_strlen(m->mtrx_a[m->i]) < (size_t)m->big_int)
		{
			ft_add_cero(m->mtrx_a[m->i]);
		}
		m->i ++;
	}
}
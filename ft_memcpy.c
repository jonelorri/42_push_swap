#include "push_swap.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	if (!dst && !src)
		return (NULL);
	while (n--)
		*(char *)(dst + n) = *(char *)(src + n);
	return (dst);
}
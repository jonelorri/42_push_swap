/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelorria <jelorria@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 13:59:47 by jelorria          #+#    #+#             */
/*   Updated: 2022/09/29 13:59:49 by jelorria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	if (!dst && !src)
		return (NULL);
	while (n--)
		*(char *)(dst + n) = *(char *)(src + n);
	return (dst);
}

void	*ft_memcpy2(void *dst, const void *src, size_t n)
{
	if (!dst && !src)
		return (NULL);
	*(char *)(dst + n) = '\0';
	while (n--)
		*(char *)(dst + n) = *(char *)(src + n);
	return (dst);
}

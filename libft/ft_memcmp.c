/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tasikimu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 10:18:12 by tasikimu          #+#    #+#             */
/*   Updated: 2018/06/21 15:48:45 by tasikimu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*dst;
	unsigned char	*src;

	i = 0;
	dst = (unsigned char *)s1;
	src = (unsigned char *)s2;
	while (i < n)
	{
		if (dst[i] != src[i])
			return (dst[i] - src[i]);
		dst++;
		src++;
		n--;
	}
	return (0);
}

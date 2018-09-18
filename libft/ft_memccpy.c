/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tasikimu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/25 12:02:57 by tasikimu          #+#    #+#             */
/*   Updated: 2018/06/01 10:57:32 by tasikimu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void					*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*a;
	unsigned char	*b;
	unsigned char	d;

	i = 0;
	a = (unsigned char *)dst;
	b = (unsigned char *)src;
	d = (unsigned char)c;
	while (i < n)
	{
		a[i] = b[i];
		if (a[i] == d)
			return (&a[i + 1]);
		i++;
	}
	return (NULL);
}

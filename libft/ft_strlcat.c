/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tasikimu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/05 15:20:19 by tasikimu          #+#    #+#             */
/*   Updated: 2018/06/06 15:22:08 by tasikimu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t i;
	size_t a;
	size_t b;

	i = 0;
	a = ft_strlen(src);
	while (dst[i] && i < dstsize)
		i++;
	if (dstsize - i == 0)
		return (a + i);
	b = i;
	while (src[i - b] != '\0' && i < dstsize - 1)
	{
		dst[i] = src[i - b];
		i++;
	}
	if (b < dstsize)
		dst[i] = '\0';
	return (a + b);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tasikimu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/30 11:37:01 by tasikimu          #+#    #+#             */
/*   Updated: 2018/06/01 10:59:52 by tasikimu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*a;
	unsigned char	*b;

	i = 0;
	a = (unsigned char *)dst;
	b = (unsigned char *)src;
	if (len <= 0)
		return (a);
	if (b >= a)
		ft_memcpy(a, b, len);
	else
	{
		while (len > 0)
		{
			a[len - 1] = b[len - 1];
			len--;
		}
	}
	return (a);
}

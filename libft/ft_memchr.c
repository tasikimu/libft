/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tasikimu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/30 11:29:27 by tasikimu          #+#    #+#             */
/*   Updated: 2018/06/22 11:59:51 by tasikimu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t v;

	v = 0;
	while (v < n)
	{
		if (*(unsigned char*)(s + v) == (unsigned char)c)
			return ((void*)(s + v));
		v++;
	}
	return (NULL);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tasikimu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 12:36:11 by tasikimu          #+#    #+#             */
/*   Updated: 2018/05/23 13:16:50 by tasikimu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*d;
	unsigned char	a;

	i = 0;
	d = (unsigned char *)b;
	a = (unsigned char)c;
	while (i < len)
	{
		d[i] = a;
		i++;
	}
	return (d);
}

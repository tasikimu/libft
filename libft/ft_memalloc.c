/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tasikimu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 10:44:01 by tasikimu          #+#    #+#             */
/*   Updated: 2018/06/04 12:53:30 by tasikimu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*str;

	str = (void *)malloc(sizeof(void) * size);
	{
		if (str == NULL || size == 0)
			return (NULL);
	}
	ft_bzero(str, size);
	return (str);
}

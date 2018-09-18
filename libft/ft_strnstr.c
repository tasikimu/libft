/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tasikimu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/05 15:06:55 by tasikimu          #+#    #+#             */
/*   Updated: 2018/06/21 13:15:27 by tasikimu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;
	size_t length;
	size_t i2;

	length = 0;
	while (needle[length] != '\0')
		length++;
	if (length == 0)
		return ((char *)haystack);
	i = 0;
	while (haystack[i] != '\0' && i < len)
	{
		i2 = 0;
		while (needle[i2] != '\0' && (needle[i2] == haystack[i + i2]))
		{
			i2++;
		}
		if (needle[i2] == '\0' && ((i + i2) <= len))
			return ((char *)haystack + i);
		i++;
	}
	return (NULL);
}

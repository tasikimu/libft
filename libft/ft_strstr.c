/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tasikimu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/30 11:04:29 by tasikimu          #+#    #+#             */
/*   Updated: 2018/06/01 11:26:15 by tasikimu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	size_t i;
	size_t a;

	if (ft_strlen((char *)needle) == 0)
		return ((char *)haystack);
	if (ft_strlen((char *)haystack) == 0)
		return (NULL);
	i = 0;
	while (i < ft_strlen(haystack) + 1)
	{
		a = 0;
		while (needle[a] == haystack[a + i])
		{
			if (a == ft_strlen(needle) - 1)
			{
				return ((char *)&haystack[i]);
			}
			a++;
		}
		i++;
	}
	return (NULL);
}

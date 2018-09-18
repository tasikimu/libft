/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tasikimu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/30 13:52:31 by tasikimu          #+#    #+#             */
/*   Updated: 2018/06/22 13:07:06 by tasikimu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int i;

	i = ft_strlen(s);
	while (s[i] != c)
	{
		if (s[i] == c)
			break ;
		if (i <= 0)
			return (NULL);
		i--;
	}
	return ((char *)&s[i]);
}

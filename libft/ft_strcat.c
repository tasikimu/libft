/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tasikimu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/25 10:22:16 by tasikimu          #+#    #+#             */
/*   Updated: 2018/06/01 11:08:10 by tasikimu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	int i;
	int n;

	i = 0;
	n = 0;
	while (s1[i])
		i++;
	while (s2[n])
	{
		s1[i] = s2[n];
		i++;
		n++;
	}
	s1[i] = '\0';
	return (s1);
}
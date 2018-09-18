/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tasikimu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/05 15:04:18 by tasikimu          #+#    #+#             */
/*   Updated: 2018/06/22 12:09:47 by tasikimu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		len;
	int		i;
	int		j;
	char	*final;

	if (!s)
		return (NULL);
	len = ft_strlen(s);
	final = ft_strnew(len + 1);
	if (!final)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	while (i != len && (s[len - 1] == ' ' || s[len - 1] == '\n' ||
				s[len - 1] == '\t'))
		len--;
	if (!(final = (char *)malloc(sizeof(char) * (len - i + 1))))
		return (NULL);
	while (i < len)
		final[j++] = s[i++];
	final[j] = '\0';
	return (final);
}

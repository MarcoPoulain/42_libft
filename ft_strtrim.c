/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kassassi <kassassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 17:01:27 by kassassi          #+#    #+#             */
/*   Updated: 2025/05/07 11:58:42 by kassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static size_t	ft_increment(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (s1[i])
	{
		j = 0;
		while (set[j])
		{
			if (s1[i] == set[j])
				break ;
			j++;
		}
		if (set[j] == '\0')
			break ;
		i++;
	}
	return (i);
}

static size_t	ft_decrement(char const *s1, char const *set)
{
	size_t	d;
	size_t	j;
	size_t	strsize;

	strsize = ft_strlen(s1);
	d = 0;
	while (strsize > 0)
	{
		j = 0;
		while (set[j])
		{
			if (s1[strsize - 1] == set[j])
				break ;
			j++;
		}
		if (set[j] == '\0')
			break ;
		strsize--;
		d++;
	}
	return (d);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*dest;
	size_t	i;
	size_t	destsize;
	size_t	start;

	start = ft_increment(s1, set);
	if ((start + ft_decrement(s1, set)) > ft_strlen(s1))
		destsize = 0;
	else
		destsize = ft_strlen(s1) - start - ft_decrement(s1, set);
	dest = malloc(sizeof(char) * (destsize + 1));
	if (!dest)
		return (NULL);
	i = 0;
	while (i < destsize)
	{
		dest[i] = s1[start + i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

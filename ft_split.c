/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kassassi <kassassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 11:37:54 by kassassi          #+#    #+#             */
/*   Updated: 2025/05/08 13:19:25 by kassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static size_t	ft_wordsnbr(char const *s, char c)
{
	size_t	wordscount;

	wordscount = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s && *s != c)
		{
			wordscount++;
			while (*s && *s != c)
				s++;
		}
	}
	return (wordscount);
}

static char	*ft_wordalloc(char const *s, char c)
{
	size_t	charcount;
	char	*wordalloc;

	charcount = 0;
	while (*s && *s != c)
	{
		charcount ++;
		s++;
	}
	wordalloc = malloc(sizeof(char) * (charcount + 1));
	if (!wordalloc)
		return (NULL);
	return (wordalloc);
}

static char	**ft_freeall(char **tab, size_t limit)
{
	while (limit > 0)
		free(tab[--limit]);
	free(tab);
	return (NULL);
}

static char	**ft_taballoc(char const *s, size_t size, char c)
{
	char	**wordsalloc;
	size_t	i;

	i = 0;
	wordsalloc = malloc(sizeof(char *) * (size + 1));
	if (!wordsalloc)
		return (NULL);
	while (*s && i < size)
	{
		while (*s && *s == c)
			s++;
		if (*s && *s != c)
		{
			wordsalloc[i] = ft_wordalloc(s, c);
			if (!wordsalloc[i])
				return (ft_freeall(wordsalloc, i));
			i++;
			while (*s && *s != c)
				s++;
		}
	}
	wordsalloc[i] = NULL;
	return (wordsalloc);
}

char	**ft_split(char const *s, char c)
{
	char	**wordstab;
	size_t	i;
	size_t	j;

	wordstab = ft_taballoc(s, ft_wordsnbr(s, c), c);
	i = 0;
	if (!wordstab)
		return (NULL);
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s && *s != c)
		{
			j = 0;
			while (*s && *s != c)
				wordstab[i][j++] = *s++;
			wordstab[i][j] = '\0';
			i++;
		}
	}
	return (wordstab);
}

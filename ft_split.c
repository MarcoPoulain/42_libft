/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kassassi <kassassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 11:37:54 by kassassi          #+#    #+#             */
/*   Updated: 2025/05/07 19:08:09 by kassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static size_t	ft_moveptr(char const *s, size_t n, char c)
{
	size_t	i;

	i = 0;
	while (s[n + i] == c)
		i++;
	return (n + i);
}

static size_t	ft_wordsnbr(char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	k = 0;
	while (s[k])
	{
		j = 0;
		while (s[k] && s[k] != c)
		{
			j++;
			k++;
		}
		k = ft_moveptr(s, k, c);
		if (j > 0)
			i++;
	}
	return (i);
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
	size_t	j;
	size_t	k;

	i = 0;
	k = 0;
	wordsalloc = malloc(sizeof(char *) * (size + 1));
	if (!wordsalloc)
		return (NULL);
	while (s[k])
	{
		j = 0;
		while (s[k] && s[k++] != c)
			j++;
		k = ft_moveptr(s, k, c);
		if (j > 0)
		{
			wordsalloc[i] = malloc(sizeof(char) * (j + 1));
			if (!wordsalloc[i])
				return (ft_freeall(wordsalloc, i));
			i++;
		}
	}
	return (wordsalloc);
}

char	**ft_split(char const *s, char c)
{
	char	**wordstab;
	size_t	i;
	size_t	j;
	size_t	k;

	wordstab = ft_taballoc(s, ft_wordsnbr(s, c), c);
	if (!wordstab)
		return (NULL);
	i = 0;
	k = 0;
	while (s[k])
	{
		j = 0;
		while (s[k] && s[k] != c)
			wordstab[i][j++] = s[k++];
		if (j > 0)
		{
			wordstab[i][j] = '\0';
			i++;
		}
		k = ft_moveptr(s, k, c);
	}
	wordstab[i] = NULL;
	return (wordstab);
}

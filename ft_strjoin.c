/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kassassi <kassassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 15:48:28 by kassassi          #+#    #+#             */
/*   Updated: 2025/05/06 18:31:31 by kassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	lentotal;
	size_t	i;
	size_t	j;
	char	*dest;

	lentotal = ft_strlen(s1) + ft_strlen(s2) + 1;
	dest = malloc(sizeof(char) * lentotal);
	if (!dest)
		return (NULL);
	i = 0;
	j = 0;
	while (j < ft_strlen(s1))
		dest[i++] = s1[j++];
	j = 0;
	while (j < ft_strlen(s2))
		dest[i++] = s2[j++];
	dest[i] = '\0';
	return (dest);
}

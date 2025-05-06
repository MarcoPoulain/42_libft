/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kassassi <kassassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 17:09:55 by kassassi          #+#    #+#             */
/*   Updated: 2025/05/06 13:11:26 by kassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

// The strdup() function returns a pointer to a new string which is a
// duplicate of the string s

char	*ft_strdup(const char *s)
{
	size_t	nb;
	size_t	i;
	char	*dest;

	nb = ft_strlen(s);
	dest = malloc(sizeof(char) * (nb + 1));
	if (!dest)
		return (NULL);
	i = 0;
	while (i < nb)
	{
		dest[i] = s[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

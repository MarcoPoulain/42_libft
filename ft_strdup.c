/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kassassi <kassassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 17:09:55 by kassassi          #+#    #+#             */
/*   Updated: 2025/05/05 17:31:40 by kassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

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

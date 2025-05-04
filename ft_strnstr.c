/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kassassi <kassassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 16:03:48 by kassassi          #+#    #+#             */
/*   Updated: 2025/05/04 17:21:55 by kassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*ptr;
	size_t	i;
	size_t	j;

	ptr = (char *)haystack;
	i = 0;
	if (needle[0] == '\0')
		return (ptr);
	if (ptr[0] == '\0')
		return (NULL);
	while (i < len)
	{
		j = 0;
		while ((i + j < len) && needle[j] && ptr[i + j] == needle[j])
			j++;
		if (needle[j] == '\0')
			return (ptr + i);
		i++;
	}
	return (NULL);
}

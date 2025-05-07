/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kassassi <kassassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 16:03:48 by kassassi          #+#    #+#             */
/*   Updated: 2025/05/07 09:57:21 by kassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	char	*ptr;
	size_t	i;
	size_t	j;

	ptr = (char *)big;
	i = 0;
	if (little[0] == '\0')
		return (ptr);
	if (ptr[0] == '\0')
		return (NULL);
	while (i < len)
	{
		j = 0;
		while ((i + j < len) && little[j] && ptr[i + j] == little[j])
			j++;
		if (little[j] == '\0')
			return (ptr + i);
		i++;
	}
	return (NULL);
}

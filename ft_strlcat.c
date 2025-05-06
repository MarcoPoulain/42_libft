/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kassassi <kassassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 16:05:37 by kassassi          #+#    #+#             */
/*   Updated: 2025/05/06 13:15:51 by kassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Appends src to the end of dest ensuring the total length does not exceed size
// Returns the initial length of dest plus the length of src

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	dest_size;
	size_t	src_size;

	i = 0;
	dest_size = ft_strlen(dest);
	src_size = ft_strlen(src);
	if (dest_size >= size)
		return (size + src_size);
	while (src[i] && (dest_size + i < size - 1))
	{
		dest[dest_size + i] = src[i];
		i++;
	}
	if (dest_size + i < size)
		dest[dest_size + i] = '\0';
	return (dest_size + src_size);
}

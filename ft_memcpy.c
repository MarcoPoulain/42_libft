/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kassassi <kassassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 12:03:56 by kassassi          #+#    #+#             */
/*   Updated: 2025/05/03 16:28:03 by kassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t count)
{
	unsigned char	*ptrdest;
	unsigned char	*ptrsrc;
	size_t			i;

	if (!dest && !src && count > 0)
		return (dest);
	ptrdest = (unsigned char *)dest;
	ptrsrc = (unsigned char *)src;
	i = 0;
	while (i < count)
	{
		ptrdest[i] = ptrsrc[i];
		i++;
	}
	return (dest);
}

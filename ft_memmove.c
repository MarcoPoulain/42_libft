/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kassassi <kassassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 14:29:34 by kassassi          #+#    #+#             */
/*   Updated: 2025/05/07 09:53:16 by kassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// The memmove() function copies n bytes from memory area src to
// memory area dest.  The memory areas may overlap

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*ptrdest;
	unsigned char	*ptrsrc;
	size_t			i;

	if (!dest && !src && n > 0)
		return (dest);
	ptrdest = (unsigned char *)dest;
	ptrsrc = (unsigned char *)src;
	if (ptrdest < ptrsrc || ptrdest >= ptrsrc + n)
	{
		i = -1;
		while (++i < n)
			ptrdest[i] = ptrsrc[i];
	}
	else
	{
		while (n > 0)
		{
			ptrdest[n - 1] = ptrsrc[n -1];
			n--;
		}
	}
	return (dest);
}

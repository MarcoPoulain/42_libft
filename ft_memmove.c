/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kassassi <kassassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 14:29:34 by kassassi          #+#    #+#             */
/*   Updated: 2025/04/29 16:00:40 by kassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t count)
{
	unsigned char	*ptrdest;
	unsigned char	*ptrsrc;
	size_t			i;

	if (!dest && !src)
		return (dest);
	ptrdest = (unsigned char *)dest;
	ptrsrc = (unsigned char *)src;
	if (ptrdest < ptrsrc || ptrdest >= ptrsrc + count)
	{
		i = -1;
		while (++i < count)
			ptrdest[i] = ptrsrc[i];
	}
	else
	{
		while (count > 0)
		{
			ptrdest[count - 1] = ptrsrc[count -1];
			count--;
		}
	}
	return (dest);
}

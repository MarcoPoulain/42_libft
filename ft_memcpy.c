/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kassassi <kassassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 12:03:56 by kassassi          #+#    #+#             */
/*   Updated: 2025/04/29 14:21:37 by kassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t count)
{
	unsigned char	*ptrdest;
	unsigned char	*ptrsrc;
	size_t			i;

	if (!dest && !src)
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
/*#include <stdio.h>
#include <string.h>
int	main(void)
{
	char *strsrc = "INVADE";
	char strdest[] = "PeaceandLove";

	printf("%s\n", strdest);
	ft_memcpy(strdest, strsrc, 5);

	printf("%s\n", strdest);

	return (0);
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kassassi <kassassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 15:58:38 by kassassi          #+#    #+#             */
/*   Updated: 2025/05/03 17:38:18 by kassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *dest, int ch, size_t count)
{
	unsigned char	*ptr;
	unsigned char	c;
	size_t			i;

	ptr = (unsigned char *)dest;
	c = (unsigned char)ch;
	i = 0;
	while (i < count)
	{
		*ptr = c;
		i++;
		ptr++;
	}
	return (dest);
}

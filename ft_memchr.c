/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kassassi <kassassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 16:24:41 by kassassi          #+#    #+#             */
/*   Updated: 2025/05/01 17:36:06 by kassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*ptr;
	unsigned char		chr;
	size_t				i;

	ptr = (const unsigned char *)s;
	chr = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (ptr[i] == chr)
			return (void *)(ptr + i);
		i++;
	}
	return (NULL);
}
#include <stdio.h>
#include <string.h>
void	test_memchr(const char *str, int c, size_t n)
{
	printf("Fontion standard: %s\n", (const char *)memchr(str, c, n));
	printf("Ma fonction: %s\n\n", (const char *)ft_memchr(str, c, n));
}

int	main(void)
{
	test_memchr("ABCDEFG", 'D', 7);
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kassassi <kassassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 11:51:38 by kassassi          #+#    #+#             */
/*   Updated: 2025/05/01 15:28:42 by kassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	const char		*pchar;
	unsigned char	chr;

	pchar = str;
	chr = (unsigned char)c;
	while (*pchar)
	{
		if (*pchar == chr)
			return ((char *)pchar);
		pchar++;
	}
	if (*pchar == chr)
		return ((char *)pchar);
	return (NULL);
}
/*#include <stdio.h>
#include <string.h>
void	test_strchr(const char *str, int c)
{
	printf("Standard fonction: %s, pour %d\n", strchr(str, c), c);
	printf("Ma fonction: %s, pour %d\n\n", ft_strchr(str, c), c);
}
int	main(void)
{
	test_strchr("abcdef", 'd');
	test_strchr("", '\0');
	test_strchr("abcdef", 'g');
	test_strchr("abcdef", '\0');
	test_strchr("abcdef", 'a');
	test_strchr("abcdcef", 'c');

	return (0);
}*/

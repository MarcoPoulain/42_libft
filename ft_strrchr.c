/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kassassi <kassassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 14:34:35 by kassassi          #+#    #+#             */
/*   Updated: 2025/05/01 15:29:19 by kassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	unsigned char	chr;
	const char		*pchar;
	size_t			countpchar;

	pchar = str;
	countpchar = ft_strlen(pchar);
	chr = (unsigned char)c;
	while (*pchar)
		pchar++;
	if (chr == '\0')
		return ((char *)pchar);
	while (countpchar > 0)
	{
		if (*pchar == chr)
			return ((char *)pchar);
		pchar--;
		countpchar--;
	}
	if (*pchar == chr)
		return ((char *)pchar);
	return (NULL);
}
/*#include <stdio.h>
#include <string.h>
void    test_strrchr(const char *str, int c)
{
    printf("Standard fonction: %s, pour %d\n", strrchr(str, c), c); 
    printf("Ma fonction: %s, pour %d\n\n", ft_strrchr(str, c), c); 
}
int main(void)
{
    test_strrchr("abcdef", 'd');
    test_strrchr("", '\0');
    test_strrchr("abcdef", 'g');
    test_strrchr("abcdef", '\0');
    test_strrchr("abcdef", 'a');
    test_strrchr("abcdcef", 'c');

    return (0);
}*/

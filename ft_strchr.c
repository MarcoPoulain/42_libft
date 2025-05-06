/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kassassi <kassassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 11:51:38 by kassassi          #+#    #+#             */
/*   Updated: 2025/05/06 13:06:09 by kassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// The strchr() function returns a pointer to the first occurrence of
// the character c in the string str

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

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kassassi <kassassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 11:51:38 by kassassi          #+#    #+#             */
/*   Updated: 2025/05/07 09:54:57 by kassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// The strchr() function returns a pointer to the first occurrence of
// the character c in the string str

char	*ft_strchr(const char *s, int c)
{
	const char		*pchar;
	unsigned char	chr;

	pchar = s;
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

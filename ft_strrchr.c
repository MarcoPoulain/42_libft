/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kassassi <kassassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 14:34:35 by kassassi          #+#    #+#             */
/*   Updated: 2025/05/06 13:22:24 by kassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Returns a pointer to the last occurrence of c 
// in the string str, or NULL if not found

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

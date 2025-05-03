/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kassassi <kassassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 11:51:38 by kassassi          #+#    #+#             */
/*   Updated: 2025/05/03 17:48:03 by kassassi         ###   ########.fr       */
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

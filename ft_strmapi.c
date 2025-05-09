/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kassassi <kassassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 15:53:37 by kassassi          #+#    #+#             */
/*   Updated: 2025/05/09 16:44:15 by kassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*morphs;
	size_t	i;

	i = 0;
	morphs = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!morphs)
		return(NULL);
	while (s[i])
	{
		morphs[i] = f(i, s[i]);
		i++;
	}
	morphs[i] = '\0';
	return (morphs);
}

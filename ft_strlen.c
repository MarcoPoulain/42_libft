/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kassassi <kassassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 13:18:36 by kassassi          #+#    #+#             */
/*   Updated: 2025/04/29 13:50:07 by kassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (*str)
	{
		str++;
		i++;
	}
	return (i);
}
/*#include <stdio.h>
int	main(void)
{
	char *str1 = "Tu boules ton bouge?";
	char *str2 = "";
	char *str3 = "42";

	printf("%d\n", ft_strlen(str1));
	printf("%d\n", ft_strlen(str2));
	printf("%d\n", ft_strlen(str3));
}*/

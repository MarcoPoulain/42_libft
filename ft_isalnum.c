/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kassassi <kassassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 12:13:44 by kassassi          #+#    #+#             */
/*   Updated: 2025/04/28 12:42:24 by kassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (c < 0 || c > 255)
		return (0);
	return ((c >= 48 && c <= 57)
		|| (c >= 65 && c <= 90)
		|| (c >= 97 && c <= 122));
}
/*#include <stdio.h>
int	main(void)
{
	printf("%d\n", ft_isalnum('9'));
	printf("%d\n", ft_isalnum('Z'));
	printf("%d\n", ft_isalnum('d'));
	printf("%d\n", ft_isalnum(42));
	printf("%d\n", ft_isalnum(180));
	return (0);
}*/

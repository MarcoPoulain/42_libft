/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kassassi <kassassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 11:35:22 by kassassi          #+#    #+#             */
/*   Updated: 2025/04/28 11:59:56 by kassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if (c < 0 || c > 255)
		return (0);
	return ((c >= 65 && c <= 90) || (c >= 97 && c <= 122));
}
/*#include <stdio.h>
int	main(void)
{
	printf("%d\n", ft_isalpha('c'));
	printf("%d\n", ft_isalpha('8'));
	printf("%d\n", ft_isalpha('\n'));
	printf("%d\n", ft_isalpha(342));
	printf("%d\n", ft_isalpha(121));
	return (0);
}*/

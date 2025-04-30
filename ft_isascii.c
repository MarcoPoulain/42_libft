/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kassassi <kassassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 12:45:18 by kassassi          #+#    #+#             */
/*   Updated: 2025/04/28 12:51:16 by kassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}
/*#include <stdio.h>
int	main(void)
{
	printf("%d\n", ft_isascii('0'));
	printf("%d\n", ft_isascii(23));
	printf("%d\n", ft_isascii(-2));
	return (0);
}*/

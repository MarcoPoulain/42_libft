/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kassassi <kassassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 12:02:43 by kassassi          #+#    #+#             */
/*   Updated: 2025/04/29 10:47:04 by kassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c < 0 || c > 255)
		return (0);
	return (c >= 48 && c <= 57);
}
/*#include <stdio.h>
int	main(void)
{
	printf("%d\n", ft_isdigit('c'));
	printf("%d\n", ft_isdigit('0'));
	printf("%d\n", ft_isdigit(50));
	printf("%d\n", ft_isdigit(800));
	return (0);
}*/

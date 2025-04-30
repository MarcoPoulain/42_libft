/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kassassi <kassassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 12:53:07 by kassassi          #+#    #+#             */
/*   Updated: 2025/04/28 13:04:36 by kassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c <= 0 || c >= 255)
		return (0);
	return (c >= 32 && c <= 126);
}
/*#include <stdio.h>
int	main(void)
{
	printf("%d\n", ft_isprint(32));
	printf("%d\n", ft_isprint(127));
	printf("%d\n", ft_isprint(342));
	printf("%d\n", ft_isprint('~'));
	return (0);
}*/

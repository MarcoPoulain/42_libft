/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kassassi <kassassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 11:27:06 by kassassi          #+#    #+#             */
/*   Updated: 2025/04/29 13:45:10 by kassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *str, size_t n)
{
	unsigned char	*ptr;
	size_t			i;

	ptr = (unsigned char *)str;
	i = 0;
	while (i < n)
	{
		*ptr = 0;
		ptr++;
		i++;
	}
}
/*#include <stdio.h>
int	main(void)
{
	char	str[10];
	int		i;

	i = 0;
	while (i < 10)
	{
		str[i] = '1';
		printf("%d\n", str[i]);
		i++;
	}
	ft_bzero(str, 5);
	i = 0;
	while (i < 10)
	{
		printf("%d\n", str[i]);
		i++;
	}
	return (0);
}*/

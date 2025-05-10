/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kassassi <kassassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/10 11:34:18 by kassassi          #+#    #+#             */
/*   Updated: 2025/05/10 12:26:15 by kassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_putnbr_fd(int n, int fd)
{
	char	str[12];
	int		i;
	long	nb;

	i = 0;
	nb = n;
	if (nb == 0)
		ft_putchar_fd('0', fd);
	else
	{
		if (nb < 0)
		{
			ft_putchar_fd('-', fd);
			nb = -nb;
		}
		while (nb > 0)
		{
			str[i++] = nb % 10 + '0';
			nb /= 10;
		}
		while (i--)
			ft_putchar_fd(str[i], fd);
	}
}

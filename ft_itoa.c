/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kassassi <kassassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 10:59:43 by kassassi          #+#    #+#             */
/*   Updated: 2025/05/09 14:24:03 by kassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	ft_malloca(int n)
{
	unsigned int	i;
	int				sign;

	if (n == 0)
		return (1);
	if (n < 0)
		sign = -42;
	else
		sign = 42;
	i = 0;
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	if (sign < 0)
		return (i + 1);
	return (i);
}

static char	*ft_reversea(char *a)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	swapr;

	i = 0;
	j = ft_strlen(a) - 1;
	swapr = 0;
	while (i < j)
	{
		swapr = a[i];
		a[i++] = a[j];
		a[j] = swapr;
		j--;
	}
	return (a);
}

static char	*ft_writea(char *a, unsigned int n, int sign)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
	{
		a[0] = '0';
		a[1] = '\0';
		return (a);
	}
	while (n != 0)
	{
		a[i++] = (n % 10) + 48;
		n = n / 10;
	}
	if (sign < 0)
		a[i++] = '-';
	a[i] = '\0';
	return (a);
}

char	*ft_itoa(int n)
{
	char			*a;
	int				sign;

	sign = 42;
	a = malloc(sizeof(char) * (ft_malloca(n) + 1));
	if (!a)
		return (NULL);
	if (n < 0)
	{
		if (n == -2147483648)
		{
			ft_strlcpy(a, "-2147483648", 12);
			return (a);
		}
		n = -n;
		sign = -42;
	}
	a = ft_writea(a, n, sign);
	return (ft_reversea(a));
}

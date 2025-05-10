/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kassassi <kassassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 10:59:43 by kassassi          #+#    #+#             */
/*   Updated: 2025/05/10 12:46:39 by kassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	ft_malloca(long n)
{
	long	i;
	int		sign;

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

static char	*ft_writea(char *a, long n, int sign)
{
	long	i;

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
	char	*a;
	int		sign;
	long	nb;

	nb = n;
	sign = 42;
	a = malloc(sizeof(char) * (ft_malloca(nb) + 1));
	if (!a)
		return (NULL);
	if (n < 0)
	{
		nb = -nb;
		sign = -42;
	}
	a = ft_writea(a, nb, sign);
	return (ft_reversea(a));
}

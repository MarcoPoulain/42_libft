/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kassassi <kassassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 11:52:02 by kassassi          #+#    #+#             */
/*   Updated: 2025/05/07 11:57:20 by kassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static const char	*ft_removespaces(const char *str)
{
	const char	*ptr;

	ptr = str;
	while ((*ptr >= 9 && *ptr <= 13) || *ptr == 32)
		ptr++;
	return (ptr);
}

static const char	*ft_checksign(const char *str, int *sign)
{
	const char	*ptr;

	ptr = str;
	if (*ptr == '+')
	{
		*sign = 0;
		ptr++;
		return (ptr);
	}
	if (*ptr == '-')
	{
		*sign = -42;
		ptr++;
		return (ptr);
	}
	*sign = 0;
	return (ptr);
}

int	ft_atoi(const char *nptr)
{
	const char	*ptr;
	int			sign;
	int			i;

	sign = 0;
	ptr = nptr;
	ptr = ft_removespaces(ptr);
	ptr = ft_checksign(ptr, &sign);
	i = 0;
	while (*ptr >= '0' && *ptr <= '9')
	{
		i = i * 10 + (*ptr - '0');
		ptr++;
	}
	if (sign == -42)
		return (-i);
	return (i);
}

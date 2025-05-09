/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_itoa.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kassassi <kassassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 14:03:50 by kassassi          #+#    #+#             */
/*   Updated: 2025/05/09 14:26:10 by kassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>
#include <stdlib.h>

int		test_itoa(void)
{
	int		i = 0;
	int		lru[] =
	{
		42,
		-42,
		2025,
		00005,
		-2147483648,
		0
	};
	char	*a;

	while (i < 6)
	{
		a = ft_itoa(lru[i]);
		if (!a)
			return (1);
		printf("Pour %d\n", lru[i]);
		printf("J'ai:\"%s\"\n\n", a);
		free(a);
		i++;
	}
	return (0);
}

int		main(void)
{
	test_itoa();
	return (0);
}

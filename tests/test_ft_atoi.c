/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_atoi.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kassassi <kassassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 14:14:44 by kassassi          #+#    #+#             */
/*   Updated: 2025/05/05 14:36:06 by kassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>
#include <stdlib.h>

void	test_atoi(const char *nptr)
{
	printf("Pour le nptr: %s\n", nptr);
	printf("La fonction standard retourne: %d\n", atoi(nptr));
	printf("Ma fonction retourne: %d\n\n", ft_atoi(nptr));
}

int	main(void)
{
	const char *lru[] = {
		"    -42",
		"    42",
		"    +42",
		"    -00",
		"    42mots5",
		"Que mot",
		"-2147483648",
		"2147483648",
		"2147483647",
		"-2147483647"
	};
	int			i = 0;

	while (i < 10)
	{
		test_atoi(lru[i]);
		i++;
	}
	return (0);
}

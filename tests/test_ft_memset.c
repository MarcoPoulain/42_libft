/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memset.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kassassi <kassassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 17:23:58 by kassassi          #+#    #+#             */
/*   Updated: 2025/05/03 17:37:24 by kassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <string.h>
#include <stdio.h>

void	test_memset(size_t count, int c)
{
	char	tab1[] = "PeaceandLove";
	char	tab2[] = "PeaceandLove";
	int		i;

	memset(tab1, c, count);
	ft_memset(tab2, c, count);

	printf("Fonction memset avec count: %zu, char: %c (%d)\n", count, c, c);
	printf("Standard: ");
	i =0;
	while (i < 13)
	{
		printf("%c", tab1[i]);
		i++;
	}
	printf("\n");
	printf("Ma fonction: ");
	i = 0;
	while (i < 13)
	{
		printf("%c", tab2[i]);
		i++;
	}
	printf("\n\n");
}

int	main(void)
{
	test_memset(5, '0');
	test_memset(0, 'X');
	test_memset(12, '#');
	test_memset(3, '\n');
	return (0);
}

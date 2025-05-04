/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_bzero.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kassassi <kassassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 14:14:33 by kassassi          #+#    #+#             */
/*   Updated: 2025/05/04 13:38:19 by kassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	main(void)
{
	char	*ref;
	char	*test;
    int		i;

	ref = malloc(10);
	test = malloc(10);
	if (!ref || !test)
	{
		free(ref);
		free(test);
		return (1);
	}
	memset(ref, 'A', 10);
	memset(test, 'A', 10);
	bzero(ref, 5);
	ft_bzero(test, 5);
	i = 0;
	while (i < 10)
	{
		if (ref[i] != test[i])
		{
			printf("Comportement divergeant à l'index %d, std = %d, ft = %d\n", i, ref[i], test[i]);
			free(ref);
			free(test);
			return (1);
			}
		i++;
	}
	printf("Tout bon\n");
	free(ref);
	free(test);
	return (0);
}  

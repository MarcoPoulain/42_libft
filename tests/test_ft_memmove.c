/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memmove.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kassassi <kassassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 16:34:59 by kassassi          #+#    #+#             */
/*   Updated: 2025/05/03 17:04:15 by kassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <string.h>
#include <stdio.h>

void	test_memmove(char *str, size_t from, size_t to, size_t count)
{
	char	dest1[50];
	char	dest2[50];

	strcpy(dest1, str);
	strcpy(dest2, str);
	memmove(dest1 + to, dest1 + from, count);
	ft_memmove(dest2 + to, dest2 + from, count);
	printf("Standard: %s\n", dest1);
	printf("Ma fonction: %s\n\n", dest2);
}

int	main(void)
{
	test_memmove("INVADE", 0, 2, 4);
	test_memmove("INVADE", 2, 0, 2);
	test_memmove("INVADE", 0, 0, 0);
	test_memmove("INVADE", 0, 0, 6);
	test_memmove("INVADE", 0, 3, 2);
	return (0);
}

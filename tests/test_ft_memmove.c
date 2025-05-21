/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memmove.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kassassi <kassassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 16:34:59 by kassassi          #+#    #+#             */
/*   Updated: 2025/05/19 13:38:36 by kassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <string.h>
#include <stdio.h>

void	test_memmove(char *str, size_t from, size_t to, size_t count)
{
	char	dest1[100];
	char	dest2[100];

	strcpy(dest1, str);
	strcpy(dest2, str);
	printf("On veut copier %zu char\n", count);
	printf("On commence a str[%zu] et on copi a partir de str[%zu]\n\n", from, to);

	memmove(dest1 + to, dest1 + from, count);
	ft_memmove(dest2 + to, dest2 + from, count);
	printf("Standard: %s\n", dest1);
	printf("Ma fonction: %s\n\n", dest2);
}

int	main(void)
{
	char	str[100];

	strcpy(str, "ABCDEFGHIJKL");
	printf("J'ai une string pour le test: %s\n", str);
	printf("On va copier depuis la string, sur la string!\n\n");
	test_memmove(str, 0, 2, 4);
	test_memmove(str, 2, 0, 2);
	test_memmove(str, 0, 0, 0);
	test_memmove(str, 0, 0, 6);
	test_memmove(str, 0, 3, 2);
	test_memmove(str, 5, 15, 6);
	test_memmove(str, 5, 102, 6);
	return (0);
}

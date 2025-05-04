/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strnstr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kassassi <kassassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 16:44:08 by kassassi          #+#    #+#             */
/*   Updated: 2025/05/04 17:13:20 by kassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>
#include <bsd/string.h>

void	test_strnstr(const char *haystack, const char *needle, size_t len)
{
	char *std;
	char *mine;

	printf("On a la botte de foin: %s\n", haystack);
	printf("On a l'aiguille: %s\n", needle);
	printf("On a la range de recherche: %zu\n", len);

	std = strnstr(haystack, needle, len);
	mine = ft_strnstr(haystack, needle, len);

	printf("La fonction standard renvoie: %s\n", std);
	printf("Ma fonction renvoie: %s\n\n", mine);

}

int	main(void)
{
	test_strnstr("Peace and Love", "and", 10);
	test_strnstr("Peace and Love", "and", 3);
	test_strnstr("Peace and Love", "and", 7);
	test_strnstr("Peace and Love", "and", 9);
	test_strnstr("", "and", 10);
	test_strnstr("Peace and Love Boyo!", "and", 10);
	test_strnstr("", "and", 4294967295);
}

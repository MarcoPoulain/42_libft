/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memcmp.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kassassi <kassassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 15:43:23 by kassassi          #+#    #+#             */
/*   Updated: 2025/05/04 15:52:50 by kassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>
#include <string.h>

void	test_memcmp(const char *s1, const char *s2, size_t n)
{
	int	std = memcmp(s1, s2, n);
	int mine = ft_memcmp(s1, s2, n);

	printf("Pour s1: %s, et s2: %s, et n: %zu\n", s1, s2, n);
	printf("La fonction standard retourne: %d\n", std);
	printf("Ma fonction retourne: %d\n\n", mine);
}

int	main(void)
{
	test_memcmp("abcde", "abcd", 5);
	test_memcmp("abcde", "adcb", 2);
	test_memcmp("abcde", "abcd", 0);
}

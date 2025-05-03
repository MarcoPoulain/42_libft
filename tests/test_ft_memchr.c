/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memchr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kassassi <kassassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 14:34:06 by kassassi          #+#    #+#             */
/*   Updated: 2025/05/03 15:47:59 by kassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <string.h>
#include <stdio.h>

void	test_memchr(const char *str, int c, size_t n)
{
	void	*std;
	void	*myfunc;

	std = memchr(str, c, n);
	myfunc = ft_memchr(str, c, n);
	printf("Test avec str: %s, c: %c et n: %zu\n", str, c, n);
	if (std == myfunc)
		printf("OK, it's a match!\n\n");
	else
		printf("KO ça sent le pâté...\n\n");
}

int main(void)
{
	test_memchr("ABCDEFG", 'D', 7);
	test_memchr("ABCDEFG", 'Z', 7);
	test_memchr("ABCDEFG", '\0', 8);
	test_memchr("ABC\0EFG", '\0', 7);
	test_memchr("", 'A', 1);
	test_memchr("AAAAB", 'A', 4);
	test_memchr("12345", '3', 0);
	return 0;
}

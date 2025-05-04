/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strncmp.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kassassi <kassassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 14:47:33 by kassassi          #+#    #+#             */
/*   Updated: 2025/05/04 14:48:41 by kassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>
#include <string.h>
void	test_strncmp(const char *str1, const char *str2, size_t n)
{
	printf("Fonction Standard: %d pour str1 = %s, str2 = %s et n = %zu\n", \
	strncmp(str1, str2, n), str1, str2, n);
	printf("Ma Fonction: %d pour str1 = %s, str2 = %s et n = %zu\n\n", \
	ft_strncmp(str1, str2, n), str1, str2, n);
}

int	main(void)
{
	test_strncmp("yoh", "yoz", 2);
	test_strncmp("yoh", "yoz", 3);
	test_strncmp("yoh", "yoh", 12);
	test_strncmp("yoz", "yoh", 3);
	test_strncmp("yoh", "yoh", 0);
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strlcpy.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kassassi <kassassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 14:10:17 by kassassi          #+#    #+#             */
/*   Updated: 2025/05/04 14:12:45 by kassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>
#include <bsd/string.h>
// A compiler avec l option -lsbd
void	test_strlcpy(const char *src, size_t size)
{
	char	stand_dest[50] = {0};
	char	ft_dest[50];

	size_t	stand_test = strlcpy(stand_dest, src, size);
	size_t	ft_test = ft_strlcpy(ft_dest, src, size);

	printf("J'ai src = %s, et size = %zu\n", src, size);
	printf("strlcpy: dest = %s, countsrc = %zu\n", stand_dest, stand_test);
	printf("ft_strlcpy: dest = %s, et countsrc = %zu\n\n", ft_dest, ft_test);
}

int	main(void)
{
	test_strlcpy("COPY", 10);
	test_strlcpy("COPY", 3);
	test_strlcpy("COPYCOPY", 0);
	test_strlcpy("", 5);
	test_strlcpy("COPYCO", 1);
	test_strlcpy("C\nOPY", 10);
	return (0);
}

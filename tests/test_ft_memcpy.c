/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memcpy.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kassassi <kassassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 15:59:06 by kassassi          #+#    #+#             */
/*   Updated: 2025/05/03 16:26:18 by kassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>
#include <string.h>

void	test_memcpy(const char *src, size_t count)
{
	char	dest1[20] = "PeaceandLove";
	char	dest2[20] = "PeaceandLove";

	printf("J'ai crée deux strings dest[20]: %s\n", dest2);

	memcpy(dest1, src, count);
	ft_memcpy(dest2, src, count);

	printf("Après memcpy et ft_memcpy pour src: %s et count: %zu\n", src, count);
	printf("dest1: %s\ndest2: %s\n\n", dest1, dest2);
}

int	main(void)
{
	const char *src = "INVADE";

	test_memcpy(src, 6);
	test_memcpy(src, 0);
	test_memcpy(src, 3);
}

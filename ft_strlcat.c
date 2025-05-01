/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kassassi <kassassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 16:05:37 by kassassi          #+#    #+#             */
/*   Updated: 2025/05/01 11:41:03 by kassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	dest_size;
	size_t	src_size;

	i = 0;
	dest_size = ft_strlen(dest);
	src_size = ft_strlen(src);
	if (dest_size >= size)
		return (size + src_size);
	while (src[i] && (dest_size + i < size - 1))
	{
		dest[dest_size + i] = src[i];
		i++;
	}
	dest[dest_size + i] = '\0';
	return (dest_size + src_size);
}
/*#include <string.h>
#include <stdio.h>

void	ft_test_strlcat(const char *src, size_t size)
{
	char	stand_dest[50] = "Ecris après moi: ";
	char	ft_dest[50] = "Ecris après moi: ";
	size_t	stand_test;
	size_t	ft_test;

	stand_test = strlcat(stand_dest, src, size);
	ft_test = ft_strlcat(ft_dest, src, size);
	printf("Test pour src = %s, et size = %zu\n", src, size);
	printf("stand_dest finale = %s, et return = %zu\n", stand_dest, stand_test);
	printf("ft_dest finale = %s, et return = %zu\n\n", ft_dest, ft_test);
}

int	main(void)
{
	const char *test[] = 
	{
		"Ecris avant moi.",
		"Uuuune trèèèèèès looooongue chaaaaaaaaaaine",
		"BOF",
		"",
		" !\n\tyoh",
		"Power of amitié"
	};
	size_t sizes[] = {50, 50, 0, 5, 50, 50};
	size_t i = 0;
	while (i < 6)
	{
		ft_test_strlcat(test[i], sizes[i]);
		i++;
	}
	return (0);
}*/

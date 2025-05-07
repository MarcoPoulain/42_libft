/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_split.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kassassi <kassassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 18:52:11 by kassassi          #+#    #+#             */
/*   Updated: 2025/05/07 19:15:18 by kassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	char const *s = "    Test    de split     héhé !";
	char		c = '\0';
	char		**split = ft_split(s, c);
	size_t		i = 0;

	while(split[i] != NULL)
	{
		printf("%s\n", split[i]);
		free(split[i]);
		i++;
	}
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strjoin.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kassassi <kassassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 16:06:59 by kassassi          #+#    #+#             */
/*   Updated: 2025/05/06 16:15:39 by kassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	char	*s1[] =
	{
		"Peace ",
		"",
		"42",
		"Empty s2",
		""
	};
	char	*s2[] =
	{
		"and Love",
		"Empty s1",
		"School",
		"",
		""
	};
	int		i;
	i = 0;
	while (i < 5)
	{
		char	*ret = ft_strjoin(s1[i], s2[i]);
		if (ret)
		{
			printf("ft_strjoin(\"%s\", \"%s\") = \"%s\"\n", s1[i], s2[i], ret);
			free(ret);
		}
		else
			printf("Bad allocation");
		i++;
	}
	return (0);
}

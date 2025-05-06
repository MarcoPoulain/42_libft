/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_substr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kassassi <kassassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 14:06:01 by kassassi          #+#    #+#             */
/*   Updated: 2025/05/06 14:23:52 by kassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	char				*stest[] =
	{
		"Peace and Love.",
		"Un deux trois quatre",
		"",
		"yoooooh ça boule?"
	};
	unsigned int		startest[] =
	{
		6,
		3,
		0,
		560
	};
	size_t				lentest[] =
	{
		5,
		35,
		0,
		10000
	};
	size_t				i = 0;
	char				*ret;
	
	while (i < 4)
	{
		ret = ft_substr(stest[i], startest[i], lentest[i]);
		printf("Pour s: %s, start: %d et len: %zu\n", stest[i], startest[i], lentest[i]);
		printf("Retour de ft_substr: \"%s\"\n\n", ret);
		free(ret);
		i++;
	}
	return (0);
}

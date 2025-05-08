/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_split.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kassassi <kassassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 18:52:11 by kassassi          #+#    #+#             */
/*   Updated: 2025/05/08 15:54:59 by kassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"
#include "../libft.h"
#include <stdio.h>
#include <stdlib.h>

void	test_split(char const *s, char sep)
{
	char	**split = ft_split(s, sep);
	size_t	i = 0;

	printf("On a la chaine = \"%s\" et le sep = \"%c\"\n", s, sep);
	while (split && split[i])
	{
		printf(" [%zu] = \"%s\"\n", i, split[i]);
		free(split[i]);
		i++;
	}
	free(split);
	printf("\n");
}

int	main(void)
{
	t_test	tests[] = {
		{"   Test    de split     héhé !", ' '},
		{"", ' '},
		{"   ", ' '},
		{"word", ' '},
		{"word1 word2", ' '},
		{" word1 word2 ", ' '},
		{"abc,def,ghi", ','},
		{"^^^1^^2a,^^^^3^^^^--h^^^^", '^'},
		{"Hello\nMaster Chen\n", '\n'},
		{"42 42 42", ' '},
		{NULL, 0}
	};
	size_t	i = 0;

	while (tests[i].str)
	{
		test_split(tests[i].str, tests[i].sep);
		i++;
	}
	return (0);
}

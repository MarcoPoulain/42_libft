/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strtrim.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kassassi <kassassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 18:33:45 by kassassi          #+#    #+#             */
/*   Updated: 2025/05/06 19:11:00 by kassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	int		i;
	char	*tests[][2] =
	{
		{"   Peace and Love   ", " "},
		{"__42__","_"},
		{"YYOOOOHH", "YOH"},
		{"42", ""},
		{"", "\n"},
		{"###pouler###", "#"},
		{"\n\t\t\t", "\n\t"},
		{NULL, NULL}
	};
	
	i = 0;
	while (tests[i][0] != NULL)
	{
		char	*s1 = tests[i][0];
		char	*set = tests[i][1];
		char	*ret = ft_strtrim(s1, set);

		printf("s1 = \"%s\", set = \"%s\", return = \"%s\"\n\n", s1, set, ret);
		free(ret);
		i++;
	}
	return (0);
}

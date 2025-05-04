/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strlen.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kassassi <kassassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 14:21:29 by kassassi          #+#    #+#             */
/*   Updated: 2025/05/04 14:36:19 by kassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>
#include <string.h>

void	test_strlen(const char *str)
{
	printf("Le retour de la fonction standard pour '%s' = %zu\n", str, strlen(str));
	printf("Le retour pour ma fonction pour '%s' = %zu\n\n", str, ft_strlen(str));
}

int	main(void)
{
	const char	*charray[] = {"abcde", "", "tu boules ou tu bouges", "\n\n\n\n"};
	int			i = 0;

	while (i < 4)
	{
		test_strlen(charray[i]);
		i++;
	}
}

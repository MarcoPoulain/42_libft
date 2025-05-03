/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isalpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kassassi <kassassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 13:33:21 by kassassi          #+#    #+#             */
/*   Updated: 2025/05/03 13:39:07 by kassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../libft.h"
#include <stdio.h>
#include <ctype.h>
void	test_isalpha(int c)
{
	printf("%d le retour de la fonction standard: %d\n", c, !!isalpha(c));
	printf("%d le retour de ma fonction: %d\n\n", c, ft_isalpha(c));
}
int	main(void)
{
	int		lru[7] = {'5', 'g', '*', '0', '\n', 480, 56};
	int		i = 0;
	
	while (i < 7)
	{
		test_isalpha(lru[i]);
		i++;
	}
	return (0);
}

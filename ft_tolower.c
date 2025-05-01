/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kassassi <kassassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 11:42:55 by kassassi          #+#    #+#             */
/*   Updated: 2025/05/01 12:09:51 by kassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}
/*#include <stdio.h>
#include <ctype.h>
void	ft_test_tolower(int c)
{
	printf("Standard fonction pour: %c elle retourne: %c\n", c, tolower(c));
	printf("Fonction perso pour: %c elle retourne: %c\n\n", c, ft_tolower(c));
}
int	main(void)
{
	ft_test_tolower(65);
	ft_test_tolower(90);
	ft_test_tolower(42);
	ft_test_tolower('H');
	ft_test_tolower('.');
	ft_test_tolower(2000);
	return (0);
}*/

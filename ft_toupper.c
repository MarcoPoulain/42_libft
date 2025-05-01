/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kassassi <kassassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 11:13:43 by kassassi          #+#    #+#             */
/*   Updated: 2025/05/01 12:09:27 by kassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}
/*#include <stdio.h>
#include <ctype.h>
void	ft_test_toupper(int c)
{
	printf("Standard fonction pour: %c elle retourne: %c\n", c, toupper(c));
	printf("Fonction perso pour: %c elle retourne: %c\n\n", c, ft_toupper(c));
}
int	main(void)
{
	ft_test_toupper(97);
	ft_test_toupper(122);
	ft_test_toupper(50);
	ft_test_toupper('h');
	ft_test_toupper('.');
	ft_test_toupper(2000);
	return (0);
}*/

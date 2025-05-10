/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_striteri.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kassassi <kassassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/10 09:30:18 by kassassi          #+#    #+#             */
/*   Updated: 2025/05/10 09:53:37 by kassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>
#include <stdlib.h>

void	test_striteri(unsigned int i, char *s)
{
	if (i % 5 == 0)
		*s = ' ';
	if (i % 10 == 0)
		*s = '0';
}

int	main(void)
{
	char s[] = "Yoh les noze tcho les nazes, a walp les blazes, jte bloze";
	printf("String de base: \"%s\"\n", s);
	printf("TRANSFORMATION\n");
	ft_striteri(s, test_striteri);
	printf("New string: \"%s\"\n", s);
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strmapi.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kassassi <kassassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 16:48:58 by kassassi          #+#    #+#             */
/*   Updated: 2025/05/09 16:58:43 by kassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdlib.h>
#include <stdio.h>

char	test_mapi(unsigned int i, char c)
{
	if (i % 2 != 0)
		return ft_toupper(c);
	return ft_tolower(c);
}

int	main(void)
{
	char	*s = "Salut boyo, peace and love?";
	char	*morphs = ft_strmapi(s, test_mapi);

	if (morphs)
	{
		 printf("L'origine: %s\n", s);
		 printf("Métamorphose: %s\n", morphs);
		 free(morphs);
	}
	return (0);
}

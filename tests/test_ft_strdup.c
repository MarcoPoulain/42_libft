/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strdup.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kassassi <kassassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 17:32:05 by kassassi          #+#    #+#             */
/*   Updated: 2025/05/05 17:46:02 by kassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void	test_strdup(const char *s)
{
	char	*copystd;
	char	*copymine;

	copystd = strdup(s);
	copymine = ft_strdup(s);
	if (!copystd || !copymine)
		printf("Erreur d'allocation malloc");
	printf("Pour la string source: %s\n", s);
	printf("La fonction standard: %s\n", copystd);
	printf("Ma fonction: %s\n\n", copymine);
	free(copystd);
	free(copymine);
}

int	main(void)
{
	test_strdup("abcde");
	test_strdup("");
	test_strdup("\n");
	test_strdup("Yoh ça buzz ici?\0 mots chachés");
}

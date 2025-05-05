/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_calloc.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kassassi <kassassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 16:45:25 by kassassi          #+#    #+#             */
/*   Updated: 2025/05/05 16:53:53 by kassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	size_t	i;
	size_t	nb;
	int		*mine;
	int		*ref;

	nb = 8;
	ref = calloc(nb, sizeof(int));
	mine = ft_calloc(nb, sizeof(int));

	if (!ref || !mine)
	{
		printf("Erreur d'allocation.\n");
		free(ref);
		free(mine);
		return (1);
	}
	i = 0;
	while (i < nb)
	{
		if (mine[i] != ref[i])
			printf("Erreur, différence d'allocation");
		i++;
	}
	printf("Tout s'est bien passé, it's a match !\n");
	free(ref);
	free(mine);
	return (0);
}

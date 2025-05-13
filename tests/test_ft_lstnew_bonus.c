/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_lstnew_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kassassi <kassassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 14:09:26 by kassassi          #+#    #+#             */
/*   Updated: 2025/05/13 14:32:04 by kassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	int		a;
	char	c;
	t_list	*n1;
	t_list	*n2;

	c = 'Q';
	a = 42;
	n1 = ft_lstnew(&a);
	printf("content = %d\n",*(int *)n1->content);
	n2 = ft_lstnew(&c);
	printf("content = %c\n", *(char *)n2->content);
	return (0);
}

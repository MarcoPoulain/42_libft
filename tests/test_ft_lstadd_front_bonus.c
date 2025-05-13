/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_lstadd_front_bonus.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kassassi <kassassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 15:56:09 by kassassi          #+#    #+#             */
/*   Updated: 2025/05/13 16:08:25 by kassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

int	main(void)
{
	int		a;
	int		b;
	int		c;
	t_list	*list;
	t_list	*n1;
	t_list	*n2;
	t_list	*n3;

	a = 3;
	b = 2;
	c = 1;
	list = NULL;
	n1 = ft_lstnew(&a);
	n2 = ft_lstnew(&b);
	n3 = ft_lstnew(&c);
	ft_lstadd_front(&list, n1);
	ft_lstadd_front(&list, n2);
	ft_lstadd_front(&list, n3);

	printf("content of head: %d\n", *(int *)list->content);
	printf("content of middle: %d\n", *(int *)list->next->content);
	printf("content of tail: %d\n", *(int *)list->next->next->content);
	return (0);
}

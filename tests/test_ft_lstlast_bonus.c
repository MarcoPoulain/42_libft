/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_lstlast_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kassassi <kassassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 10:57:21 by kassassi          #+#    #+#             */
/*   Updated: 2025/05/14 11:27:50 by kassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

int	main(void)
{
	int		a;
	int		b;
	int		c;
	t_list	*head;
	t_list	*n1;
	t_list	*n2;
	t_list	*n3;
	t_list	*end;

	a = 42;
	b = 44;
	c = 46;
	head = NULL;
	n3 = ft_lstnew(&c);
	n2 = ft_lstnew(&b);
	n1 = ft_lstnew(&a);
	ft_lstadd_front(&head, n3);
	ft_lstadd_front(&head, n2);
	ft_lstadd_front(&head, n1);
	printf("%d\n", *(int *)head->content);
	end = ft_lstlast(head);
	printf("Apres ft_lstlast, end: %d\n", *(int *)end->content);
	printf("Check si il y a match avec n3: %d\n", *(int *)n3->content);

	return (0);
}

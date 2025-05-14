/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_lstdelone_bonus.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kassassi <kassassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 13:04:52 by kassassi          #+#    #+#             */
/*   Updated: 2025/05/14 13:49:12 by kassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdlib.h>
#include <stdio.h>

int	main(void)
{
	t_list	*head;
	t_list	*middle;
	t_list	*tail;
	t_list	*tmp;
	char	*a;
	char	*b;
	char	*c;

	a = malloc(sizeof(char));
	b = malloc(sizeof(char));
	c = malloc(sizeof(char));
	*a = 'x';
	*b = 'y';
	*c = 'z';
	head = ft_lstnew(a);
	middle = ft_lstnew(b);
	tail = ft_lstnew(c);
	head->next = middle;
	middle->next = tail;
	tmp = head;
	while (tmp != NULL)
	{
		printf("%c\n", *(char *)tmp->content);
		tmp = tmp->next;
	}
	printf("\n");
	head->next = tail;
	ft_lstdelone(middle, free);
	tmp = head;
	while (tmp != NULL)
	{
		printf("%c\n", *(char *)tmp->content);
		tmp = tmp->next;
	}
	ft_lstdelone(head, free);
	ft_lstdelone(tail, free);
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_lstiter_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kassassi <kassassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 16:12:43 by kassassi          #+#    #+#             */
/*   Updated: 2025/05/14 16:32:59 by kassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdlib.h>
#include <stdio.h>

void	func(void *content)
{
	char	*c; 
	c = (char *)content;
	*c = *c - 23;
}

int main(void)
{
    t_list  *head;
    t_list  *middle;
    t_list  *tail;
    t_list  *tmp;
    char    *a;
    char    *b;
    char    *c;

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
	ft_lstiter(head, func);
	tmp = head;
	while (tmp)
	{
		printf("%c\n", *(char *)tmp->content);
		tmp = tmp->next;
	}
    return (0);
}


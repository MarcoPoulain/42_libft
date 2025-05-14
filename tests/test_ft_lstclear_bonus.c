/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_lstclear_bonus.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kassassi <kassassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 15:18:05 by kassassi          #+#    #+#             */
/*   Updated: 2025/05/14 15:28:52 by kassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdlib.h>
#include <stdio.h>

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
	ft_lstclear(&head, free);
	return (0);
}

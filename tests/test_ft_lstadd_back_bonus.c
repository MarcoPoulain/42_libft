/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_lstadd_back_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kassassi <kassassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 11:55:49 by kassassi          #+#    #+#             */
/*   Updated: 2025/05/14 12:18:14 by kassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

int main(void)
{
    int     a;  
    int     b;  
    int     c;  
    t_list  *head;
    t_list  *n1;
    t_list  *n2;
    t_list  *n3;
	t_list	*end;

    a = 42; 
    b = 44; 
    c = 46; 
    head = NULL;
    n3 = ft_lstnew(&c);
    n2 = ft_lstnew(&b);
    n1 = ft_lstnew(&a);
    ft_lstadd_back(&head, n1);
    ft_lstadd_back(&head, n2);
    ft_lstadd_back(&head, n3);
	printf("%d\n", *(int *)head->content);
	end = ft_lstlast(head);
	printf("%d\n", *(int *)end->content);

    return (0);
}

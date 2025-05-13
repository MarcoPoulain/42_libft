/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_lstsize_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kassassi <kassassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 16:34:35 by kassassi          #+#    #+#             */
/*   Updated: 2025/05/13 16:45:29 by kassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

int	main(void)
{
	int		a;
	int		b;
	int		c;
	t_list	*lst;
	t_list	*n1;
	t_list	*n2;
	t_list	*n3;

	a = 3;
	b = 2;
	c = 1;
	lst = NULL;
	n1 = ft_lstnew(&a);
	n2 = ft_lstnew(&b);
	n3 = ft_lstnew(&c);
	ft_lstadd_front(&lst, n1);
	ft_lstadd_front(&lst, n2);
	ft_lstadd_front(&lst, n3);
	printf("content of head: %d\n", *(int *)lst->content);
	printf("content of middle: %d\n", *(int *)lst->next->content);
	printf("content of tail: %d\n", *(int *)lst->next->next->content);
	printf("Longueur de la chainlist: %d\n", ft_lstsize(lst));
	return (0);
}

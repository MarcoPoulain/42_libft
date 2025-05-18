/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_lstmap_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kassassi <kassassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/18 15:24:41 by kassassi          #+#    #+#             */
/*   Updated: 2025/05/18 15:44:27 by kassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdlib.h>
#include <stdio.h>

void	*map_func(void *content)
{
	char	*str = (char *)content;
	char	*dest;
	int		i;

	if (ft_strncmp(str, "minuscule", 9) == 0)
		dest = ft_strdup("majuscule");
	else
		dest = ft_strdup(str);
	if (!dest)
		return (NULL);

	i = 0;
	while (dest[i])
	{
		dest[i] = ft_toupper(dest[i]);
		i++;
	}
	return (dest);
}

int	main(void)
{
	t_list	*head;
	t_list	*mid;
	t_list	*tail;
	t_list	*tmp;
	t_list	*mapped;
	char	*head_content;
	char	*mid_content;
	char	*tail_content;

	head_content = ft_strdup("une chaine");
	mid_content = ft_strdup("en");
	tail_content = ft_strdup("minuscule");

	head = ft_lstnew(head_content);
	mid = ft_lstnew(mid_content);
	tail = ft_lstnew(tail_content);

	ft_lstadd_back(&head, mid);
	ft_lstadd_back(&head, tail);
	tmp = head;
	while(tmp)
	{
		printf("%s\n", (char *)tmp->content);
		tmp = tmp->next;
	}

	mapped = ft_lstmap(head, map_func, free);
	tmp = mapped;
	while (tmp)
	{
		printf("%s\n", (char *)tmp->content);
		tmp = tmp->next;
	}
	ft_lstclear(&head, free);
	ft_lstclear(&mapped, free);
	return (0);
}

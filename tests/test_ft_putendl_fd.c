/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_putendl_fd.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kassassi <kassassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/10 11:21:27 by kassassi          #+#    #+#             */
/*   Updated: 2025/05/10 11:25:57 by kassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

int	main(void)
{
	int	fd;

	fd = open("putendl.txt", O_WRONLY | O_CREAT | O_APPEND, 0666);
	if (fd == -1)
	{
		printf("error");
		return (1);
	}
	ft_putendl_fd("ca grave en allant à la ligne yoooh", fd);
	close(fd);
	return (0);
}

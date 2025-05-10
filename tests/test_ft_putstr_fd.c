/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_putstr_fd.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kassassi <kassassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/10 10:56:07 by kassassi          #+#    #+#             */
/*   Updated: 2025/05/10 11:06:30 by kassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>

int	main(void)
{
	int	fd;

	fd = open("putstr.txt", O_WRONLY | O_CREAT | O_APPEND, 0666);
	if (fd == -1)
	{
		printf("error");
		return (1);
	}
	ft_putstr_fd("Gravé dans le marbre binaire", fd);
	close(fd);
	return (0);
}

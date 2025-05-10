/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_putchar_fd.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kassassi <kassassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/10 10:30:00 by kassassi          #+#    #+#             */
/*   Updated: 2025/05/10 11:06:14 by kassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>

int	main(void)
{
	int	fd;

	fd = open("putchar.txt", O_WRONLY | O_CREAT | O_APPEND, 0666);
	if (fd == -1)
	{
		printf("Erreur");
		return (1);
	}
	ft_putchar_fd('X', fd);
	close(fd);
	return (0);
}

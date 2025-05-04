/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strrchr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kassassi <kassassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 14:55:33 by kassassi          #+#    #+#             */
/*   Updated: 2025/05/04 14:57:10 by kassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>
#include <string.h>
void    test_strrchr(const char *str, int c)
{
    printf("Standard fonction: %s, pour %c\n", strrchr(str, c), c); 
    printf("Ma fonction: %s, pour %c\n\n", ft_strrchr(str, c), c); 
}
int main(void)
{
    test_strrchr("abcdef", 'd');
    test_strrchr("", '\0');
    test_strrchr("abcdef", 'g');
    test_strrchr("abcdef", '\0');
    test_strrchr("abcdef", 'a');
    test_strrchr("abcdcef", 'c');

    return (0);
}

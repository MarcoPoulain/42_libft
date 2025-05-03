/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isascii.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kassassi <kassassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 14:24:54 by kassassi          #+#    #+#             */
/*   Updated: 2025/05/03 14:26:20 by kassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>
#include <ctype.h>         

void    test_isascii(int c)
{
    printf("%d le retour de la fonction standard: %d\n", c, !!isascii(c));
    printf("%d le retour de ma fonction: %d\n\n", c, ft_isascii(c));
}
int main(void)
{
    int     lru[7] = {'5', 'g', '*', '0', '\n', 480, 56};
    int     i = 0;
        
    while (i < 7)
    {   
        test_isascii(lru[i]);
        i++;
    }   
    return (0);
}

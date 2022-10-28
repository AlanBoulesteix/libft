/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulest <aboulest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 23:34:56 by aboulest          #+#    #+#             */
/*   Updated: 2022/10/28 18:02:02 by aboulest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strchr(const char *s, int c)
{
    int     i;
    char    *ptr;

    i = 0;
    ptr = (char*)s;
    while(ptr[i])
    {
        if (c == ptr[i])
            return (&ptr[i]);
        i++;
    }
    return (NULL);
}

#include <stdio.h>
#include <string.h>

int main(void)
{
    int c;
    char    *s = "Salut";

    c = '';
    printf ("La vraie fonction: %s\n", strchr(s, c));
    printf ("Ma fonction: %s\n", ft_strchr(s, c));
    return (0);
}

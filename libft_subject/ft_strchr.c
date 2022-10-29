/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulest <aboulest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 23:34:56 by aboulest          #+#    #+#             */
/*   Updated: 2022/10/29 13:13:17 by aboulest         ###   ########.fr       */
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

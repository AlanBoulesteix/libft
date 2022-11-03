/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulest <aboulest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 13:16:56 by aboulest          #+#    #+#             */
/*   Updated: 2022/10/31 00:06:54 by aboulest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memchr(const void *s, int c, size_t n)
{
    size_t i;

    i = 0;
    while (i < n)
    {
        if (((const char*)s)[i] == c)
            return ((void*)s + i);
        i++;
    }
    return (NULL);
}

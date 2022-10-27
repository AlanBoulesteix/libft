/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulest <aboulest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 01:05:45 by aboulest          #+#    #+#             */
/*   Updated: 2022/10/28 01:37:30 by aboulest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *memccpy(void *dst, const void *src, int c, size_t n)
{
    size_t    i;

    i = 0;
    while (i < n && ((unsigned char*)src)[i] != c)
    {
        ((unsigned char*)dst)[i] = ((unsigned char*)src)[i];
        i++;
    }
    return(dst);
}

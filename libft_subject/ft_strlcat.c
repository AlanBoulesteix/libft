/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulest <aboulest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 15:03:22 by aboulest          #+#    #+#             */
/*   Updated: 2022/11/02 16:36:03 by aboulest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t dstsize)
{
    size_t i;
    size_t lendst;

    i = 0;
    lendst = ft_strlen(dst);
    if (dstsize)
    {
        while (src[i] && i < dstsizei - 1)
        {
            dst[lendst + i] = src[i];
            i++;
        }
        dst[lendst + i] = 0;
    }
    return (lendst + i);
}

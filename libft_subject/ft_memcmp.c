/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulest <aboulest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 13:45:02 by aboulest          #+#    #+#             */
/*   Updated: 2022/10/28 13:45:04 by aboulest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    size_t i;
    while (i < n)
    {
        if (((const char*)s1)[i] != ((const char*)s2)[i])
            return (((const char*)s1)[i] - ((const char*)s1)[i]);
        i++;
    }
    return (0);
}

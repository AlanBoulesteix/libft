/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulest <aboulest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 23:36:15 by aboulest          #+#    #+#             */
/*   Updated: 2022/10/27 23:36:17 by aboulest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strrchr(const char *s, int c)
{
    int     i;
    char    *ptr;
    
    i = ft_strlen(s);
    ptr = (char*)s;
    while (i > 0)
    {
        if (c == ptr[i])
            return (&ptr[i]);
        i--;
    }
    return (&ptr[i]);
}

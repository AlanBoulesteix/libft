/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulest <aboulest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 23:35:16 by aboulest          #+#    #+#             */
/*   Updated: 2022/10/28 19:40:59 by aboulest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strdup(const char *s)
{
    char    *dup;
    int     i;
    int     len;
    
    i = 0;
    len = ft_strlen(s); 
    dup = malloc(sizeof(*dup)* (len + 1));
    if (!dup)
        return (NULL);
    while (s[i])
    {
        dup[i] = s[i];
        i++;
    }
    dup[i] = 0;
    return (dup);
}

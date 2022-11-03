/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulest <aboulest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 13:27:49 by aboulest          #+#    #+#             */
/*   Updated: 2022/11/02 17:37:00 by aboulest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int     ft_malloc_size(char const *s, char c)
{
    int nb;
    int i;

    nb = 0;
    i = 0;
    while (s[i])
    {
        while (s[i] && ft_strchr(&c,s[i]))
            i++;
        if (s[i])
            nb++;
        while (s[i] && !ft_strchr(&c,s[i]))
            i++;
    }
    return (nb);
}
char    *ft_strdup_spe(const char *str, char c)
{
    char    *dup;
    int     i;
    int     n;
    
    n = 0;
    while (str[n] && !ft_strchr(&c,str[n]))
        n++;
    dup = malloc(sizeof(char) * n);
    i = 0;
    while (str[i] && i < n)
    {
        dup[i] = str[i];
        i++;
    }
    dup[i] = 0;
    return (dup);
    
}
char    **ft_split(const char *s, char c)
{
    char    **split;
    int     i;
    int     j;
    int     count;

    split = malloc (sizeof(char*) * ft_malloc_size (s, c));
    i = 0;
    j = 0;
    count = 0;
    while (s[i])
    {
        while (s[i] && ft_strchr(&c,s[i]))
            i++;
        if (s[i] && !ft_strchr(&c,s[i]))
            split[j] = ft_strdup_spe(s + i, c);
        while (s[i] && !ft_strchr(&c,s[i]))
            i++;
        if (s[i])
            j++;
    }
    return(split);
}

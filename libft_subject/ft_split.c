/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulest <aboulest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 13:27:49 by aboulest          #+#    #+#             */
/*   Updated: 2022/10/29 14:30:19 by aboulest         ###   ########.fr       */
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

char    **ft_split(const char *s, char c)
{
    char    **split;
    int     i;
    int     j;

    split = malloc (sizeof(char*) * ft_malloc_size (s, c));
    i = 0;
    j = 0;
    while (s[i])
    {
        while (s[i] && !ft_strchr(&c,s[i]))
        {
            split[j][i] = s[i];
            i++;
        }
        if (s[i] && split[j] && !ft_strchr(&c, s[i]))
            j++;
        i++;
    }
    return(split);
}


int main(void)
{
    char    *s;
    char    c;
    char    **split;
    int i;

    i = 0;
    s = "  Bonjour la terre ";
    c = ' ';
    split = ft_split(s,c);
    printf ("%s\n",split[i]);
    return (0);
}

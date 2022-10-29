/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulest <aboulest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 12:16:50 by aboulest          #+#    #+#             */
/*   Updated: 2022/10/29 13:20:02 by aboulest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strtrim(char const *s1, char const *set)
{
    int     i;
    int     j;
    char    *str;

    str = malloc (sizeof(char) * ft_strlen(s1));
    if (!str)
        return (NULL);
    i = 0;
    j = 0;
    while (s1[i])
    {
        while (s1[i] && ft_strchr(set, s1[i]))
            i++;
        str[j] = s1[i];
        j++;
        i++;
    }
    str[j] = '\0';
    return (str);
}

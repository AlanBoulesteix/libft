/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulest <aboulest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 23:34:56 by aboulest          #+#    #+#             */
/*   Updated: 2022/10/27 23:34:58 by aboulest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
    return (&ptr[i]);
}

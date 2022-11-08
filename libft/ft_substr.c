/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulest <aboulest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 17:55:04 by aboulest          #+#    #+#             */
/*   Updated: 2022/11/07 12:44:22 by aboulest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*str;

	str = malloc(sizeof(char) * len);
	if (!str)
		return (NULL);
	i = start;
	j = 0;
	while (s[i] && i < (start + len))
	{
		str[j] = s[i];
		i++;
		j++;
	}
	str[j] = 0;
	return (str);
}

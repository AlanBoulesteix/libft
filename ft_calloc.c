/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulest <aboulest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 19:33:39 by aboulest          #+#    #+#             */
/*   Updated: 2022/11/16 16:54:34 by aboulest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*cal;
	size_t	i;

	i = 0;
	if (!size || nmemb > SIZE_MAX/size)
		return (NULL);
	cal = malloc(nmemb * size);
	if (!cal)
		return (NULL);
	while (i < nmemb * size)
	{
		((unsigned char *)cal)[i] = 0;
		i++;
	}
	return (cal);
}

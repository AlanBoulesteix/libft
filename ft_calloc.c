/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulest <aboulest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 19:33:39 by aboulest          #+#    #+#             */
/*   Updated: 2022/11/08 17:31:25 by aboulest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*cal;
	size_t	i;

	i = 0;
	cal = malloc(count * size);
	if (!cal)
		return (NULL);
	while (i < count)
	{
		((char *)cal)[i] = 0;
		i++;
	}
	return (cal);
}

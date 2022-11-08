/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulest <aboulest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 14:52:59 by aboulest          #+#    #+#             */
/*   Updated: 2022/11/07 14:44:22 by aboulest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_nb_chiffre(int n)
{
	int		count;
	long	long_n;

	long_n = n;
	count = 0;
	if (long_n < 0)
		long_n = -long_n;
	while (long_n != 0)
	{
		count++;
		long_n = long_n / 10;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		nbchiffre;
	long	long_n;

	long_n = n;
	nbchiffre = ft_nb_chiffre(n);
	if (long_n < 0)
		long_n = -long_n;
	str = malloc(sizeof(char) * nbchiffre);
	if (!str)
		return (NULL);
	str[nbchiffre] = 0;
	nbchiffre--;
	while (nbchiffre >= 0)
	{
		str[nbchiffre] = (long_n % 10) + '0';
		long_n = long_n / 10;
		nbchiffre --;
	}
	if (n < 0)
		str = ft_strjoin("-", str);
	return (str);
}

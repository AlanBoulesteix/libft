/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulest <aboulest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 09:29:26 by aboulest          #+#    #+#             */
/*   Updated: 2022/11/15 15:54:16 by aboulest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*mapi;
	int		i;

	mapi = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!mapi)
		return (NULL);
	i = 0;
	while (s[i])
	{
		mapi[i] = f(i, s[i]);
		i++;
	}
	return (mapi);
}
/*
char    ft_fonction(unsigned  int nb, char c)
{
	return (c + nb);
}

#include <stdio.h>

int main(void)
{
	char    *word;
	char	*str;
	void	(*f)(unsigned int, char);

	f = ft_fonction;
	word = "bonjour";
	str = ft_strmapi(word, f);
	
	return (0);
}*/

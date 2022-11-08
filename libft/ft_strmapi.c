/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulest <aboulest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 09:29:26 by aboulest          #+#    #+#             */
/*   Updated: 2022/11/07 14:29:15 by aboulest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*mapi;
	int		i;

	mapi = malloc(sizeof(*mapi) * ft_strlen(s));
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
   nb = 32;
   return (c + nb);
   }

#include <stdio.h>

int main(void)
{
char    *word;

word = "bonjour";

printf ("%s\n", ft_strmapi(word, ft_fonction(unsigned int, char)));
return (0);
}*/

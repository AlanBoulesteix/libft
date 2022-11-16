/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulest <aboulest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 13:27:49 by aboulest          #+#    #+#             */
/*   Updated: 2022/11/16 16:17:07 by aboulest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_chr(char c, char s)
{
	return (c == s);
}

static int	ft_malloc_size(char const *s, char c)
{
	int	nb;
	int	i;

	nb = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] && ft_chr(c, s[i]))
			i++;
		if (s[i])
			nb++;
		while (s[i] && !ft_chr(c, s[i]))
			i++;
	}
	return (nb);
}

static char	*ft_strdup_spe(const char *str, char c)
{
	char	*dup;
	int		i;
	int		n;

	n = 0;
	while (str[n] && !ft_chr(c, str[n]))
		n++;
	dup = malloc(sizeof(char) * (n + 1));
	i = 0;
	while (str[i] && i < n)
	{
		dup[i] = str[i];
		i++;
	}
	dup[i] = 0;
	return (dup);
}

char	**ft_split(const char *s, char c)
{
	char	**split;
	int		i;
	int		j;

	split = malloc (sizeof(char *) * (ft_malloc_size (s, c) + 1));
	if (!split)
		return (0);
	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] && ft_chr(c, s[i]))
			i++;
		if (s[i] && !ft_chr(c, s[i]))
			split[j] = ft_strdup_spe(s + i, c);
		while (s[i] && !ft_chr(c, s[i]))
			i++;
		if (s[i])
			j++;
	}
	split[j] = 0;
	return (split);
}
/*
int    main(void)
{
    char s[] = "tripouille";
    char c = ' ';
    char **split = ft_split(s, 0);
    int    i = 0;
    while (split[i])
    {
        printf("%s\n", split[i]);
        free(split[i]);
		i++;
    }
	free(split);
    return (0);
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulest <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 11:49:00 by aboulest          #+#    #+#             */
/*   Updated: 2022/11/08 19:02:01 by aboulest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stddef.h>
# include <stdlib.h>

/*PARTIE I*/
/*PARTIE I*/
/*PARTIE I*/

void	*ft_memset(void *b, int c, int len);
void	ft_bzero(void *str, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memccpy(void *dst, const void *src, int c, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t len);/* A CORRIGER */
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
size_t	ft_strlen(const char *str);
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_toupper(int c);
int		ft_tolower(int c);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize); /* A CORRIGER */
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
int		ft_atoi(const char *str);

void	*ft_calloc(size_t count, size_t size); /*A CORRIGER */
char	*ft_strdup(const char *s);

/*PARTIE I*/
/*PARTIE I*/
/*PARTIE I*/

/*PARTIE II*/
/*PARTIE II*/
/*PARTIE II*/

char	*ft_substr(char const *s, unsigned int start, size_t len);
char	**ft_split(char const *s, char c); /* A CORRIGER */
char	*ft_strtrim(char const *s1, char const *set); /* A CORRIGER */
char	*ft_strjoin(char const *s1, char const *s2);/* A CORRIGER */
char	*ft_itoa(int n);/* A CORRIGER */
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char)); /* A
CORRIGER*/
void	ft_striteri(char *s, void (*f)(unsigned int, char*)); /* A CORRIGER */
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd); /* A CORRIGER */

/*PARTIE II*/
/*PARTIE II*/
/*PARTIE II*/

#endif

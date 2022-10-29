#ifndef LIBFT_H
# define LIBFT_H


#include <stddef.h>
#include <stdlib.h>

/*PARTIE I*/
/*PARTIE I*/
/*PARTIE I*/

void    *ft_memset(void *b, int c, int len);
void    ft_bzero(char *str, int n);
void    *ft_memcpy(void *dst, const void *src, size_t n);
void    *ft_memccpy(void *dst, const void *src, int c, size_t n);
void    *ft_memmove(void *dst, const void *src, size_t len);
void    *ft_memchr(const void *s, int c, size_t n);
int     ft_memcmp(const void *s1, const void *s2, size_t n);
size_t  ft_strlen(const char *str);
int     ft_isalpha(int c);
int     ft_isdigit(int c);
int     ft_isalnum(int c);
int     ft_isascii(int c);
int     ft_isprint(int c);
int     ft_toupper(int c);
int     ft_tolower(int c);
char    *ft_strchr(const char *s, int c);
char    *ft_strrchr(const char *s, int c);
int     ft_strncmp(const char *s1, const char *s2, size_t n);
size_t  ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t  ft_strlcat(char *dst, const char *src, size_t dstsize);
char    *ft_strnstr(const char *haystack, const char *needle, size_t len);
int ft_atoi(const char *str);

void    *ft_calloc(size_t count, size_t size);
char    *ft_strdup(const char *s);

/*PARTIE I*/
/*PARTIE I*/
/*PARTIE I*/

/*PARTIE II*/
/*PARTIE II*/
/*PARTIE II*/

char    *ft_strtrim(char const *s1, char const *set);
char    **ft_split(char const *s, char c);
//ft_itoa
//ft_strmapi
//ft_putchar_fd
//ft_putstr_fd
//ft_putendl_fd
//ft_putnbr_fd

/*PARTIE II*/
/*PARTIE II*/
/*PARTIE II*/

#endif

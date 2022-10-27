#ifndef LIBFT_H
# define LIBFT_H

/*VERIFIE SI TOUTES LES FONCTIONS SONT BIEN DANS TON .H BG */
/*VERIFIE SI TOUTES LES FONCTIONS SONT BIEN DANS TON .H BG */
/*VERIFIE SI TOUTES LES FONCTIONS SONT BIEN DANS TON .H BG */
/*VERIFIE SI TOUTES LES FONCTIONS SONT BIEN DANS TON .H BG */
/*VERIFIE SI TOUTES LES FONCTIONS SONT BIEN DANS TON .H BG */

#include <stddef.h>

void    *ft_memset(void *b, int c, int len);
void    ft_bzero(char *str, int n);
void    *memcpy(void *dst, const void *src, size_t n);
void    *memccpy(void *dst, const void *src, int c, size_t n);
//memmove
//memchr
//memcmp
int     ft_strlen(const char *str);
int     ft_isalpha(int c);
int     ft_isdigit(int c);
int     ft_isalnum(int c);
int     ft_isascii(int c);
int     ft_isprint(int c);
int     ft_toupper(int c);
int     ft_tolower(int c);
char    *ft_strchr(const char *s, int c);
char    *ft_strrchr(const char *s, int c);
int ft_strncmp(const char *s1, const char *s2, size_t n);
//strlcpy
//strlcat
//strnstr
int ft_atoi(const char *str);

//calloc
char    *ft_strdup(const char *s);
/*VERIFIE SI TOUTES LES FONCTIONS SONT BIEN DANS TON .H BG */
/*VERIFIE SI TOUTES LES FONCTIONS SONT BIEN DANS TON .H BG */
/*VERIFIE SI TOUTES LES FONCTIONS SONT BIEN DANS TON .H BG */
/*VERIFIE SI TOUTES LES FONCTIONS SONT BIEN DANS TON .H BG */
/*VERIFIE SI TOUTES LES FONCTIONS SONT BIEN DANS TON .H BG */

#endif

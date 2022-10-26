#include "libft.h"
#include <stdlib.h>

char    *ft_strdup(const char *s)
{
    char    *dup;
    int     i;
    int     len;
    
    i = 0;
    len = ft_strlen(s); 
    dup = malloc(sizeof(*dup)* (len + 1));
    if (!dup)
        return (NULL);
    while (s[i])
    {
        dup[i] = s[i];
        i++;
    }
    dup[i] = 0;
    return (dup);
}

char    *ft_strchr(const char *s, int c)
{
    int i;

    i = 0;
    while(s[i])
    {
        if (c == s[i])
            return (s[i]);
        i++;
    }
    return (0);
}

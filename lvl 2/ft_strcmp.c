int ft_strcmp(char *s1, char *s2) 2
{
    while (*s1) 4
    {
        if (*s1 != *s2) 6 return (*s1 - *s2);
        s1++;
        s2++;
    }
    return (*s1 - *s2);
}
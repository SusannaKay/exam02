#include <stddef.h>

char *ft_strpbrk(const char *s1, const char *s2)
{
    int i;

    i = 0;
    while (*s1)
    {
        while (s2[i])
        {
            if (*s1 == s2[i])
                return (s1);
            i++;
        }
        i = 0;
        s1++;
    }
    return (NULL);
}
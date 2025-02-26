#include <stdlib.h>
int ft_len(char *s)
{
    int i;
    i = 0;
    while (s[i])
        i++;
    return (i);
}
char *ft_strdup(char *src)
{
    char *s2;
    int i;

    i = 0;
    if (!src)
        return (NULL);
    s2 = (char *)malloc((ft_len(src) + 1 )* sizeof(char));
    if (!s2)
        return (NULL);
    while(src[i])
    {
        s2[i] = src[i];
        i++;
    }
    s2[i] = '\0';
    return(s2);
}
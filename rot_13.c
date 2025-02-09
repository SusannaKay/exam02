#include <unistd.h>
#include <stdio.h>
int	ft_strlen(char *str)
{
    int i;

    i = 0;
    while (*str)
    {
        str++;
        i++;
    }
    return (i);
}
int find_chr(char c, char *str)
{
    int i;
    i = 0;
    while (str[i])
    {
        if (str[i] == c)
            return(i);
        i++;
    }
    return(0);
}

char *ft_isup(char c)
{
    char *alpha;

    if (c >= 'a' && c <= 'z')
        alpha = "abcdefghijklmnopqrstuvwxyz";
    else if (c >= 'A' && c <= 'Z')
        alpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    else
        return (NULL);
    return (alpha);
}
int main(int argc, char *argv[])
{
    char *alpha;
    char *str;
    int i;
    int j;

    j = 0;
    if (argc == 2)
    {
        str = argv[1];
        while (str[j])
        {
            alpha = ft_isup(str[j]);
            if(alpha)
            {
                i = find_chr(str[j], alpha);
                i = (i + 13) %ft_strlen(alpha);
                write(1, &alpha[i], 1);
            }
            else
                write(1, &str[j], 1);
            j++;
        }
    }
    write(1,"\n", 1);
    return(0);
}

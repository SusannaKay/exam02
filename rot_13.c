#include <unistd.h>
int	ft_strlen(char *str)
{
    int i;

    i = 1;
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
    if (c >= 'a' || c <= 'z')
        return(1);
    if (c >= 'A' || c <= 'Z')
        return(2);
}
int main(int argc, char *argv[])
{
    char *alpha;
    char *str;
    int len;

    str = *argv;
    len = ft_strlen(alpha);
    
    
    if (argc == 2)
    { 
        while (*str)
        {
            if(ft_isup(*str) == 1)
                alpha = "abcdefghijklmnopqrstuvwxyz";
            else if(ft_isup(*str) == 2)
                alpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
            i = find_chr(*str, alpha);
            if ((i + 13) > len)

            else
                i +=
             

        }
    }
    write(1,"\n", 1);
    return(0);
}

m = 13
if i + 13 > 35
1 + 13 - 35 

else 
i + 13 



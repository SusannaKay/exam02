/*
Write a function that takes an int and converts it to a null-terminated string.
The function returns the result in a char array that you must allocate.

Your function must be declared as follows:

char	*ft_itoa(int nbr);
*/

#include <stdlib.h>
#include <limits.h>

int ft_lennbr(int nbr)
{
    int len = 0;
    if (nbr == 0)
        len = 1;
    if (nbr < 0)
    {
        len++;
        nbr *= -1;
    }
    while (nbr)
    {
        nbr /= 10;
        len++;
    }
    
    return (len);
}

char *ft_itoa(int nbr)
{
    char *num;
    int len;
    int i;

    len = ft_lennbr(nbr);
    num = (char *)malloc((len + 1) * sizeof(char));
    if (!num)
        return (NULL);
    num[len] = '\0';
    i = len - 1;
    if (nbr < 0)
    {
        if (nbr == INT_MIN)
        {
            num = "-2147483648";
            return (num);
        }
        num[0] = '-';
        nbr *= -1;
    }
    if (nbr == 0)
        num[0] = '0';
    while (nbr)
    {
        num[i--] = (nbr % 10) + '0';
        nbr /= 10;
    }
    return (num);
}
#include <stdio.h>

int main()
{
    int n = 1976;
    printf("%s", ft_itoa(n));
    return (0);
}

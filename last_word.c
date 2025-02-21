#include <unistd.h>
static int ft_strlen(char *str)
{
    int i;
    i =0;
    while (*str)
        {
            i++;
            str++;
        }
    return (i);
}
int main (int ac, char *av[])
{
    int index;

    if( ac == 2)
    {
        index = ft_strlen(av[1]);
        while (av[1][index] != 32)
            index--;
        index++;
        while (av[1][index])
            {write(1, &(av[1][index]), 1);
            index++;}
      
    }
    write (1, "\n", 1);
    return (0);
}
#include <unistd.h>

int is_printed(char *str, int index)
{
    int i;
    i = 0;
    while (i < index)
    {
        if(str[i] == str[index])
            return (-1);
        i++;
    }
    return (0);
}

int main(int ac, char *av[])
{
    int i;
    int j;
    
    i = 0;
    j = 0;
    if(ac == 3)
    {
        while (av[1][i])
        {
            while (av[2][j])
            {
                if (av[1][i] == av[2][j] && is_printed(av[1], i) == 0)
                    {
                        write(1,&(av[1][i]), 1);
                        break;
                    
                    }
                
                j++;
            }
            j = 0;
            i++;
        }

    }
    write(1, "\n", 1);
    return (0);
}
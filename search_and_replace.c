#include <unistd.h>

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while(*str)
    {
        str++;
        i++;
    }
    return (i);
}

int main(int argc, char *argv[])
{
    char *str;

    if(argc == 4)
    {
        if (ft_strlen(argv[2]) != 1 || ft_strlen(argv[3]) != 1)
        {
            write(1, "\n", 1);
            return (0);
        }
        str = argv[1];
        while(*str)
        {
            if (*str == argv[2][0])
                write(1, &(argv[3][0]), 1);
        else
            write(1, &(*str), 1);
        str++;
        }
    }
    write(1, "\n", 1);
    return (0);
}

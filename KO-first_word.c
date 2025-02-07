#include <unistd.h>

int main(int argc, char *argv[])
{
    char *str;
    str = argv[1];
    if (argc == 2)
    {
        while(*str == 32)
            str++;
        while(*str != 32)
        {
            write(1,&(*str),1);
            str++;
        }
        if (*str == '\0')
            {write(1, "\n", 1);
            return (0);}
        
    }

    write(1, "\n", 1);
    return (0);
}
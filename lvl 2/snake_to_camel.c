#include <unistd.h>

int main (int argc, char *argv[])
{
    char c;
    if (argc == 2)
    {
        while (*argv[1])
        {
            c = *argv[1];
            if( c == '_')
            {
                argv[1]++;
                c = *argv[1] - 32;
            }
            write(1, &c, 1);
            argv[1]++;
        }
    }
    write(1, "\n", 1);
    return (0);
}
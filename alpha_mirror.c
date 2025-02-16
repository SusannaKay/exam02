#include <unistd.h>

int main(int argc, char *argv[])
{
    int i;
    char c;

    i = 0;
    if (argc == 2)
    {
        while (argv[1][i])
        {
            c = argv[1][i];
            if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
                c = 122 - (argv[1][i] - 97);
            if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
                c = 90 - (argv[1][i] - 65);
            write(1, &c, 1);
            i++;
        }
    }
    write(1, "\n", 1);
    return (0);
}
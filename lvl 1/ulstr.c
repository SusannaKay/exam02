/*
Write a program that takes a string and reverses the case of all its letters.
Other characters remain unchanged.

You must display the result followed by a '\n'.

If the number of arguments is not 1, the program displays '\n'.
*/
#include <unistd.h>

int is_cap(char c)
{
    if (c >= 'a' && c <= 'z')
        return (1);
    else if (c >= 'A' && c <= 'Z')
        return (2);
    else
        return (0);
}

int main(int argc, char *argv[])
{
    char c;

    if (argc == 2)
    {
        while (*argv[1])
        {
            if (is_cap(*argv[1]) == 1) // minuscolo
                c = *argv[1] - 32;
            else if (is_cap(*argv[1]) == 2) // maiuscolo
                c = *argv[1] + 32;
            else
                c = *argv[1];
            write(1, &c, 1);
            argv[1]++;
        }
    }
    write(1, "\n", 1);
    return (0);
}
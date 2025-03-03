/*
Write a program that takes a string and displays it, replacing each of its
letters by the next one in alphabetical order.

'z' becomes 'a' and 'Z' becomes 'A'. Case remains unaffected.

The output will be followed by a \n.

If the number of arguments is not 1, the program displays \n.
*/

#include <unistd.h>
int is_alpha(char c)
{
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        return (1);
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
            c = *argv[1];
            if (is_alpha(c))
            {
                if (c != 'z' && c != 'Z')
                    c += 1;
                else
                    c -= 25;
            }
            write(1, &c, 1);
            argv[1]++;
        }
    }
    write(1, "\n", 1);
    return (0);
}

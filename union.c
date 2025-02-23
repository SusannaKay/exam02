/*

Write a program that takes two strings and displays, without doubles, the
characters that appear in either one of the strings.

The display will be in the order characters appear in the command line, and
will be followed by a \n.

If the number of arguments is not 2, the program displays \n.
*/
#include <unistd.h>

int is_printed(char c, char *s, int index)
{
    int i;
    i = 0;
    while(i < index)
    {
        if (s[i] == c)
            return (1);
        i++;
    }
    return (0);

}

int main(int argc, char *argv[])
{
    int i;
    int j;

    j = 0;
    i = 0;

    if (argc == 3)
    {
        while (argv[1][i])
        {
            if (!is_printed(argv[1][i], argv[1], i))
                write(1, &argv[1][i], 1);
            i++;
        }
        while (argv[2][j])
        {
                if (!is_printed(argv[2][j], argv[2], j) && !is_printed(argv[2][j], argv[1], i))
                    write(1, &argv[2][j], 1);
                j++;
        }
    }
    write(1, "\n", 1);
    return (0);
}
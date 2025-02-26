/*
Write a program that takes a string, and displays this string with exactly one
space between words, with no spaces or tabs either at the beginning or the end,
followed by a \n.

A "word" is defined as a part of a string delimited either by spaces/tabs, or
by the start/end of the string.

If the number of arguments is not 1, or if there are no words to display, the
program displays \n.
*/
#include <unistd.h>
int ft_strlen_space(char *s)
{
    int i;
    i = 0;

    while(s[i])
        i++;
    i--;
    while(s[i] == 32)
        i--;
    return(i);
}
int main(int argc, char *argv[])
{
    int i;
    int end;

    i = 0;
    if(argc == 2)
    {
        end = ft_strlen_space(argv[1]);
        while (argv[1][i] == 32 && argv[1][i])
            i++;
        while (i <= end)
        {
            if (argv[1][i] != 32)
                write(1, &(argv[1][i]), 1);
            if (argv[1][i] == 32)
            {
                write(1, &(argv[1][i]), 1);
                    i++;
                while (argv[1][i] == 32)
                    i++;
                i--;
            }
            i++;
        }
    }
    write(1, "\n", 1);
    return(0);
}
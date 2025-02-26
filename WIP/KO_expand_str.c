/*
Write a program that takes a string and displays it with exactly three spaces
between each word, with no spaces or tabs either at the beginning or the end,
followed by a newline.

A word is a section of string delimited either by spaces/tabs, or by the
start/end of the string.

If the number of parameters is not 1, or if there are no words, simply display
a newline.
*/
int ft_strlen(char *s)
{
    int i;
    i = 0;
    while (s[i] != '\0')
        i++;
    i--;
    while (s[i] == 32)
        i--;
    return (i);
}

int main(int argc, char *argv[])
{
    int i;
    int end;

    i = 0;
    if (argc == 2)
    {
        end = ft_strlen(argv[1]);
        while (argv[1][i] == '32')
            i++;
        while (i <= end)
        {
            if (argv[1][i] != 32)
                write(1, &(argv[1][i]), 1);
        }
    }
    write(1, "\n", 1);
    return (0);
}
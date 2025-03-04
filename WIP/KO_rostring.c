/*
Allowed functions: write, malloc, free
--------------------------------------------------------------------------------

Write a program that takes a string and displays this string after rotating it
one word to the left.

Thus, the first word becomes the last, and others stay in the same order.

A "word" is defined as a part of a string delimited either by spaces/tabs, or
by the start/end of the string.

Words will be separated by only one space in the output.

If there's less than one argument, the program displays \n.

Example:

$>./rostring "abc   " | cat -e
abc$
$>
$>./rostring "Que la      lumiere soit et la lumiere fut"
la lumiere soit et la lumiere fut Que
$>
$>./rostring "     AkjhZ zLKIJz , 23y"
zLKIJz , 23y AkjhZ
$>
$>./rostring | cat -e
$
$>
*/
#include <unistd.h>
#include <stdlib.h>
int ft_isspace(char c)
{
    if (c == 32 || c == 9)
        return (1);
    return (0);
}
int ft_strlen(char *s)
{
    int i;
    i = 0;
    while (s[i])
        i++;
    return (i);
}
char *first_word(char *str)
{
    int i;
    int z;
    char *word;

    z = 0;
    i = 0;
    while (!ft_isspace(str[i]))
        i++;
    word = malloc((i + 1) * sizeof(char));
    if (!word)
        return (NULL);
    while (word[z])
    {
        word[z] = *str;
        z++;
        str++;
    }
    return (word);
}
void putstr(char *str)
{
    while (*str)
    {
        write(1, &*str, 1);
        str++;
    }
}
int main(int argc, char *argv[])
{
    int i;
    char *word;

    i = 0;
    if (argc == 2)
    {
        while (ft_isspace(argv[1][i])) // skip spazi iniziali
            i++;
        word = first_word(&argv[1][i]);
        if (!word)
            return (free(word), 0);
        i += ft_strlen(word);
        while (argv[1][i])
        {
            while (!ft_isspace(argv[1][i]))
            {
                write(1, &argv[1][i], 1);
                i++;
            }
            if (ft_isspace(argv[1][i]))
                write(1, " ", 1);
            while (ft_isspace(argv[1][i]))
                i++;
        }
        putstr(word);
        free(word);
    }
    write(1, "\n", 1);
    return (0);
}

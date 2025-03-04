/*
Allowed functions: write, malloc, free
--------------------------------------------------------------------------------

Write a program that takes a string as a parameter, and prints its words in
reverse order.

A "word" is a part of the string bounded by spaces and/or tabs, or the
begin/end of the string.

If the number of parameters is different from 1, the program will display
'\n'.

In the parameters that are going to be tested, there won't be any "additional"
spaces (meaning that there won't be additionnal spaces at the beginning or at
the end of the string, and words will always be separated by exactly one space).

Examples:

$> ./rev_wstr "You hate people! But I love gatherings. Isn't it ironic?" | cat -e
ironic? it Isn't gatherings. love I But people! hate You$
$>./rev_wstr "abcdefghijklm"
abcdefghijklm
$> ./rev_wstr "Wingardium Leviosa" | cat -e
Leviosa Wingardium$
$> ./rev_wstr | cat -e
$
$>
*/
#include <unistd.h>
char *ft_strlen(char *s)
{
    while (*s)
        s++;
    return (s);
}
int ft_space(char c)
{
    if (c == 32 || c == 9)
        return (1);
    return (0);
}
char *word_start(char *end, char *start)
{
    while (end > start && !ft_space(*(end - 1)))
        end--;
    return (end);
}
void ft_putstr(char *start, char *end)
{
    while (start < end)
    {
        write(1, start, 1);
        start++;
    }
}
int main(int argc, char *argv[])
{
    char *end;
    char *word;
    char *start;

    if (argc == 2)
    {
        start = argv[1];
        end = ft_strlen(argv[1]);
        while (end > start)
        {
            word = word_start(end, argv[1]);
            ft_putstr(word, end);
            end = word - 1;
            if (end >= start) 
                write(1, " ", 1);
        }
    }
    write(1, "\n", 1);
    return (0);
}
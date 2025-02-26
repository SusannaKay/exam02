/*
Write a function that takes a string, splits it into words, and returns them as
a NULL-terminated array of strings.

A "word" is defined as a part of a string delimited either by spaces/tabs/new
lines, or by the start/end of the string.

Your function must be declared as follows:

char    **ft_split(char *str);
*/
#include <stdlib.h>

char **ft_split(char *str)
{
    int i;
    int j;
    int word_count;
    char **matrix;

    i = 0;
    j = 0;
    matrix = (char *) malloc(word_count * sizeof (char *));
    while(*str)
    {
        if (*str != 32)
        {
            i++;
            str++;
        }
        matrix[j] = malloc((i + 1) * sizeof (char));

        

    }

}
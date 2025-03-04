/*
Write a function that takes a string, splits it into words, and returns them as
a NULL-terminated array of strings.

A "word" is defined as a part of a string delimited either by spaces/tabs/new
lines, or by the start/end of the string.

Your function must be declared as follows:

char    **ft_split(char *str);
*/
#include <stdlib.h>
#include <stdio.h>
int count_words(char *str)
{
    int count;

    count = 0;
    while (*str)
    {
        while (*str == 32) // skip spazi
            str++;
        if (*str != 32 && *str) // inizio parola
            count++;
        while (*str && *str != 32) // skip parola
            str++;
    }
    return (count);
}

int word_len(char *str)
{
    int len;

    len = 0;
    while(str[len] && str[len] != 32)
        len++;
    return (len);
}

char **create_matrix(char **matrix, char *str)
{
    int i;
    int j;
    int len;

    i = 0;
    j = 0;

    len = word_len(str) + 1;
    matrix[i][j] = malloc(len * sizeof (char));
    if (!matrix[i][j])
    {
        while(i--)
            free(matrix[i])
    }

    matrix[i][j] = ft_substr(str, 0, len);
}

char **ft_split(char *str)
{
    char **matrix;
    if (!str || !*str)
        return (NULL);
    matrix = malloc((count_words(str) + 1) * sizeof(char *));
    if (!matrix)
        return NULL;
    

    return (0);

    // count words OK
    // malloc matrix ( words + 1) OK
    // calcolo lunghezza parole OK
    // malloc array ( lunghezza parole + 1)
    // string copy
}
int main(int argc, char *argv[])
{
    if (argc == 2)
    {
        printf("%d", count_words(argv[1]));
    }
    return (0);
}
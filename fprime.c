/*
Write a program that takes a positive int and displays its prime factors on the
standard output, followed by a newline.

Factors must be displayed in ascending order and separated by '*', so that
the expression in the output gives the right result.

If the number of parameters is not 1, simply display a newline.

The input, when there is one, will be valid.
*/
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int n;
    int i;

    i = 3;
    if (argc == 2)
    {
        n = atoi(argv[1]);
        if (n == 1)
            printf("1");
        while (i * i <= n) 
        {
            if (n % 2 == 0)
            {
                printf("2 * ");
                n /= 2;
            }
            if (n % i == 0) 
            {
                printf("%d * ", (i));
                n /= i;
            }
            else
                i += 2;
        }
        if (n > 1)
            printf("%d", n);
    }
    printf("\n");
    return (0);
}
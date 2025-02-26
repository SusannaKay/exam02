/*
Write a program that takes two strings representing two strictly positive
integers that fit in an int.

Display their highest common denominator followed by a newline (It's always a
strictly positive integer).

If the number of parameters is not 2, display a newline.

*/
#include <stdio.h>
#include <stdlib.h>
int main (int argc, char *argv[])
{
    int a;
    int b;
    int tmp;
    
    if (argc == 3)
    {
        a = atoi(argv[1]);
        b = atoi(argv[2]);
        
        while (b != 0)
        {

            tmp = b;
            b = a % b;
            a = tmp;

        }
        printf("%d", a);

    }
    printf("\n");
    return (0);
}
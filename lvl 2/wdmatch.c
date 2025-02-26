/*
Write a program that takes two strings and checks whether it's possible to
write the first string with characters from the second string, while respecting
the order in which these characters appear in the second string.

If it's possible, the program displays the string, followed by a \n, otherwise
it simply displays a \n.

If the number of arguments is not 2, the program displays a \n.
*/
#include <unistd.h>
void putstr(char *s)
{
    while(*s)
        {write(1, &(*s), 1);
        s++;}

}

int main (int argc, char *argv[])
{
    int i;
    int j;

    i = 0;
    j = 0;
    if (argc == 3)
    {
        while(argv[2][j])
        {
            if (argv[1][i] == argv[2][j])
                i++;
            j++;
        }
        if(!argv[1][i])
            putstr(argv[1]);
    }
    write(1, "\n", 1);
    return(0);
}
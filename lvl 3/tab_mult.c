/*
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that displays a number's multiplication table.

The parameter will always be a strictly positive number that fits in an int,
and said number times 9 will also fit in an int.

If there are no parameters, the program displays \n.

Examples:

$>./tab_mult 9
1 x 9 = 9
2 x 9 = 18
3 x 9 = 27
4 x 9 = 36
5 x 9 = 45
6 x 9 = 54
7 x 9 = 63
8 x 9 = 72
9 x 9 = 81
$>./tab_mult | cat -e
$
$>*/
#include <unistd.h>
#include <limits.h>

int ft_atoi(char *s)
{
    int result;

    result = 0;
    if(*s == '-')
        return(0);
    while(*s)
    {
        result = (result * 10) + *s - '0';
        s++;
    }
    return (result);}

void ft_putnbr(int n)
{
    char c;
    if (n > 9)
        ft_putnbr(n / 10);
    c = (n % 10) + '0';
    write(1, &c, 1);
}

void print_tab(int a, int b, int res) 
{
    ft_putnbr(a);
    write(1," x ", 3);
    ft_putnbr(b);
    write(1," = ", 3);
    ft_putnbr(res);
    write(1, "\n", 1);
}

int main(int argc, char* argv[])
{
    int b;
    int a;
    int res;

    if(argc == 2)
    {
        
        b = ft_atoi(argv[1]);
        a = 1;
        if (b >= INT_MAX)
        {
            write(1, "\n", 1);
            return (0);
        }
        if(b > INT_MAX / 9)
        {
            while(a <= 9)
            {
                res = a * b;
                print_tab(a, b, res);
                a += 1;
            }
        }
    }
    write(1, "\n", 1);
    return (0);
}
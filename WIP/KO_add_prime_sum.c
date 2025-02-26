/*
Write a program that takes a positive integer as argument and displays the sum
of all prime numbers inferior or equal to it followed by a newline.

If the number of arguments is not 1, or the argument is not a positive number,
just display 0 followed by a newline.

Yes, the examples are right.
*/
#include <stdio.h>
#include <unistd.h>

int ft_atoi(char *str)
{
    int result;

    result = 0;
    while (*str)
    {
        if (*str == '-')
            return (0);
        result = (result * 10) + (*str - '0');
        str++;
    }
    return (result);
}
void put_nbr(int n)
{
    char c;
    if (n > 9)
        put_nbr(n / 10);
    c = (n % 10) + '0';
    write(1, &c, 1);
}

int main(int argc, char *argv[])
{
    int n;
    int i;
    int sum;

    sum = 0;
    i = 1;
    if (argc == 2 && ft_atoi(argv[1]) != 0)
    {
        n = ft_atoi(argv[1]);
        if (n < 2)
        {
            write(1, "0\n", 2);
            return (0);
        }

        while (i * i <= n)
        {
            if (n % i == 0)
                break;
            sum += i;
            i++;
        }
        put_nbr(sum);
    }
    else
        write(1, "0", 1);
    write(1, "\n", 1);
}
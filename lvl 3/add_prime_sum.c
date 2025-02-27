/*
Write a program that takes a positive integer as argument and displays the sum
of all prime numbers inferior or equal to it followed by a newline.

If the number of arguments is not 1, or the argument is not a positive number,
just display 0 followed by a newline.
*/
#include <stdio.h>
#include <unistd.h>

int ft_atoi(char *str)
{
    int result;

    result = 0;
    if (*str == '-')
        return (0);
    while (*str)
    {
        if (*str < '0' && *str > '9')
            return (0);
        result = result * 10 + (*str - '0');
        str++;
    }
    return (result);
}

void putnbr(int n)
{
    char c;

    if (n > 9)
        putnbr(n / 10);
    c = (n % 10) + '0';
    write(1, &c, 1);
}
int is_prime(int n)
{
    int i;

    i = 2;
    while (i * i <= n)
    {
        if (n % i == 0)
            return (0);
        i++;
    }
    return (1);
}
int main(int argc, char *argv[])
{
    int n;
    int i;
    int sum;

    i = 3;
    sum = 0;
    if (argc == 2)
    {
        n = ft_atoi(argv[1]);
        if (n >= 2)
            sum = 2;
        while (i <= n)
        {
            if (is_prime(i))
            {
                sum += i;
            }
            i += 2;
        }
        putnbr(sum);
    }
    else
        write(1, "0", 1);
    write(1, "\n", 1);
    return (0);
}
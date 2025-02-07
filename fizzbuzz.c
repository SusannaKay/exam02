#include <unistd.h>
void ft_putnbr(int n)
{
    char c;

    if (n < 10)
    {
        c = n + '0';
        write(1, &c, 1);
    }
    else
        {
            ft_putnbr(n/10);
            c = (n%10) + '0';
            write(1, &c, 1);
        }

}
void ft_putstr(char *str)
{
    while (*str)
    {
        write(1, &(*str), 1);
        str++;
    }
}
int main(void)
{
    int n;

    n = 0;
    while (n <= 100)
    {
        if (n%3 == 0 && n%5 == 0)
            ft_putstr("fizzbuzz");
        else if (n%3 == 0)
            ft_putstr("fizz");
        else if (n%5 == 0)
            ft_putstr("buzz");
        else
            ft_putnbr(n);
        write(1, "\n", 1);
        n += 1;
    }
}

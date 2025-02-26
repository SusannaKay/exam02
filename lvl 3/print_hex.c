#include <unistd.h>
void print_hex(int n)
{
    char *hex;

    hex = "0123456789abcdef";
    if (n >= 16)
    {
        print_hex(n / 16);
    }
    write(1, &(hex[n % 16]), 1);
}
int ft_atoi(char *n)
{
    int result;

    result = 0;
    while (*n >= '0' && *n <= '9')
    {
        result = result * 10 + (*n - '0');
        n++;
    }
    return (result);
}

int main(int argc, char *argv[])
{
    if (argc == 2)
        print_hex(ft_atoi(argv[1]));
    write(1, "\n", 1);
    return (0);
}
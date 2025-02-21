#include <unistd.h>

void	print_bits(unsigned char octet)
{
    int n;
    char c;
    n = 0;
    while(n <= 8)
    {
        c = (octet >> n & 1) + '0';
        write(1, &c, 1);
        n++;
    }
}
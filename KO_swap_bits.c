#include <stdio.h>
#include <unistd.h>

unsigned char swap_bits(unsigned char octet)
{
    return(octet >> 4| octet <<4);
}

void print_bits(unsigned char octet)
{
    unsigned char bit;
    int index = 8;

    while(index--)
    {
        bit = ((octet>>index) & 1) + '0';
        write(1, &bit, 1);
    }
}

int main ()
{
    int n;
    n = 2;
    print_bits(n);
    printf("\n");
    print_bits(swap_bits(n));
    return (0);
}

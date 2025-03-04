/*
Write a function that takes a byte, and prints it in binary WITHOUT A NEWLINE
AT THE END.

Your function must be declared as follows:

void	print_bits(unsigned char octet);

Example, if you pass 2 to print_bits, it will print "00000010"%
*/
#include <unistd.h>

void print_bits(unsigned char octet)
{
    int index = 8;
    int bit;

    while (index--)
    {
        bit = (octet >> index & 1) + '0';
        write(1, &bit, 1);
    }
}
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

unsigned char swap_bits(unsigned char octet)
{
    return (octet >> 4 | octet << 4);
}

unsigned char reverse_bits(unsigned char octet)
{
    unsigned char result;
    while (octet)
    {
        result = result << 1 | octet & 1;
        octet >>= 1;
    }
    return (result);
}
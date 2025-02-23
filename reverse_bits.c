unsigned char reverse_bits(unsigned char octet)
{
    unsigned char result;

    while (octet)
    {
        result = (result << 1) | (octet & 1);
        octet = octet >> 1;
    }
    return ( result );
}
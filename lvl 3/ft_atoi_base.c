/*
Allowed functions: None
--------------------------------------------------------------------------------

Write a function that converts the string argument str (base N <= 16)
to an integer (base 10) and returns it.

The characters recognized in the input are: 0123456789abcdef
Those are, of course, to be trimmed according to the requested base. For
example, base 4 recognizes "0123" and base 16 recognizes "0123456789abcdef".

Uppercase letters must also be recognized: "12fdb3" is the same as "12FDB3".

Minus signs ('-') are interpreted only if they are the first character of the
string.

Your function must be declared as follows:

int	ft_atoi_base(const char *str, int str_base);
*/
int char_conv(char c)
{
    if(c >= '0' && c <= '9')
        return(c -'0');
    if(c >= 'a' && c <= 'f')
        return(c - 'a' + 10);
    if (c >= 'A' && c <= 'F')
        return(c - 'A' + 10);
    return(-1);
}
int	ft_atoi_base(const char *str, int str_base)
{
    int result;
    int sign;
    int value;

    sign = 1;
    result = 0;
    if(!*str || str_base < 2 || str_base > 16)
        return(0);
    if(*str == '-')
    {
        sign *= -1;
        str++;
    }
    while(*str)
    {
        value = char_conv(*str);
        result = (result * str_base) + value;
        str++;
    }
    return(result * sign);
}
#include <stdio.h>
int main()
{
    char str[] = "--4";
    printf("%d", ft_atoi_base(str, 4));
    return(0);

}
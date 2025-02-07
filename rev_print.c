#include <unistd.h>

int ft_strlen(char *str)
{
    int i;
    i = 0;
    while (*str)
        {i++;
        str++;}
    return (i);
}
int main( int argc, char *argv[])
{
    char *str;
    int str_len;

    str = argv[1];
    if(argc == 2)
    {
        str_len = ft_strlen(str);
        while(str_len >= 0)
            {
                write(1, &str[str_len],1);
                str_len--;
            }
    }
    write(1,"\n",1);
    return (0);
}
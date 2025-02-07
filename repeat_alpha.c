#include <unistd.h>

int ft_isalpha(char c)
{
    if (c >= 'A' && c <='Z')
        return (1);
    else if(c >= 'a' && c <='z')
        return (2);
    else
        return(0);
}
void repeat_write(int i, char c)
{
    while (i)
    {
        write(1, &c, 1);
        i--;
    }
}
int find_i(char c, int n)
{
    char *alpha;
    int i;

    i = 0;
    if (n == 1)
        alpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    else
        alpha = "abcdefghijklmnopqrstuvwxyz";
    while (alpha[i])
    {
        if (alpha[i] == c)
            return (i + 1);
        i++;
    }
    return (0);
}

int main(int argc, char *argv[])
{
    char *str;
    int i;

    i = 0;
    str = argv[1];
    if(argc == 2)
    {
        while(str[i])
        {
            if(ft_isalpha(str[i]) == 1)
                repeat_write(find_i(str[i], 1), str[i]);
            else if (ft_isalpha(str[i]) == 2)
                repeat_write(find_i(str[i], 2), str[i]);
            else
                write(1,&(str[i]),1);
            i++;
        }
    }
    write(1, "\n", 1);
    return (0);
}

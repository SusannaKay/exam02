#include "do_op.h"
int op(int a, int b, char o)
{
    if (o == '+')
        return(a+b);
    else if (o == '-')
        return (a - b);
    else if (o == '*')
        return (a * b);
    else if (o == '/')
        return (a / b);
    else
        return (a % b);
}
int main(int argc, char *argv[])
{
    int a;
    int b;
    if(argc == 4)
    {
        a = atoi(argv[1]);
        b = atoi(argv[3]);
        printf("%d", op(a, b, *argv[2]));
    }
    printf("\n");
    return(0);
}

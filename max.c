#include <stddef.h>

int		max(int* tab, unsigned int len)
{
    unsigned int i;
    int max;
    i = 0;
    max = 0;

    if (len == 0 || *tab == NULL )
    while (i < len - 1)
    {
        if (max == 0)
            max = tab[i];
        if (tab[i] > max)
            max = tab[i];
        i++;
    }
    return (max);
}
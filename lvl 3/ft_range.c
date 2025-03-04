/*
Allowed functions: malloc
--------------------------------------------------------------------------------

Write the following function:

int     *ft_range(int start, int end);

It must allocate (with malloc()) an array of integers, fill it with consecutive
values that begin at start and end at end (Including start and end !), then
return a pointer to the first value of the array.

Examples:

- With (1, 3) you will return an array containing 1, 2 and 3.
- With (-1, 2) you will return an array containing -1, 0, 1 and 2.
- With (0, 0) you will return an array containing 0.
- With (0, -3) you will return an array containing 0, -1, -2 and -3.
*/
#include <stdlib.h>

int     *ft_range(int start, int end)
{
    int len;
    int *array;
    int i;

    len = end - start;
    i = 0;
    if (len < 0)
        len *= -1;
    array = malloc((len + 1) * sizeof (int));
    if (!array)
        return(NULL);
    while (i < len)
    {
        if(start < end)
    {
        array[i] = start + i;
    }
    if (start > end)
    array[i] = start - i;

    i++;
    }
    return(array);
}
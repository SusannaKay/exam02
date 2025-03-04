/*
Write the following function:

void sort_int_tab(int *tab, unsigned int size);

It must sort (in-place) the 'tab' int array, that contains exactly 'size'
members, in ascending order.

Doubles must be preserved.

Input is always coherent.
*/
void ft_swap(int *a, int *b)
{
    int tmp;

    tmp = *a;
    *a = *b;
    *b = tmp;

}
void sort_int_tab(int *tab, unsigned int size)
{
    unsigned int i;
    int swapped;

    i = 0;
    swapped = 1;
    while (swapped)
    {
        swapped = 0;
        i = 0;
        while(i < size - 1)
    {
        
        if(tab[i] > tab[i+1])
        {
                ft_swap(&tab[i], &tab[i+1]);
                swapped = 1;
            }
            i++;
    }
    }
}
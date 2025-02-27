/*
Write a function that takes a list and a function pointer, and applies this
function to each element of the list.

It must be declared as follows:

void    ft_list_foreach(t_list *begin_list, void (*f)(void *));

The function pointed to by f will be used as follows:

(*f)(list_ptr->data);

You must use the following structure, and turn it in your file ft_list_foreach.c :

typedef struct    s_list
{
    struct s_list *next;
    void          *data;
}                 t_list;

*/
#include <stddef.h>

typedef struct s_list
{
    struct s_list *next;
    void *data;
} t_list;

void ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
    while (begin_list != NULL)
    {
        (*f)(begin_list->data);
        begin_list = begin_list->next;
    }
}
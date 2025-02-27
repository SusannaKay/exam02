/*
Write a function called ft_list_remove_if that removes from the
passed list any element the data of which is "equal" to the reference data.

It will be declared as follows :

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)());

cmp takes two void* and returns 0 when both parameters are equal.

You have to use the ft_list.h file, which will contain:

$>cat ft_list.h
typedef struct      s_list
{
    struct s_list   *next;
    void            *data;
}                   t_list;

*/
#include "ft_list.h"
#include <stddef.h>

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
   t_list *tmp;
   t_list *head;

   if (!begin_list || !*begin_list)
       return;

   head = *begin_list;
   while (head && (*cmp)(head->data, data_ref) == 0)
   {
     tmp = head;
     head = head ->next;
     free(tmp);
   }
   *begin_list = head;
   while(head && head->next)
   {
        if ((*cmp)(head->data, data_ref) == 0)
        {
            tmp = head ->next;
            head = tmp->next;
            free(tmp);
        }
        else
        head = head->next;
   }

}
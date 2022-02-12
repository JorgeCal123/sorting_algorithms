#include "sort.h"
/**
 * insertion_sort_list - function that sorts a doubly linked list
 * of integers in ascending order using the Insertion sort
 * algorithm
 * @list: is a list type listint_t
 */
void insertion_sort_list(listint_t **list)
{
    listint_t *i = (*list)->next;
    listint_t *j = NULL;
    listint_t *key = NULL;

    while (i)
    {

        key = i;
        j = i->prev;
        if((*list)->prev != NULL)
          (*list) = (*list)->prev;
        while(j->n > key->n)
        {
            j->next = i->next;
            if (i->next != NULL)
                i->next->prev = j;
            i->next = j;
            i->prev = j->prev;
            if (j->prev != NULL)
                j->prev->next = i;
            j->prev = i;

            j = j->prev; 
            if (j->prev != NULL)
              i = i->prev; 

        }
      i = (i)->next;
    }
}

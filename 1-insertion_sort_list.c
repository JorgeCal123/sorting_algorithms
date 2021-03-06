#include "sort.h"
/**
 * insertion_sort_list - function that sorts a doubly linked list
 * of integers in ascending order using the Insertion sort
 * algorithm
 * @list: is a list type listint_t
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *i = NULL;
	listint_t *j = NULL;
	listint_t *key = NULL;
	int count = 0;

	if (list == NULL || *list == NULL)
		return;
	i = (*list)->next;
	while (i)
	{

		key = i;
		j = i->prev;
		if ((*list)->prev != NULL)
			(*list) = (*list)->prev;
		while (j->n > key->n)
		{
			if (count > 0)
				print_list(*list);
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
			count += 1;
		}
		i = (i)->next;
	}
	if (count > 0)
		print_list(*list);
}

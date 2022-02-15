#ifndef MAIN_H
#define MAIN_H
/*include library*/
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stddef.h>

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

/*bubble_sort.c*/
void bubble_sort(int *array, size_t size);
/*insertion_sort_list:c*/
void insertion_sort_list(listint_t **list);
/*selection_sort.c*/
void selection_sort(int *array, size_t size);
/*quick_sort.c*/
void quick_sort(int *array, size_t size);
/*print_list.c*/
void print_list(const listint_t *list);
/*print_array.c*/
void print_array(const int *array, size_t size);
/*quick_sort.c*/
void quick_sort(int *array, size_t size);
void recursion_quick_sort(int *array, int low, int high, int size);
int partition (int *array, int low, int high, int size);
void swap(int *a, int *b);
/*shell_sort.c*/
void shell_sort(int *array, size_t size);

#endif /* MAIN_H */

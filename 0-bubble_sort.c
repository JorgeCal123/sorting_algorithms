#include "sort.h"
/**
 * bubble_sort - function that sorts an array of integers in ascending
 * order using the Bubble sort algorithm
 * @array: list with number of type integer
 * @size: size of list
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int tmp = 0;

	for (i = 1; i < size; i++)
	{
		for (j = 0; j < (size - i); j++)
			if (array[j] > array[j + 1])
			{
				tmp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = tmp;
			print_array(array, size);
		}
	}
}

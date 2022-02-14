#include "sort.h"
/**
 * swap - change the value
 * @a: value integer that change the position with b
 * @b: value integer that change the position with a
 */


void swap(int *a, int *b)
{
	int t = *a;
	*a = *b;
	*b = t;
}

/**
 * partition - This function takes last element as pivot, places the pivot
 * element at its correct position in sorted array, and places
 * all smaller (smaller than pivot
 * @array: Array to be sorted
 * @low: Starting index
 * @high: Ending index
 * @size: number of elements that the array has
 * Return: the last position
 */

int partition(int *array, int low, int high, int size)
{
	int pivot = array[high];
	int i = (low - 1);
	int j;

	for (j = low; j <= high - 1; j++)
	{
		if (array[j] < pivot)
		{
			i++;
			if (i != j)
			{
				swap(&array[i], &array[j]);
				print_array(array, size);
			}
		}
	}
	if (pivot < array[i + 1])
	{
		swap(&array[i + 1], &array[high]);
		print_array(array, size);
	}
	return (i + 1);
}

/**
 * recursion_quick_sort - The main function that implements QuickSort
 * witch recursion
 * @array: Array to be sorted
 * @low: Starting index
 * @high: Ending index
 */

void recursion_quick_sort(int *array, int low, int high, int size)
{
	if (low < high)
	{
		int pi = partition(array, low, high, size);

	recursion_quick_sort(array, low, pi - 1, size);
	recursion_quick_sort(array, pi + 1, high, size);
	}
}

/**
 * quick_sort - a function that sorts an array by quick sort
 * @array: the array to be sorted
 * @size: number of elements that the array has
 */

void quick_sort(int *array, size_t size)
{
	recursion_quick_sort(array, 0, size - 1, size);
}

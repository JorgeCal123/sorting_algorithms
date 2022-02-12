#include "sort.h"



void swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}
 
/** This function takes last element as pivot, places the pivot
 * element at its correct position in sorted array, and places
 * all smaller (smaller than pivot
 *
 */

int partition (int *array, int low, int high, int size)
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
 
/* The main function that implements QuickSort
arr[] --> Array to be sorted,
low --> Starting index,
high --> Ending index */

void recursion_quick_sort(int *array, int low, int high, int size)
{
    if (low < high)
    {
        int pi = partition(array, low, high, size);

        recursion_quick_sort(array, low, pi - 1, size);
        recursion_quick_sort(array, pi + 1, high, size);
    }
}


void quick_sort(int *array, size_t size)
{
    recursion_quick_sort(array, 0, size-1, size);
}

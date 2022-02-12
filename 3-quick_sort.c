#include "sort.h"
void swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}
 
/* This function takes last element as pivot, places
the pivot element at its correct position in sorted
array, and places all smaller (smaller than pivot)
to left of pivot and all greater elements to right
of pivot */
int partition (int *array, int low, int high)
{
    int pivot = array[high];
    int i = (low - 1);

    for (int j = low; j <= high - 1; j++)
    {

        if (array[j] < pivot)
        {
            i++;
            swap(&array[i], &array[j]);
        }
    }
    swap(&array[i + 1], &array[high]);
    return (i + 1);
}
 
/* The main function that implements QuickSort
arr[] --> Array to be sorted,
low --> Starting index,
high --> Ending index */

void quick_sort2(int *array, int low, int high)
{
    if (low < high)
    {
        int pi = partition(array, low, high);

        quick_sort2(array, low, pi - 1);
        quick_sort2(array, pi + 1, high);
    }
}
void quick_sort(int *array, size_t size)
{
    quick_sort2(array, 0, size-1);
}

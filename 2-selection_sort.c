#include "sort.h"
/**
 * selection_sort - selectio databy ordenize
 *
 * @array: input of data
 * @size: size of array
 */
void selection_sort(int *array, size_t size)
{
	unsigned long int i = 0, j = 0, min_idx = 0;
	int tmp = 0;

	for (i = 0; i < (size - 1); i++)
	{
		min_idx = i;
		for (j = (i + 1); j < size; j++)
		{
			if (array[j] < array[min_idx])
			{
				min_idx = j;
			}
			tmp = array[min_idx];
			array[min_idx] = array[i];
			array[i] = tmp;
		}
	}
}

#include "sort.h"
/**
 * shell_sort -function that sorts an array of integers in
 * ascending order using the Shell sort algorithm
 * @array: is the list with number integer
 * @size: is hte size of list
 */

void shell_sort(int *array, size_t size)
{
	int tmp;
	size_t inc = 1, j, i;

	while (inc < (size / 3))
		inc =  inc * 3 + 1;

	while (inc > 0)
	{
		for (i = inc; i < size; i++)
		{
			tmp = array[i];
			j = i;

			while (j > inc - 1 && array[j - inc] >= tmp)
			{
				array[j] = array[j - inc];
				j = j - inc;
			}
		array[j] = tmp;
		}
		print_array(array, size);
		inc = (inc - 1) / 3;
	}
}

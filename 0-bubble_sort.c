#include "sort.h"
/**
 * bubble_sort- sorts an array of ints
 * @array: arrao of ints
 * @size:size of array
 *
 */

void bubble_sort(int *array, size_t size)
{

	size_t i, k = 0;
	int n;

	while (size + k > 0)
	{
		for (i = 0; i < size - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				n = array[i];
				array[i] = array[i + 1];
				array[i + 1] = n;
				k++;
				print_array(array, size);
			}
		}
		k--;
	}
}

#include "sort.h"
/**
 * bubble_sort- sorts an array of ints
 * @array: arrao of ints
 * @size:size of array
 *
 */

void bubble_sort(int *array, size_t size)
{
	int n;
	size_t i, j;

	if (!array || !size)
		return;
	i=0;
	while(i < size)
	{
		for (j=0; j < size -1 ; j++)
		{
			if(array[j]> array[j+1])
			{
				n= array[j];
				array[j]= array[j+i];
				array[j+1]= n;
				print_array(array, size);
			}
		}
		i++;
	}
}
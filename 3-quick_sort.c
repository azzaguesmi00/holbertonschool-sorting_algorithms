#include "sort.h"
/**
 * quick_sort -Sort an array using quick_sort algorithm
 * from min to max
 * @array: array
 * @size: size
 **/
void quick_sort(int *array, size_t size)
{
	if (size < 2)
		return;

	sorting(array, 0, size - 1, size);
}
/**
 * split - Split the array and takes the last element as pivot
 * @array: Array
 * @m: first element
 * @n: The last element
 * @size: size
 * Return: int value
 **/
int split(int *array, int m, int n, size_t size)
{
	int k, i = (m), j;

	k = array[n];
	for (j = m; j < n; j++)
	{
		if (array[j] <= k)
		{
			int_swap(&array[i], &array[j]);
			if (i != j)
				print_array(array, size);
			i++;
		}
	}
	int_swap(&array[i], &array[n]);
	if (i != j)
		print_array(array, size);
	return (i);
}
/**
 * sorting - quick_sort_array
 * @array: array
 * @m: int
 * @l: last in
 * @size: size
 * Return: void
 */
void sorting(int *array, int m, int l, size_t size)
{
	int i;

	if (m < l)
	{
		i = split(array, m, l, size);
		sorting(array, m, (i - 1), size);
		sorting(array, (i + 1), l, size);
	}
}
/**
 * int_swap - swap two integers
 * @a: int
 * @b: int
 */
void int_swap(int *a, int *b)
{
	int tmp = *a;

	*a = *b;
	*b = tmp;
}

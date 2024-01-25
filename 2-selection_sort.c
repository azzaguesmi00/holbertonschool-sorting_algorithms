#include "sort.h"

/**
 * selection_sort - selection sorting method
 * @array: int*
 * @size: size_t
 */
void selection_sort(int *array, size_t size)
{
    size_t i, j, k;
    int n;

    for (i = 0; i < size - 1; i++)
    {
        k = i;
        for (j = i + 1; j < size; j++)
        {
            if (array[j] < array[k])
            {
                k = j;
                continue;
            }
        }
        if (k != i)
        {
            n = array[i];
            array[i] = array[k];
            array[k] = n;
            print_array(array, size);
        }
    }
}

#include "sort.h"

/**
 * swap_ints - Swap two integers in an array using selection method.
 * @a: the first integer to swap
 * @b: the second integer to swap
 *
 * Description: swap integers
 */
void swap_ints(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

/**
 * selection_sort - Sort an array of integer in ascending order using selection
 * @array: an array of integers to sort
 * @size: the size of the array
 *
 * Description: prints the array after each swap
 */
void selection_sort(int *array, size_t size)
{
	int *min;
	size_t i, j;

	if (size < 2)
		return;
	for (i = 0; i < size - 1; i++)
	{
		min = array + i;
		for (j = i + 1; j < size; j++)
			min = (array[j] < *min) ? (array + j) : min;

		if ((array + i) != min)
		{
			swap_ints(array + i, min);
			print_array(array, size);
		}
	}
}

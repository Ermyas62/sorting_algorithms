#include "sort.h"

/**
 * shell_sort - sorts an array of integers using shell sort algorithm
 * @array: array of integers to be sorted
 * @size: size of array
 */
void shell_sort(int *array, size_t size)
{
	int i, j, gap, n, knuth_max, temp;

	if (!array || size < 2)
		return;

	n = (int)size;
	for (gap = 1; gap < n; gap = (gap * 3) + 1)
	{
		knuth_max = gap;
	}

	for (gap = knuth_max; gap > 0; gap = (gap - 1) / 3)
	{
		for (i = gap; i < n; i++)
		{
			temp = array[i];
			for (j = i; j >= gap && array[j - gap] > temp; j -= gap)
			{
				array[j] = array[j - gap];
			}
			array[j] = temp;
		}
		print_array(array, size);
	}
}


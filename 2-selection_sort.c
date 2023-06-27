#include "sort.h"
/**
 * selection_sort- sort by selecting minimum
 * @array: array
 * @size: size of array
 * Return: nothing
 */
void selection_sort(int *array, size_t size)
{
	size_t i, times;
	int min;

	min = array[0];
	times = 1;
	while (times != size)
	{
		for (i = times; i < size; i++)
		{
			if (array[i] < min)
			{
				min = array[i];
				array[i] = array[times - 1];
				array[times - 1] = min;
			}
		}
		print_array(array, size);
		times++;
		min = array[times - 1];
	}
}

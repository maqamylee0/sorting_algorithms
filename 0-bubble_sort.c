#include "sort.h"
/**
 * sort_b- iterates while swapping
 * @array: array to swap
 * @size: size of array
 * @position: swaps made
 * Return: number of swaps
 */
int sort_b(int *array, size_t size, size_t position)
{
	int temp;
	size_t i, j, k;

	j = position;
	k = position;
	for (i = j; i < size - 1; i++)
	{
		if (array[j] > array[j + 1])
		{
			temp = array[j + 1];
			array[j + 1] = array[j];
			array[j] = temp;
			print_array(array, size);
			return (j + 1);
		}
		j++;
	}
	if (k == 0)
		return (0);
	return (j);
}
/**
 * bubble_sort- sorts using bubble sort algortithm
 * @array: array to sort
 * @size: number of elements in array
 * Return: nothing
 */
void bubble_sort(int *array, size_t size)
{
	size_t position = 0;

	position = sort_b(array, size, position);
	while (position != 0)
	{
		if (position == size - 1)
			position = 0;
		position = sort_b(array, size, position);
	}
}

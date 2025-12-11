#include "sort.h"
/**
 * selection_sort - Sorts an array of integers in ascending order
 *                  using the Selection sort algorithm
 * @array: Pointer to the array to sort
 * @size: Number of elements in the array
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, idxmin;
	int tmp;

	if (!array || size < 2)
	return;

	for (i = 0; i < size - 1; i++)
	{
		idxmin = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[idxmin])
			idxmin = j;
		}
		if (idxmin != i)
		{
			tmp = array[i];
			array[i] = array[idxmin];
			array[idxmin] = tmp;
			print_array(array, size);
		}
	}
}

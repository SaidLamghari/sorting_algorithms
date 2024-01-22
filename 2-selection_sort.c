#include "sort.h"
/**
 * selection_sort - defines the function that puts the integers of an array in
 * an ascending order using the Selection sort algorithm
 * @size: the length of the array
 * @array: the list containing the numbers to sort
 */
void selection_sort(int *array, size_t size)
{
	size_t i = 0;
	int tp;
	size_t j;
	size_t small_idx;

	if (array == NULL || size < 2)
		return;

	while (i < size - 1)
	{
		j = i + 1;
		small_idx = i;

		while (j < size)
		{
			if (array[j] < array[small_idx])
				small_idx = j;
			j++;
		}

		if (small_idx != i)
		{
			tp = array[i];
			array[i] = array[small_idx];
			array[small_idx] = tp;
			print_array(array, size);
		}
		i++;
	}
}

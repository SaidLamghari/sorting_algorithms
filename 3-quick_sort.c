#include "sort.h"
/**
 * lomut_part - Partitions of a list of integers around a value.
 * Traverses a partition of the array to find values less than the first value
 * and swaps them with the first value in the partition. then, swaps the old
 * value with the first value in the partition.
 *
 * @array: represents the array list of integers to be sorted.
 * @start: defines the starting idx .
 * @end: indicates the ending idx .
 * @size: The length of the array list.
 *
 * Return: shows the idx we found where to begin the lomuto .
 */
int lomut_part(int *array, int start, int end, size_t size)
{
	int val, tp;
	int i = start, j = start;

	val = array[end];

	while (j < end)
	{
		if (array[j] < val)
		{
			if (i != j)
			{
				tp = array[i];
				array[i] = array[j];
				array[j] = tp;
				print_array(array, size);
			}
			i++;
		}
		j++;
	}

	if (array[i] != array[end])
	{
		tp = array[i];
		array[i] = array[end];
		array[end] = tp;
		print_array(array, size);
	}

	return (i);
}




/**
 * fastsort - Defines a function that sorts a list of integers
 * using Lomuto quicksort in a recursive way.
 * @array: defines the list of int elements to be ordered.
 * @start: Indicates the starting index of the lomuto partition to be ordered.
 * @end: Indicates the last index of the lomuto partition to be ordered.
 * @size: Length of the list.
 */
void fastsort(int *array, int start, int end, size_t size)
{
	int pvt;

	if (start < end)
	{
		pvt = lomut_part(array, start, end, size);
		quicksort(array, start, pvt - 1, size);
		quicksort(array, pvt + 1, end, size);
	}
}



/**
 * quick_sort - Starts an list of integers from
 * high to low number using a quick
 * sort algorithm, with Lomuto partition scheme that we already defined
 * @array: List of int elements to put in order from high value to low value
 * @size: the length of elements that constitue the list
 */
void quick_sort(int *array, size_t size)
{
	if (!array || size < 2)
		return;

	fastsort(array, 0, (int)size - 1, size);
}

#include "sotr.h"
/**
 * shell_sort -puts the elments of an array where
 * the high value comes first and the lowest in the end.
 * @array: the list of elements to sort from high to low.
 * @size: the length of the list.
 */
void shell_sort(int *array, size_t size)
{
	size_t differ = 1, i, index;
	int tp;

	if (array == NULL || size < 2)
		return;

	while (differ < size / 3)
		differ = 3 * differ + 1;

	while (differ >= 1)
	{
		i = differ;
		while (i < size)
		{
			index = i;
			while (index >= differ && array[index] < array[index - differ])
			{
				tp = array[index];
				array[index] = array[index - differ];
				array[index - differ] = tp;
				index -= differ;
			}
			i++;
		}

		print_array(array, size);
		differ /= 3;
	}
}

#include "sort.h"
/**
 * bubble_sort - Puts high values to low values of an array in order
 * @array: The array to be sorted
 * @size: The size of the array
 */
void bubble_sort(int *array, size_t size)
{
	int tp;
	size_t cp1, cp2;

	if (array == NULL)
		return;
	if (!size)
		return;


	for (cp1 = 0; cp1 < size - 1; cp1++)
	{

		for (cp2 = 0; cp2 < size - cp1 - 1; cp2++)
		{
			if (array[cp2] > array[cp2 + 1])
			{
				tp = array[cp2];
				array[cp2] = array[cp + 1];
				array[cp2 + 1] = tp;


				print_array(array, size);
			}
		}
	}
}

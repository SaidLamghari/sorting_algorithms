#include "sort.h"
/**
 * bubble_sort - Puts high values to low values of an array in order
 * @array: The array to be sorted
 * @size: The size of the array
 */
void bubble_sort(int *array, size_t size)
{
	size_t cpt, cpt2, tmp;

	if (array == NULL)
		return;
	if (size == 0)
		return;

	for (cpt = 0; cpt < size; cpt++)
	{
		for (cpt2 = 0; cpt2 < size - 1; cpt2++)
		{
			if (array[cpt2] > array[cpt2 + 1])
			{
				tmp = array[cpt2];
				array[cpt2] = array[cpt2 + 1];
				array[cpt2 + 1] = tmp;
				print_array(array, size);
			}
		}
	}
}

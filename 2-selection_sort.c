#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * selection_sort - Sorts an array of integers in ascending order
 * using the Selection Sort algorithm.
 * @array: An array of integers
 * @size: The size of the array
 */
void selection_sort(int *array, size_t size)
{
	size_t a, b, mini, temp;

	if (array == NULL || size < 2)
		return;
	for (a = 0; a < size - 1; a++)
	{
		mini = a;

		for (b = a + 1; b < size; b++)
		{
			if (array[b] < array[mini])
				mini = b;
		}

		if (mini != a)
		{
			temp = array[a];
			array[a] = array[mini];
			array[mini] = temp;
			print_array(array, size);
		}
	}
			
}

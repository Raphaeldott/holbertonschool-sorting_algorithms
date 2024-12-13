#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * selection_sort- function that sorts an array of integers in ascending order
 *		using the Selection sort Algorithme
 *@array: an array of integers
 *@size: indicates table size array
 * Return: Always 0
 */

void selection_sort(int *array, size_t size)
{
	size_t a, b, mini, temp;


	for (a = 0; a < size; a++)
	{
		mini = a;

		for (b = a + 1; b < size; b++)
		{
			if (array[b] < array[mini])
			{
				mini = b;

				if (array[b] < array[mini])
				{
				}
			}
		}
			temp = array[a];
			array[a] = array[mini];
			array[mini] = temp;
			print_array(array, size);
		
	}
}

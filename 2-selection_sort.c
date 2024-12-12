#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */

void selection_sort(int *array, size_t size)
{
	size_t a, b, mini;
	int temp;


	for (a = 0; a < size - 1; a++)
	{
		mini = a;

		for (b = 0; b < size; b++)
		{
			if (array[b] < array[mini])
			{
				mini = b;
				temp = array[a];
				array[a] = array[b];
				array[b] = temp;
			}
}
			print_array(array, size);
	}
}

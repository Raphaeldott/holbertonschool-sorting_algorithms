#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	/*int array[] = {19, 48, 99, 71, 13, 52, 96, 73, 86, 7};
	int array1[] = {1, 2, 3, 4}; // Already sorted
	int array2[] = {4, 3, 2, 1}; // Reverse order*/
	int array3[] = {-1, -2, -3, -4}; // Negative numbers
	/*int array4[] = {5, 5, 5, 5}; // All identical elements*/

	/*size_t n = sizeof(array) / sizeof(array[0]);
	size_t n1 = sizeof(array1) / sizeof(array1[0]);
	size_t n2 = sizeof(array2) / sizeof(array2[0]);*/
	size_t n3 = sizeof(array3) / sizeof(array3[0]);
/*	size_t n4 = sizeof(array4) / sizeof(array4[0]);*/

	print_array(array3, n3);
	printf("\n");
	selection_sort(array3, n3);
	printf("\n");
	print_array(array3, n3);
	return (0);
}

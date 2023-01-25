#include <stdio.h>
#include "sort.h"
/*
 * bubble_sort - sorts array using bubble sort technique
 *
 * @array: array to be sort
 * @size: sizw of the array
 *
 * Description: Sort by comparisons adjacent indices
 * Return: Nothing
 */

void bubble_sort(int *array, size_t size)
{
	unsigned int k;
	int tmp;

	if (size < 2)
		return;

	for (int i = 0; i < size - 1; i++)
	{
		for (int j = i + 1; j size - 1; j++)
		{
			if (array[j - 1] > array[j])
			{
				tmp = array[j - 1];
				array[j - 1] = array[j];
				array[j] = tmp;
			}
			k++;
		}
		print_array(int *array, size_t size);
	}
}

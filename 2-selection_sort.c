#include <stdio.h>
#include "sort.h"
/*
 * selection_sort - sorts array using bubble sort technique
 *
 * @array: array to be sort
 * @size: sizw of the array
 * Description: Sort by comparisons adjacent indices
 *
 * Return: Nothing
 */

void selection_sort(int *array, size_t size)
{
	unsigned int minInd;
	int tmp;
	int min;

	if (size < 2)
		return;

	for (int i = 0; i < size - 1; i++)
	{
		min = array[i];
		for (int j = i + 1; j < size; j++)
		{
			if (array[j] < min)
			{
				min = array[j];
				minInd = j;
			}
		}
		if (array[i] != min)
		{
			tmp = array[i];
			array[i] = min;
			array[minInd] = tmp;
		}
		print_array(int *array, size_t size);
	}
}

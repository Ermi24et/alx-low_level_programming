#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * linear_search - a function that searches for a value in an array of integers
 * using linear search algorithm
 * @array: is a pointer to the first element of the array to search in
 * @size: the number of elements in an array
 * @value: the value to search for
 * Return: the first index where value is located
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		if (array[i] == value)
		{
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
			return (i);
		}
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	}
	return (-1);
}

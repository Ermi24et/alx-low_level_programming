#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * interpolation_search - a function that searches for a value in a sorted
 * array of integers using the interpolation search algorithm
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 * Return: the first index where value is located
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0, pos, high, i;

	if (array == NULL)
		return (-1);
	high = size - 1;
	pos = low + (((double)(high - low) / (array[high] - array[low])) *
				 (value - array[low]));
	for (i = low; i < pos && value < array[high];)
	{
		if (value > array[pos])
		{
			printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
			low = pos;
			high = size - 1;
			pos++;
		}
		else if (value < array[pos])
		{
			printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
			low = 0;
			high = size - 1;
			break;
		}
		else
		{
			printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
			return (pos);
		}
	}
	printf("Value checked array[%ld] is out of range\n", pos);
	return (-1);
}

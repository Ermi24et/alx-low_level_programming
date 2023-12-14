#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * bin_search - a function searches a value in sorted array using binary search
 * @array: a pointer to the first element of the arrray to search
 * @low: starting index
 * @high: ending index
 * @value: the value to search for
 * Return: the index where the value is located
 */

int bin_search(int *array, size_t low, size_t high, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	while (high >= low)
	{
		printf("Searching in array: ");
		for (i = low; i < high; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		i = low + (high - low) / 2;

		if (array[i] == value)
			return (i);
		if (array[i] > value)
			high = i - 1;
		else
			low = i + 1;
	}
	return (-1);
}

/**
 * exponential_search - a function that searches for a value in a sorted
 * array using exponential search
 * @array: a pointer to the first element of the array to search
 * @size: the number of elements in the array
 * @value: the value to search for
 * Return: the index where the value is located
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t i = 0, high;

	if (array == NULL)
		return (-1);

	if (array[0] != value)
	{
		for (i = 1; i < size && array[i] <= value; i = i * 2)
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	}

	if (i < size)
		high = i;
	else
		high = size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", i / 2, high);
	return (bin_search(array, i / 2, high, value));
}

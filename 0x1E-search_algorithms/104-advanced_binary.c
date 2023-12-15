#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * binary_recursive - searches a value using recursion
 * @array: a pointer to the first element of the array to search
 * @low: start of the array to search
 * @high: end of the array to search
 * @value: the value to search for
 * Return: the index where the value is located
 */

int binary_recursive(int *array, size_t low, size_t high, int value)
{
	size_t i;

	if (high < low)
		return (-1);

	printf("Searching in array: ");
	for (i = low; i < high; i++)
		printf("%d, ", array[i]);
	printf("%d\n", array[i]);

	i = low + (high - low) / 2;

	if (array[i] == value && (i == low || array[i - 1] != value))
		return (i);
	if (array[i] >= value)
		return (binary_recursive(array, low, i, value));
	return (binary_recursive(array, i + 1, high, value));
}

/**
 * advanced_binary - searches for a value using advanced binary search
 * @array: a pointer to the first element of the array to search
 * @size: the number of elements in the array
 * @value: the value to search for
 * Return: the first index where the value is located
 */

int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);

	return (binary_recursive(array, 0, size - 1, value));
}

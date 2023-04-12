#include "main.h"

/**
 * array_range - a function that creates an array of integer
 *@min: minimum range of values
 *@max: maximum range of values
 *Return: pointer to an array
 */

int *array_range(int min, int max)
{
	int *ptr;
	int i, s1;

	if (min > max)
		return (NULL);
	s1 = max - min + 1;

	ptr = malloc(sizeof(int) * s1);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
		ptr[i] = min++;

	return (ptr);
}

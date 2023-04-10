#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * create_array - a function that creates an array of chars and initializing
 *@size: size of memory
 *@c: a character to be initialized
 *
 *Return: pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *res;
	unsigned int i;

	res = malloc(sizeof(*res) * size);
	if (size == 0 || res == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
		res[i] = c;
	return (res);
}

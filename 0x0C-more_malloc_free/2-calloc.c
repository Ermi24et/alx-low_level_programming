#include "main.h"

/**
 * _calloc -  a function that allocates memory for an array
 *@nmemb: allocates memory for an array
 *@size: size of elements
 *Return: pointer to an array of pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *x;
	unsigned int y;

	if (nmemb == 0 || size == 0)
		return (NULL);
	x = malloc(nmemb * size);
	if (x == NULL)
		return (NULL);
	for (y = 0; y < (nmemb * size); y++)
		x[y] = 0;
	return (x);

}

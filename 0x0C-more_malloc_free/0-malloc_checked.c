#include "main.h"

/**
 *malloc_checked - a function that allocates memory
 *@b: an integer
 *Return: void
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}

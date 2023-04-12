#include "main.h"

/**
 * _realloc - a function that reallocates a memory block
 *@ptr: a pointer
 *@old_size: it is size in bytes allocates space for pointer
 *@new_size:it is size in bytes of new memory block
 *Return: pointer allocate new size of memory
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *res;
	unsigned int i, n = new_size;
	char *oldp = ptr;

	if (ptr == NULL)
	{
		res = malloc(new_size);
		return (res);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
		return (ptr);
	res = malloc(new_size);
	if (res == NULL)
		return (NULL);
	if (new_size > old_size)
		n = old_size;
	for (i = 0; i < n; i++)
		res[i] = oldp[i];
	free(ptr);
	return (res);
}

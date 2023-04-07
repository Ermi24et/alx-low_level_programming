#include "main.h"

/**
 * _memcpy - a function that copies memory area
 * @n:number of bytes to copy
 * @src: source memory area
 * @dest: destination memory area
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}


#include "main.h"
/**
 * _memset - a function that fills memory with a constant byte
 * @b:constant byte to to fill
 * @n:number of bytes to be filled
 * @s:address of memory its value to be replaced by constant b
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}

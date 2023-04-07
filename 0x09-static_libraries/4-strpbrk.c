#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - a function that searches a string for any of a set of bytes
 * @s: source character
 * @accept: do matching bytes
 * Return: a pointer to the byte in s,or NULL
 */
char *_strpbrk(char *s, char *accept)
{
	int j;

	while (*s)
	{
		for (j = 0; accept[j]; j++)
		{
			if (*s ==  accept[j])
				return (s);
		}
		s++;
	}
	return (NULL);
}

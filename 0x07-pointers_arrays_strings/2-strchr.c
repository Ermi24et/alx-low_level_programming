#include "main.h"
#include <stddef.h>

/**
 * _strchr - a function that locates a character in a string
 * @s: a string to be checked
 * @c: a character to find
 * Return: a pointer to c in the string s, else  NULL
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);

	return (NULL);

}

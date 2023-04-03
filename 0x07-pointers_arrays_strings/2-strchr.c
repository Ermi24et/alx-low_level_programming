#include "main.h"

/**
 * _strchr - a function that locates a character in a string
 * @s: a string to be checked
 * @c: a character to find
 * Return: a pointer to c in the string s, else  NULL
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		return (s + i);
	}
	return (null);
}

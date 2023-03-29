#include "main.h"
/**
 * string_toupper - converts all lowercase letters of a string to uppercase.
 * @c: pointer to the string to convert
 * Return: the converted string.
 */
char *string_toupper(char *c)
{
	int j;

	j = 0;
	while (c[j] != '\0')
	{
		if (c[j] >= 'a' && c[j] <= 'z')
			c[j] -= 'a' - 'A';
		j++;
	}
	return (c);
}

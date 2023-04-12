#include "main.h"

/**
 * string_nconcat - a function that concatenates two strings
 *@s1: first char
 *@s2: second char
 *@n: unsigned int
 *Return: NULL if the function fails
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int c, d, f;
	char *s;

	if (s1 == NULL)
	{
		c = 0;
	}
	else
	{
		for (c = 0; s1[c]; ++c)
		;
	}
	if (s2 == NULL)
	{
		d = 0;
	}
	else
	{
		for (d = 0; s2[d]; ++d)
		;
	}
	if (d > n)
		d = n;
	s = malloc(sizeof(char) * (c + d + 1));
	if (s == NULL)
		return (NULL);
	for (f = 0; f < c; f++)
		s[f] = s1[f];
	for (f = 0; f < d; f++)
		s[f + c] = s2[f];
	s[c + d] = '\0';
	return (s);
}

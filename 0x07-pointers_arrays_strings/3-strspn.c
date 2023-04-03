#include "main.h"

/**
 * _strspn - a function that gets the length of a prefix substring
 * @s: consists of two segments of character
 * @accept: a segment which is found in s
 * Return: number of bytes in the initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0, j, k;

	for (j = 0; s[j] != '\0'; j++)
	{
		if (s[j] != 32)
		{
			for (k = 0; accept[k] != '\0'; k++)
			{
				if (s[j] == accept[k])
					i++;
			}
		}
		else
			return (i);
	}
	return (i);
}

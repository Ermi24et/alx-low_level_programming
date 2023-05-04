#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: is pointing to a string of 0 and 1 chars
 * Return: the converted number, or 0 if
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int cnum = 0;
	int mul = 1, i = 0;

	if (b == NULL)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}
	for (i = i - 1; i >= 0; i--)
	{
		if (b[i] == '1')
		{
			cnum += mul;
		}
		mul = mul * 2;
		if (i == 0)
			break;
	}
	return (cnum);
}

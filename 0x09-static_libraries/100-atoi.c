#include "main.h"

/**
 * _atoi - Convert a string to an integer.
 * @s: The pointer to convert
 *
 * Return: A integer
 */
int _atoi(char *s)
{
	int c = 0;
	unsigned int m = 0;
	int n = 1;
	int i = 0;

	while (s[c])
	{
		if (s[c] == 45)
		{
			n *= -1;
		}

		while (s[c] >= 48 && s[c] <= 57)
		{
			i = 1;
			m = (m * 10) + (s[c] - '0');
			c++;
		}

		if (i == 1)
		{
			break;
		}

		c++;
	}

	m *= n;
	return (m);
}

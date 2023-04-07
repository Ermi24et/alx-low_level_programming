#include <stdio.h>
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
/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: arguments to be printed
 * Return:0 success, 1 error
 */

int main(int argc, char **argv)
{
	int res, n1, n2;

	if (argc < 3 || argc > 3)
	{
		printf("error\n");
		return (1);
	}
	n1 = _atoi(argv[1]);
	n2 = _atoi(argv[2]);
	res = n1 * n2;
	printf("%d\n", res);

	return (0);
}

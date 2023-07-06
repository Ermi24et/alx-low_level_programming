#include "main.h"

/**
 *print_binary - prints binary representation of a number
 *@n: a number
 *Return: void
 */

void print_binary(unsigned long int n)
{
	int i, count = 0;
	unsigned long int m;

	for (i = 63; i >= 0; i--)
	{
		m = n >> i;
		if (m & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}

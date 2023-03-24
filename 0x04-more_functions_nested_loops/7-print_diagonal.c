#include "main.h"

/**
 * print_diagonal -  a function that draws a diagonal line on the terminal
 * @n: input number of times '\' should be printed
 * Return: a diagonal
 */
void print_diagonal(int n)
{
	int s, t;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (s = 1; s <= n; s++)
		{
			for (t = 1; t < s; t++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}

#include "main.h"

/**
 * print_square - a function that prints a square, followed by a new line
 * @size: size of both width and length
 * Return: a square made of '#'
 */
void print_square(int size)
{
	int r, m;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (r = 1; r <= size; r++)
		{
			_putchar('#');
			for (m = 2; m <= size; m++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}

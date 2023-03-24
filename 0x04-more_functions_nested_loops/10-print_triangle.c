#include "main.h"

/**
 * print_triangle - a function that prints a triangle
 * @size: size of the triangle
 * Return: triangle of '#'s
 */
void print_triangle(int size)
{
	int r, t, s;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (t = 0; t <= (size - 1); t++)
		{
			for (r = 0; r < (size - 1) - t; r++)
			{
				_putchar(' ');
			}
			for (s = 0; s <= t; s++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}

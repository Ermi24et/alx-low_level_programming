#include "main.h"

/**
  * print_times_table - Prints a multiplication table up to n
  * @n: The number to be treated
  *
  * Return: Number matrix
  */
void print_times_table(int n)
{
	int r, s, t;

	if (n >= 0 && n <= 14)
	{
		for (r = 0; r <= n; r++)
		{
			for (s = 0; s <= n; s++)
			{
				t = r * s;
				if (t > 99)
				{
					_putchar(',');
					_putchar(32);
					_putchar((t / 100) + '0');
					_putchar(((t / 10) % 10) + '0');
					_putchar((t % 10) + '0');
				}
				else if (t > 9)
				{
					_putchar(',');
					_putchar(32);
					_putchar(32);
					_putchar(((t / 10) % 10) + '0');
					_putchar((t % 10) + '0');
				}
				else
				{
					if (s != 0)
					{
						_putchar(',');
						_putchar(32);
						_putchar(32);
						_putchar(32);
					}
					_putchar(t + '0');
				}
			}
			_putchar('\n');
		}
	}
}


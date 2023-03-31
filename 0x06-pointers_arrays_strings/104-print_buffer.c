#include "main.h"
#include <stdio.h>
/**
 * print_buffer - prints a buffer
 * @b: buffer.
 * @size: size of buffer.
 * Return: no return.
 */
void print_buffer(char *b, int size)
{
	int m, n, r;

	if (size <= 0)
		printf("\n");
	else
	{
		for (m = 0; m < size; m += 10)
		{
			printf("%.8x:", m);
			for (n = m; n < m + 10; n++)
			{
				if (n % 2 == 0)
					printf(" ");
				if (n < size)
					printf("%.2x", *(b + n));
				else
					printf("  ");
			}
			printf(" ");
			for (r = m; r < m + 10; r++)
			{
				if (r >= size)
					break;
				if (*(b + r) < 32 || *(b + r) > 126)
					printf("%c", '.');
				else
					printf("%c", *(b + r));
			}
			printf("\n");
		}
	}
}

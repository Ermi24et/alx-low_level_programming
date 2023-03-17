#include <stdio.h>
/**
 * main - Prints all possible combinations of a pair of
 * two digit numbers, without any repetition.
 *
 * Return: 0 on success.
 */

int main(void)
{
	int j, k;

	for (j = 0; j <= 99; j++)
	{
		for (k = 0; k <= 99; k++)
		{
			if (j < k && j != k)
			{
				putchar((j / 10) + '0');
				putchar((j % 10) + '0');
				putchar(' ');
				putchar((k / 10) + '0');
				putchar((k % 10) + '0');
				if (j != 98 || k != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

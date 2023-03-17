#include <stdio.h>
/**
 * main - prints all possible combinations of single digit numbers.
 *
 * Return: 0 on success
 */
int main(void)
{
	int d = '0';

	while (d <= '9')
	{
		putchar(d);
		if (d != '9')
		{
			putchar(',');
			putchar(' ');
		}
		++d;
	}
	putchar('\n');
	return (0);

}

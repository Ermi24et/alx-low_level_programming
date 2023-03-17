#include <stdio.h>
/**
 * main - prints the alphabet in reverse.
 *
 * Return: 0 on success
 */
int main(void)
{
	char r = 'z';

	while (r >= 'a')
	{
		putchar(r);
		r--;
	}
	putchar('\n');
	return (0);
}

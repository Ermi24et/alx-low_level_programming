#include <stdio.h>
/**
 * main - Prints the alphabet except the letters q and e.
 *
 * Return: 0 on success
 */
int main(void)
{
	char s = 'a';

	while (s <= 'z')
	{
		if (s != 'q' && s != 'e')
		{
			putchar(s);
		}
		s++;
	}
	putchar('\n');
	return (0);
}

#include <stdio.h>
/**
 * main - Prints the alphabet in lowercase, then in uppercase.
 *
 * Return: 0 on success
 */
int main(void)
{
	char s = 'a';
	char c = 'A';

	while (s <= 'z')
	{
		putchar(s);
		s++;
	}
	while (c <= 'Z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);

}

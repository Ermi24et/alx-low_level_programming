#include <stdio.h>
/**
 * main - print numbers from 00 to 99.
 *
 * Return: 0 on success
 */
int main(void)
{
	int j = '0';
	int k = '0';
	int l = '0';

	while (j <= '7')
	{
		while (k <= '8')
		{
			while (l <= '9')
			{
				if (j < k && k < l)
				{
					putchar(j);
					putchar(k);
					putchar(l);
					if (!(j == '7' && k == '8' && l == '9'))
					{
						putchar(',');
						putchar(' ');
					}

				}
				l++;
			}
			l = '0';
			k++;
		}
		k = '0';
		j++;
	}
	putchar('\n');
	return (0);
}

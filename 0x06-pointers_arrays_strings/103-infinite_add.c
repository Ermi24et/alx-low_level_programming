#include "main.h"
#include <stdio.h>
/**
 * infinite_add - adds two numbers
 * @n1: number one.
 * @n2: number two.
 * @r: buffer that the function will use to store the result.
 * @size_r: buffer size:
 * Return: the pointer to dest.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int b = 0, d = 0, xz, as, m1, m2, add = 0;

	while (*(n1 + b) != '\0')
		b++;
	while (*(n2 + d) != '\0')
		d++;
	if (b >= d)
		as = b;
	else
		as = d;
	if (size_r <= as + 1)
		return (0);
	r[as + 1] = '\0';
	b--, d--, size_r--;
	m1 = *(n1 + b) - 48, m2 = *(n2 + d) - 48;
	while (as >= 0)
	{
		xz = m1 + m2 + add;
		if (xz >= 10)
			add = xz / 10;
		else
			add = 0;
		if (xz > 0)
			*(r + as) = (xz % 10) + 48;
		else
			*(r + as) = '0';
		if (b > 0)
			b--, m1 = *(n1 + b) - 48;
		else
			m1 = 0;
		if (d > 0)
			d--, m2 = *(n2 + d) - 48;
		else
			m2 = 0;
		as--, size_r--;
	}
	if (*(r) == '0')
		return (r + 1);
	else
		return (r);
}

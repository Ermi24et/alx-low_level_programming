#include "main.h"
/**
 * check - checks for square root
 * @m: integer
 * @n: integer
 * Return: a number
 */
int check(int m, int n)
{
	if (m * m == n)
		return (m);
	if (m * m > n)
		return (-1);
	return (check(m + 1, n));
}

/**
 * _sqrt_recursion - a function returns the natural square root of a number
 * @n: number to be square rooted
 * Return: -1 if num don't have square root
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (check(1, n));
}

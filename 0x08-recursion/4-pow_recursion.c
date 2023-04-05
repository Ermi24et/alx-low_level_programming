#include "main.h"

/**
 * _pow_recursion - a function returns the value of x raised y
 *@x: value that raises y
 *@y: power to be raised
 *Return: -1 if y is lower than zero
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y != 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	else
	{
		return (1);
	}
}

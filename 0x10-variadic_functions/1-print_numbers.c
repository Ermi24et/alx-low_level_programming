#include "variadic_functions.h"

/**
 *print_numbers - a function that prints numbers, followed by a new line
 *@separator: a string to be printed between numbers
 *@n: number of integers
 *Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list var;

	va_start(var, n);

	if (separator == NULL)
		separator = "";
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(var, int));
		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");

	va_end(var);
}

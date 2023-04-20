#include "variadic_functions.h"

/**
 *print_strings - a function that prints strings, followed by a new line
 *@separator: string to be printed between the strings
 *@n: number of strings passed to the function
 *Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *res;
	va_list var;

	va_start(var, n);

	if (separator == NULL)
		separator = "";
	for (i = 0; i < n; i++)
	{
		res = va_arg(var, char*);
		if (res == NULL)
			res = "(nil)";
		printf("%s", res);
		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");

	va_end(var);
}

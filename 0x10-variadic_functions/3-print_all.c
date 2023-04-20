#include "variadic_functions.h"

/**
 *print_all - a function that prints anything
 *@format: list of types of arguments passed to the function
 *Return: void
 */

void print_all(const char * const format, ...)
{
	int i;
	int flag;
	char *str;
	va_list var;

	va_start(var, format);
	i = 0;
	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(var, int));
				flag = 0;
				break;
			case 'i':
				printf("%i", va_arg(var, int));
				flag = 0;
				break;
			case 'f':
				printf("%f", va_arg(var, double));
				flag = 0;
				break;
			case 's':
				str = va_arg(var, char*);
				if (str == NULL)
					str = "(nil)";
				printf("%s", str);
				flag = 0;
				break;
			default:
				flag = 1;
				break;
		}
		if (format[i + 1] != '\0' && flag == 0)
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(var);
}

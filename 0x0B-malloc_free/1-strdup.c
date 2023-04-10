#include "main.h"
#include <stdlib.h>

/**
 * _strdup - a function that returns a pointer to a newly allocated space
 *@str: a sring to be copied
 *Return: returns a pointer,or NULL if insufficient memory
 */

char *_strdup(char *str)
{
	char *res;
	int i = 0, j = 0;

	if (str == NULL)
		return (NULL);
	while (str[i] != '\0')
		i++;
	res = malloc(sizeof(*res) * (i + 1));
	if (res == NULL)
		return (NULL);
	for (j = 0; str[j]; j++)
		res[j] = str[j];
	return (res);
}

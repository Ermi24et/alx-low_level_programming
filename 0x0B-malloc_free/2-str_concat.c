#include "main.h"
#include <stdlib.h>

/**
 * str_concat - a function that concatenates two strings
 *@s1: first string
 *@s2: a string to be concatenated
 *Return: returns a pointer or NULL
 */

char *str_concat(char *s1, char *s2)
{
	char *res;
	int i = 0, j = 0;

	if (s1 == NULL && s2 == NULL)
		return ("");
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	res = malloc(sizeof(*res) * (i + j + 1));
	if (res == NULL)
		return (NULL);
	i = 0, j = 0;
	while (s1[i] != '\0')
	{
		res[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		res[i] = s2[j];
		i++, j++;
	}
	res[i] = '\0';
	return (res);
}

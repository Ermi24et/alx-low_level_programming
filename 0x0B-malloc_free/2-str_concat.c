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
	int i = 0, j = 0, l1 = 0, l2 = 0;

	while (s1 && s1[l1])
		l1++;
	while (s2 && s2[l2])
		l2++;
	res = malloc(sizeof(*res) * (l1 + l2 + 1));
	if (res == NULL)
		return (NULL);

	i = 0, j = 0;

	if (s1)
	{
		while (i < l1)
		{
			res[i] = s1[i];
			i++;
		}
	}
	if (s2)
	{
		while (i < (l1 + l2))
		{
			res[i] = s2[j];
			i++;
			j++;
		}
	}
	res[i] = '\0';
	return (res);
}

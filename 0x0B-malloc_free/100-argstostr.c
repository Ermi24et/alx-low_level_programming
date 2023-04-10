#include "main.h"
#include <stdlib.h>

/**
 *argstostr - a function that concatenates all the arguments
 *@ac: int input
 *@av:double pointer array
 *Return: a pointer to a new string, or NULL if it fails
 */

char *argstostr(int ac, char **av)
{
	int k, m, r1 = 0, l1 = 0;
	char *res;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (k = 0; k < ac; k++)
	{
		for (m = 0; av[k][m]; m++)
			l1++;
	}
	l1 += ac;
	res = malloc(sizeof(char) * l1 + 1);
	if (res == NULL)
		return (NULL);
	for (k = 0; k < ac; k++)
	{
		for (m = 0; av[k][m]; m++)
		{
			res[r1] = av[k][m];
			r1++;
		}
		if (res[r1] == '\0')
		{
			res[r1++] = '\n';
		}
	}
	return (res);
}

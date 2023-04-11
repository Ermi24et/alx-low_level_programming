#include "main.h"
#include <stdlib.h>

/**
 * count_word - counts number of words in string
 * @s: string to evaluate
 * Return: number of words
 */

int count_word(char *s)
{
	int f1, c1, w1;

	f1 = 0;
	w1 = 0;

	for (c1 = 0; s[c1] != '\0'; c1++)
	{
		if (s[c1] == ' ')
			f1 = 0;
		else if (f1 == 0)
		{	f1 = 1;
			w1++;
		}
	}
	return (w1);
}

/**
 * strtow - splits a string into words
 * @str: string to split
 * Return: a pointer to an array of string, or NULL
 */

char **strtow(char *str)
{
	char **res, *tmp;
	int i1, k1 = 0, l1 = 0, w1, c1 = 0, s1, e1;

	while (*(str + l1))
		l1++;
	w1 = count_word(str);
	if (w1 == 0)
		return (NULL);
	res = (char **)malloc(sizeof(char *) * (w1 + 1));
	if (res == NULL)
		return (NULL);
	for (i1 = 0; i1 <= l1; i1++)
	{
		if (str[i1] == ' ' || str[i1] == '\0')
		{
			if (c1)
			{
				e1 = i1;
				tmp = (char *)malloc(sizeof(char) * (c1 + 1));
				if (tmp == NULL)
					return (NULL);
				while (s1 < e1)
				*tmp++ = str[s1++];
				*tmp = '\0';
				res[k1] = tmp - c1;
				k1++;
				c1 = 0;
			}
		}
		else if (c1++ == 0)
			s1 = i1;
	}
	res[i1] = NULL;
	return (NULL);

}















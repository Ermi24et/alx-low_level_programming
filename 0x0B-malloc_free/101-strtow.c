#include "main.h"
#include <stdlib.h>

void util(char **, char *);
void create_word(char **, char *, int, int, int);

/**
 * strtow - splits a sting into words
 * @str: string to be split
 * Return: returns a pointer to an array of stings, or NULL
 */

char **strtow(char *str)
{
	int i1, f1, l1;
	char **words;

	if (str == NULL || str[0] == '\0' || (str[0] == ' ' && str[1] == '\0'))
		return (NULL);

	i1 = f1 = l1 = 0;

	while (str[i1])
	{
		if (f1 == 0 && str[i1] != ' ')
			f1 = 1;
		if (i1 > 0 && str[i1] == ' ' && str[i1 - 1] != ' ')
		{
			f1 = 0;
			l1++;
		}
		i1++;
	}
	l1 += f1 == 1 ? 1 : 0;
	if (l1 == 0)
		return (NULL);

	words = (char **)malloc(sizeof(char *) * (l1 + 1));
	if (words == NULL)
		return (NULL);

	util(words, str);
	words[l1] = NULL;
	return (words);
}

/**
 *util - a function used to fill words into array
 *@words: string of an array
 *@str: string to be filled
 *Return: void
 */

void util(char **words, char *str)
{
	int i, j, s1, f1;

	i = j = f1 = 0;
	while (str[i])
	{
		if (f1 == 0 && str[i] != ' ')
		{
			s1 = i;
			f1 = 1;
		}
		if (i > 0 && str[i] == ' ' && str[i - 1] != ' ')
		{
			create_word(words, str, s1, i, j);
			j++;
			f1 = 0;
		}

		i++;
	}

	if (f1 == 1)
		create_word(words, str, s1, i, j);
}

/**
 * create_word - creates a word and insert each word to an array
 * @words: words of a string
 * @str: string
 * @s1: starting index of a word
 * @e1: stopping index of a word
 * @index: index of an array
 */

void create_word(char **words, char *str, int s1, int e1, int index)
{
	int i, j;

	i = e1 - s1;
	words[index] = (char *)malloc(sizeof(char) * (i + 1));

	for (j = 0; s1 < e1; s1++, j++)
		words[index][j] = str[s1];
	words[index][j] = '\0';
}


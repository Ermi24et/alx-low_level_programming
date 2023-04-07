#include "main.h"

/**
 * _strstr - a function that locates a substring
 *@haystack: source string for the substing needle
 * @needle: a substring to be checked in strinng haystack
 *Return: a pointer, or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int m = 0, n = 0;

	while (haystack[m])
	{
		while (needle[n] && (haystack[m] == needle[0]))
		{
		if (haystack[m + n] == needle[n])
		{
			n++;
		}
		else
		{
			break;
		}
		}
		if (needle[n])
		{
			m++;
			n = 0;
		}
		else
		{
			return (haystack + m);
		}
	}
	return (0);
}

#include "main.h"

/**
 * _strlen - Returns the length of the string
 *@s:the string to be counted
 * Return: String length
 */
int _strlen(char *s)
{
	int c;

	for (c = 0; *s != '\0'; s++)
	{
		c++;
	}
	return (c);
}

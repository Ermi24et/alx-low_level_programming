#include "main.h"
#include <stdio.h>
/**
 * rot13 - a function encodes a string by rotating the characters 13 spaces
 * @s: pointer to input string
 * Return: Returns pointer encoded string
 */
char *rot13(char *s)
{
	int i, j;
	char a[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char b[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; s[i != '\0']; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (s[j] == a[j])
			{
				*(s + i) = b[j];
				break;
			}
		}
	}
	return (s);
}

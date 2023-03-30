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
	char r[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char bo;

	for (i = 0; s[i] != '\0'; i++)
	{
		bo = 0;
		for (j = 0; a[j] != '\0' && bo == 0; j++)
		{
			if (s[i] == a[j])
			{
				s[i] = r[j];
				bo = 1;
			}
		}
	}
	return (s);
}

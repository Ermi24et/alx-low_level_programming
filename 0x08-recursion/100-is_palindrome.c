#include "main.h"

int find_strlen(char *s);
int check_palindrome(char *s, int len, int index);
int is_palindrome(char *s);

/**
 * find_strlen - prints the length of a string
 * @s: the string to be printed
 * Return: length of stirng
 */
int find_strlen(char *s)
{
	int len = 0;

	if (*(s + len))
	{
		len++;
		len += find_strlen(s + len);
	}
	return (len);
}
/**
 * check_palindrome - checks if s is palindrome
 * @s: string to be checked
 * @len: the length of s
 * @index: the index of string to be checked
 * Return: 1 if palindrome ,0 otherwise
 */
int check_palindrome(char *s, int len, int index)
{
	if (s[index] == s[len / 2])
		return (1);
	if (s[index] == s[len - index - 1])
		return (check_palindrome(s, len, index + 1));

	return (0);
}
/**
 * is_palindrome - checks if string is palindrome
 * @s: the string to be checked
 * Return: -1 if palindrome,otherwise 0
 */
int is_palindrome(char *s)
{
	int index = 0;
	int len = find_strlen(s);

	if (!(*s))
		return (1);
	return (check_palindrome(s, len, index));
}

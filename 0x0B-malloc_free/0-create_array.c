#include "main.h"

/**create_array - a function that creates an array of chars and initializing
 *size: size of memory
 *c: a character to be initialized
 *
 *Return: pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c);
{
	char *res;

	if (size == 0)
	{
		return (NULL);
	}
	res = malloc(sizeof(*res) * size);
	if (res != 0)
	{
	res = c;
	return (res);
	}
	return (NULL);
}

#include "main.h"

/**
 *get_endianness - checks endianness
 *Return: 1 if big endian, 0 if little endian
 */

int get_endianness(void)
{
	int i;
	char *res;

	i = 1;
	res = (char *)&i;
	return ((int)res[0]);
}

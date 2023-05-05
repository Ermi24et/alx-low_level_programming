#include "main.h"

/**
 *get_endianness - a function that checks the endianness
 *Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	int i = 1;

	if ((*(char*)&i) == 0)
		return (0);
	return (1);
}

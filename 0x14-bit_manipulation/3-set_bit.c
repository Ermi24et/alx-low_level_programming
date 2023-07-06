#include "main.h"

/**
 *set_bit - sets the value of the bit to 1 at given index
 *@n: points to number
 *@index: index to change
 *Return: 1 n success, -1 on failure
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > (8 * sizeof(*n)) - 1)
		return (-1);
	*n = *n | (1 << index);
	return (1);
}

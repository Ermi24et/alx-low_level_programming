#include "main.h"

/**
 *get_bit - returns the value of the bit at a given index
 *@n: input long int
 *@index: controls starting
 *Return: value of a bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	return ((index > (8 * sizeof(n) - 1)) ? -1 : (int)(n >> index) & 1);
}

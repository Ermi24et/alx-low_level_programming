#include "main.h"

/**
  * flip_bits - a function that returns the number of bits
  * you would need to flip to get from one number to another
  * @n: base number
  * @m: number to change
  * Return: the number of bits
  */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, num;

	num = 0;
	for (i = 8 * sizeof(n) - 1; i >= 0; i--)
		if (((n ^ m) >> i) & 1)
			num++;
	return (num);
}

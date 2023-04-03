#include "main.h"

/**
 * print_diagsums - a function prints the sum of two diagonals of square matrix
 * @a: pointer to first elemnt address
 * @size: width of matrix
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int m, n, p, q = 0, r;

	for (m = 0; m < size; m++)
	{
		p = (m * size) + m;
		q += *(a + p);
	}
	for (n = 0; n < size; n++)
	{
		p = (n * size) + (size - 1 - n);
		r += *(a + p);
	}
	printf("%d, %d\n", q, r);
}

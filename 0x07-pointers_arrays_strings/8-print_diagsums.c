#include "main.h"

/**
 * print_diagsums - a function prints the sum of two diagonals of square matrix
 * @a: pointer to first elemnt address
 * @size: width of matrix
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int m, x, y;

	x = y = 0;
	for (m = 0; m < (size * size); m += size + 1)
		x += a[m];
	for (m = size - 1; m < (size * size - 1); m += size - 1)
		y += a[m];
	printf("%d, %d\n", x, y);
}


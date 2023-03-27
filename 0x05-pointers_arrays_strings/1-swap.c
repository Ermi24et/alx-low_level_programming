#include "main.h"

/**
 * swap_int - check the code
 *@a:number to swap
 *@b:another number to swap
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int paws;

	paws = *a;
	*a = *b;
	*b = paws;
}

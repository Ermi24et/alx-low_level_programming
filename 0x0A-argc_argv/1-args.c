#include <stdio.h>
#include "main.h"

/**
 * main - a program that prints the number of arguments
 * @argc: number of arguments
 * @argv: arguments to be printed
 * Return: always 0
 */

int main(int argc, char **argv)
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}

#include <stdio.h>
#include "main.h"

/**
 * main - a program that prints its name
 * @argc: number of arguments
 * @argv: character to be printed
 * Return: always 0
 */

int main(int argc __attribute__((unused)), char **argv)
{
	printf("%s\n", *argv);
	return (0);
}

#include <stdio.h>

/**
 * printMyfun - using the constructor attribbute in order to execute
 *    the printMyfun() before the main()
 */

void printMyfun(void) __attribute__((constructor));

/**
 * printMyfun - printing given string
 */

void printMyfun(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

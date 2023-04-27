#include <stdio.h>

/**
 *m - prints from init by the loader before main
 */
void m(void) __attribute__ ((constructor));

void m(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

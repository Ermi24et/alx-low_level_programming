#include <stdio.h>

/**
  * main - Prints the sum of Even Fibonacci numbers
  * less than 4000000.
  *
  * Return: Nothing!
  */
int main(void)
{
	int j = 0;
	long k = 1, l = 2, sum = l;

	while (l + k < 4000000)
	{
		l += k;

		if (l % 2 == 0)
			sum += l;

		k = l - k;

		++j;
	}

	printf("%ld\n", sum);
	return (0);
}

#include <stdio.h>

/**
  * main - Prints the sum of all multiples of 3 or 5 up to 1024
  *
  * Return: Always (Success)
  */
int main(void)
{
	int j, k = 0;

	while (j < 1024)
	{
		if ((j % 3 == 0) || (j % 5 == 0))
		{
			k += j;
		}

		j++;
	}

	printf("%d\n", k);
	return (0);
}

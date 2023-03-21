#include <stdio.h>

/**
  * main - Prints the first 52 fibonacci numbers
  *
  * Return: Nothing!
  */
int main(void)
{
	int j = 0;
	long k = 1, l = 2;

	while (j < 50)
	{
		if (j == 0)
			printf("%ld", k);
		else if (j == 1)
			printf(", %ld", l);
		else
		{
			l += k;
			k = l - k;
			printf(", %ld", l);
		}

		++j;
	}

	printf("\n");
	return (0);
}

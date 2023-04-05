#include "main.h"
/**
 * check - checks if a number is prime
 * @m - number
 * @n - number to check
 * Return: number
 */
int check(int m, int n)
{
	if (n < 2 || n % m == 0)
		return (0);
	else if (m > n/2)
		return (1);
	else
		return (check(m + 1, n));

}




/**
 * is_prime_number - checks if number is prime or not
 *@n the number to be checked
 *Return: 1 if number is prime if not 0
 */

int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return(check(2, n));

}

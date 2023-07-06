#include "main.h"

/**
 * is_prime_number - checks the divisor
 * @n: intege
 * @divisor: divisor
 * Return: integer
 */


int is_prime_helper(int n, int divisor)
{
	if (divisor * divisor > n)
	{
		return (1);
	}
	if (n % divisor == 0)
	{
		return (0);
	}

	return (is_prime_helper(n, divisor + 1));
}

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	if (n == 2)
	{
		return (1);
	}

	return (is_prime_helper(n, 2));
}

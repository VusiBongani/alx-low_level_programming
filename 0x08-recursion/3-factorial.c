#include "main.h"

/**
 * factorial - returns a factorial
 * @n: int parameter
 * Return: int value
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	if (n == 0)
	{
		return (1);
	}

	return (n * factorial(n - 1));
}

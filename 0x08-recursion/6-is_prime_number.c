#include "main.h"

/**
 * is_prime_number - checks the divisor
 * @n: integer
 * Return: integer
 */

int is_prime_number(int n)
{
	return (is_prime_recursive(n, 5));
}

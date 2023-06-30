#include "main.h"

/**
 * print_numbe _ print an integer
 * @n: integer parameter
 * Return: void
 */

void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	int divisor = 1;

	while (n / divisor >= 10)
	{
		divisor *= 10;
	}

	while (divisor > 0)
	{
		int digit = n / divisor;
		_putchar('0' + digit);
		n %= divisor;
		divisor /= 10;
	}
}

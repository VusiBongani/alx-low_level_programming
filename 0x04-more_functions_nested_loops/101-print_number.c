#include "main.h"
/**
 * print_number - prints an integer
 * @n: int value
 * return: void
 */

void print_number(int n)
{
	unsigned int val = n;

	if (n < 0)
	{
		_putchar('_');
		val = -val;
	}

	if ((value / 10) > 0)
		print_number(val / 10);

	_putchar((value % 10) + 48);
}

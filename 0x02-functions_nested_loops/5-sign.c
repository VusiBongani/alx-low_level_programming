#include "main.h"

/**
 * print_sign -function that prints the sign of a num
 * @n: the number
 * Return: 1 that print + if n is greaterthan zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(48);
		return (-1);
	}
}

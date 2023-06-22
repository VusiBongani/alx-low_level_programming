#include "main.h"

/**
 * print_line - Draw a straight line on the terminal
 * @n: int value
 * Return: void
 */

void print_line(int n)
{
	int b;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (b = 1; b <= n; b++)
			_putchar('_');
		_putchar('\n');
	}
}

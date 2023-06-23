#include "main.h"

/**
 * print_diagonal - prints a diagonal
 * @n: int value
 * Return: void
 */

void print_diagonal(int n)
{
	int a;
	int b;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (a = 1; a <= n; a++)
		{
			for (b = 1; b <= n; b++)
				_putchar(' ');
			_putchar(92);
			_putchar('\n');
		}
	}
}

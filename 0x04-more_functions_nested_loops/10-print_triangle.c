#include "main.h"

/**
 * print_triangle - print triangle
 * @a:Triangle size
 * Return:always 0 (success)
 */

void print_triangle(int a)
{
	int b;
	int c;

	if (a <= 0)
		_putchar('\n');
	else
	{
		for (b = 1; b <= a; b++)
		{
			for (c = 1; c <= a; c++)
			{
				if ((b + c) <= a)
					_putchar(' ');
				else
					_putchar('#');
			}
			_putchar('\n');
		}
	}
}

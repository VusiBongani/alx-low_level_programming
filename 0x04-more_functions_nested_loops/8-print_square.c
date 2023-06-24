#include "main.h"

/**
 * print_square - print a square
 * @size: size of squares
 * Return: always 0 (success)
 */

void print_square(int size)
{
	int a;
	int b;

	for (a = 1; a <= size; a++)
	{
		for (b = 1; b <= size; b++)
			_putchar('#');
		_putchar('\n');
	}
}

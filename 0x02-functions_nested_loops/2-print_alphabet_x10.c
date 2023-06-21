#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet
 * description: print out alphabet in lowercase 10x
 * Return: void
 */

void print_alphabet_x10(void)
{
	char L_case;
	int a = 0;

	while (a < 10)
	{
		for (L_case = 'a'; L_case <= 'z'; L_case++)
		{
			_putchar(L_case);
		}

		_putchar('\n');
		a++;
	}
}

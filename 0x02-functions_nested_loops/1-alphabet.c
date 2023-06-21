#include "main.h"

/**
 * print_alphabet - prints alphabet
 * description: print out alphabet in lowercase
 * Return: void
 */

void print_alphabet(void)
{
	char L_case;

	for (L_case = 'a'; L_case <= 'z'; L_case++)
	{
		_putchar(L_case);
	}

	_putchar('\n');
}

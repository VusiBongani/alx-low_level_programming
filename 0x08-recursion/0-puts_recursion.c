#include "main.h"
#include <stddef.h>

/**
 * _puts_recursion - Prints a string followed by a new line
 * @s: string
 * Return: void
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		printf("\n");
		return;
	}

	printf("%c", *s);
	_puts_recursion(s + 1);
}

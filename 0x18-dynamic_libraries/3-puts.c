#include "main.h"

/**
 * _puts - puts string followed by a new line
 * @str: parameter for string
 * Return:void
 */

void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}

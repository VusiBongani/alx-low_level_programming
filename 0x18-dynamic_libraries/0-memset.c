#include "main.h"
#include <stddef.h>

/**
 * *_memset - Fubction that fill the memory with a constant byte
 * @s: parameter char
 * @b: parameter char
 * @n: unsigned int
 * Return: a pointer to the memory s
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;

	if (s == NULL || n == 0)
	{
		return (s);
	}

	while (n > 0)
	{
		*ptr = b;
		ptr++;
		n--;
	}
	return (s);
}

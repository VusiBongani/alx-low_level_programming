#include "main.h"

/**
 * rev_string - reverse a string
 * @s: parameter used
 * Return: void
 */

void rev_string(char *s)
{
	int len = 0;
	int index = 0;
	char letters;

	while (s[index++])
		len++;

	for (index = len - 1; index >= len / 2; index--)
	{
		letters = s[index];
		s[index] = s[len - index - 1];
		s[len - index - 1] = letters;
	}
}

#include "main.h"

/**
 * _strlen - Length of a string
 * @s: string to geth length
 * Return: the string length
 */

int _strlen(char *s)
{
	int length = 0;

	while(*s++)
		length++;
	return (length);
}

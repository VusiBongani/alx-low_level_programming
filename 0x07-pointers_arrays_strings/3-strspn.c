#include "main.h"
#include <stddef.h>

/**
 * _strspn - Gets thye length of a prefix
 * @s: char parameter
 * @accept: char parameter
 * Return: number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{

	if (s == NULL || accept == NULL)
	{
		return (0);
	}

	unsigned int length = 0;

	while (*s != '\0')
	{
		char *ptr = accept;

		while (*ptr != '\0')
		{
			if (*ptr == *s)
			{
				length++;
				break;
			}
			ptr++;
		}
		if (*ptr == '\0')
		{
			break;
		}
		s++;
	}
	return (length);


#include "main.h"
#include <stddef.h>

/**
 * *_strpbrk - searches a string
 * @s: char parameter
 * @accept: char parameter
 * Return: a pointer
 */

char *_strpbrk(char *s, char *accept)
{
	if (s == NULL || accept == NULL)
	{
		return (NULL);
	}

	while (*s != '\0')
	{
		char *ptr = accept;

		while (*ptr != '\0')
		{
			if (*ptr == *s)
			{
				return (s);
			}
			ptr++;
		}
		s++;
	}
	return (NULL);
}

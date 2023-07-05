#include "main.h"
#include <stddef.h>

/**
 * *_strchr - locates a char in a string
 * @s: char parameter of a string
 * @c: char to locate
 * Return: a pointer
 */

char *_strchr(char *s, char c)
{
	if (s == NULL)
	{
		return (NULL);
	}

	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}

	if (*s == c)
	{
		return (s);
	}

	return (NULL);
}

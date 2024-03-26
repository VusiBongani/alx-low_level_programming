#include "main.h"
#include <stddef.h>

/**
 * *_strstr - locates a substring
 * @haystack: char parameter
 * @needle: char parameter
 * Return: a pointer
 */

char *_strstr(char *haystack, char *needle)
{
	if (haystack == NULL || needle == NULL)
	{
		return (NULL);
	}

	while (*haystack != '\0')
	{
		char *hay = haystack;
		char *nee = needle;

		while (*nee != '\0' && *hay  == *nee)
		{
			hay++;
			nee++;
		}

		if (*nee == '\0')
		{
			return (haystack);
		}
		haystack++;
	}

	return (NULL);
}

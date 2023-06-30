#include "main.h"

/**
 * *_strncpy - copy strings
 * @dest: parameter char
 * @src: Parameter char
 * @n: int n
 * Return:a string
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *ptr = dest;
	int i = 0;

	while (src[i] != '\0' && i < n)
	{
		*ptr = src[i];
		ptr++;
		i++;
	}

	while (i < n)
	{
		*ptr = '\0';
		ptr++;
		i++;
	}

	return (dest);
}

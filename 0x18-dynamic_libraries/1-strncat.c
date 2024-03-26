#include "main.h"

/**
 * *_strncat - concatenating two strings
 * @dest: char parameter
 * @src: char parameter
 * @n: size_t
 * Return: pointer
 */

char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest;

	while (*ptr != '\0')
	{
		ptr++;
	}

	while (*src != '\0' && n > 0)
	{
		*ptr = *src;
		ptr++;
		src++;
		n--;
	}
	*ptr = '\0';

	return (dest);
}

#include "main.h"
#include <stddef.h>

/**
 * *_memcpy - writes a functions that copies  memory area
 * @dest: char parameter
 * @src: char parameter
 * @n: unsigned int n
 * Return: a pointer
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *ptr_dest = dest;
	char *ptr_src = src;

	if (dest == NULL || src || NULL || n == 0)
	{
		return (dest);
	}

	while (n > 0)
	{
		*ptr_dest = *ptr_src;
		ptr_dest++;
		ptr_src++;
		n--;
	}
	return (dest);
}

#include "main.h"
#include <stdlib.h>

/**
 * *malloc_checked - Allocates memory
 * @b: parameter for number of bytes
 * Return: a pointer
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}

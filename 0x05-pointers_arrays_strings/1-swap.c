#include "main.h"

/**
 * swap_int - Swap integer values
 * @a: int value
 * @b: int value
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int T = *a;
	*a = *b;
	*b = T;
}

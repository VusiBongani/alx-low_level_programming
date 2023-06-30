#include "main.h"

/**
 * reverse_array - reverses the content of an array
 * @a: a pointer parameter
 * @n: int parameter
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i;
	int b;

	for (i = 0; i < n / 2; i++)
	{
		b = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = b;
	}
}

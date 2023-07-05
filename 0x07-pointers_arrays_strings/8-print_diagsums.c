#include "main.h"
#include <stddef.h>

/**
 * print_diagsums - prints the sum of the two diagonals
 * @a: integer parameter
 * @size: int parameter
 * Return: voud
 */

void print_diagsums(int *a, int size)
{
	int sum_1 = 0;
	int sum_2 = 0;
	int i;

	if (a == NULL || size <= 0)
	{
		printf("Invalid\n");
		return;
	}

	for (i = 0; i < size; i++)
	{
		sum_1 += a[i * size + i];
		sum_2 += a[i * size + (size - 1 - i)];
	}

	printf("%d", sum_1);
	printf(", ");
	printf("%d\n", sum_2);
}

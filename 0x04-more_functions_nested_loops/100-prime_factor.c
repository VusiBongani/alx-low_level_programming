#include <stdio.h>

/**
 * main - entry point
 * Return: 0 always
 */

int main(void)
{
	int a = 2;
	long int Large = 0;
	long int P = 612852475143;

	while (P != 1)
	{
		if (P % a == 0)
		{
			P /= a;
			Large = a;
		}
		else
			a++;
	}
	printf("%ld", Large);
	putchar('\n');
	return (0);
}

#include <stdio.h>

/**
 * main - Entry
 * Description: prints all possible combinations of single numbers
 * Return: always 0 (success)
 */

int main(void)
{
	int t;
	int n = 0;
	int p = 0;

	for (t = 0; t < 10; t++)
	{
		putchar(48 + n);
		n++;
		if (t <= 8)
		{
			putchar(44 + p);
			putchar(32 + p);
		}
	}

	putchar('\n');
	return (0);
}

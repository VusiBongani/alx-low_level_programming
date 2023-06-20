#include <stdio.h>

/**
 * main - Entry
 * Description: print numbers in lowercase
 * Return: always 0 (success)
 */

int main(void)
{
	int n;
	int p;
	int L_case;

	for (p = 0; p < 10; p++)
	{
		putchar(48 + n);
		n++;
	}
	for (L_case = 'a'; L_case <= 'f'; L_case++)
	{
		putchar(L_case);
	}

	putchar('\n');
	return (0);
}


#include <stdio.h>

/**
 * main - loops
 * Return: always 0 (success)
 */

int main(void)
{
	char L_case = 'a';

	for (L_case = 'b'; L_case <= 'z'; L_case++)
	{
		putchar(L_case);
	}
	putchar('\n');
	return (0);
}

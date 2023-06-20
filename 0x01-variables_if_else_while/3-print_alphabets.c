#include <stdio.h>

/**
 * main - for loop
 * Return: always 0 (success)
 */

int main(void)
{
	char Up_case;
	char L_case;

	for (L_case = 'a'; L_case <= 'z'; L_case++)
	{
		putchar(L_case);
	}

	for (Up_case = 'A'; Up_case <= 'Z'; Up_case++)
	{
		putchar(Up_case);
	}
		putchar('\n');

	return (0);
}

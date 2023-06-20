#include <stdio.h>

/**
 * main - Entry
 * Description: Print in reverse
 * Return: always 0 (success)
 */

int main(void)
{
	char L_case;

	for (L_case = 'z'; L_case >= 'a'; L_case--)
	{
		putchar(L_case);
	}

	putchar('\n');
	return (0);
}



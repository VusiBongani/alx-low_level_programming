#include <stdio.h>

/**
 * main - Entry code if statement  and for loops
 * description: Prints all alphabet excluding e and q.
 * Return: always 0 (successful)
 */

int main(void)
{
	char L_case; /* Lower case Alphabets */

	for (L_case = 'a'; L_case <= 'z'; L_case++)
	{
		if (L_case != 'e' && L_case != 'q')
		{
			putchar(L_case);
		}
	}

	putchar('\n');
	return (0);
}

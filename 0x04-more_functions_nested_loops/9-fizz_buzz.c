#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * Return: void
 */

int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if (n % 3 == 0 && (n % 5 == 0 ))
		{
			printf("FizzBuzz ");
		}
		else if (n % 5 == 0)
		{
			printf("buzz ");
		}
		else if (n % 3 == 0)
		{
			printf("Fizz ");
		}
		else if ((n % 3 != 0) && (n % 5 != 0))
		{
			printf("%d ", n);
		}
		
	}
	putchar('\n');
}

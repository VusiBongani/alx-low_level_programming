#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * positive_or_negative - check for negative or positive value
 * @i: int value
 * Return: void
 */

void positive_or_negative(int i)
{

	srand(time(0));
	i = rand() - RAND_MAX / 2;

	if (i > 0)
		printf("%d is positive\n", i);
	else if (i == 0)
		printf("%d is zero\n", i);
	else
		printf("%d is negative\n", i);

}

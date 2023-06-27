#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _atoi - convert a string to an integer
 * @s: parameter
 * Return: value or 0.
 */

int _atoi(char *s)
{
	int c = 0;

	unassigned int a = 0;

	int min = 1;

	int b = 0;

	while (s[c])
	{
		if (s[c] == 45)
		{
			min *= -1;
		}
		while (s[c] >= 48 && s[c] <= 57)
		{
			b = 1;
			a = (a * 10) + (s[c] - '0');
			c++;
		}
		if (b == 1)
		{
			break;
		}
		c++;
	}
	a *= min;
	return (a);
}

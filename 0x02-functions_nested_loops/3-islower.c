#include "main.h"

/**
 * _islower - checks the lower and upper case
 * @b: parameter
 * Return: 1 and 0
 */

int _islower(int b)
{
	if (b >= 97 && b <= 122)
	{
		return (1);
	}
	else
		return (0);
}

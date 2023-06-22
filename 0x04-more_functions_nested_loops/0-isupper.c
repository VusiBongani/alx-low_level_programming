#include "main.h"

/**
 * _isupper - checks the lower and upper case
 * @c: parameter
 * Return: 1 and 0
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
		return (0);
}

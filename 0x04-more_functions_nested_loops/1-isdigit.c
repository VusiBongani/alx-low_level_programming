#include "main.h"

/**
 * _isdigit - check for a digit
 * @c: parameter value
 * Return: 1 and 0
 */

int _isdigit(int c)
{
	if (c >= 49 && c <= 57)
	{
		return (1);
	}
	else
		return (0);
}

#include "main.h"

/**
 * _isalpha- checks the lower and upper case
 * @c: parameter
 * Return: 1 and 0
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
		return (0);
}

#include "main.h"

/**
 * _sqrt_recursion - return the natural square root of a number
 * @n: int n
 * Return: integer
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (n);
	}
	else
	{
		return (_sqrt_recursion(n, 0, n));
	}
}

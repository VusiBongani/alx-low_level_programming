#include "main.h"

/**
 * sqrt_helper - aid in finding the sqrt
 * @n: integer
 * @start: integer
 * @end: integer
 * Return: Integer
 */

int sqrt_helper(int n, int start, int end)
{
	int mid = start + (end - start) / 2;

	if (start > end)
	{
		return (-1);
	}

	if (mid * mid == n)
	{
		return (mid);
	}
	else if (mid * mid < n)
	{
		return (sqrt_helper(n, mid + 1, end));
	}
	else
	{
		return (sqrt_helper(n, start, mid - 1));
	}
}

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
		return (sqrt_helper(n, 0, n / 2));
	}
}

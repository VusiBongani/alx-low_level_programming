#include "main.h"

/**
 * _abs - Determines the absolute value
 *@n:parameter value
 * Return:The absolute value
 */

int _abs(int n)
{
	if (n < 0)
	{
		n = (-n);
		return (n);
	}
	else
		return (n);
}

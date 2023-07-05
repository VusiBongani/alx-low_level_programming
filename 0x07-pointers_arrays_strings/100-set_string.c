#include "main.h"
#include <stddef.h>

/**
 * set_string - sets the value of a point to a characte
 * @s: char s
 * @to: char to
 * return: voids
 */

void set_string(char **s, char *to)
{
	if (s == NULL)
	{
		return;
	}

	*s = to;
}

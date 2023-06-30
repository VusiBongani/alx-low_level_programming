#include "main.c"

/**
 * *string_toupper - changes from lower to upper case letters
 * @Lower: char parameter
 * Return: characters
 */

char *string_toupper(char *Lower)
{
	char *ptr = Lower;

	while (*ptr != '\0')
	{
		if (*ptr >= 'a' && *ptr <= 'z')
		{
			*ptr = *ptr - 'a' + 'A';
		}
		ptr++;
	}

	return (Lower);
}

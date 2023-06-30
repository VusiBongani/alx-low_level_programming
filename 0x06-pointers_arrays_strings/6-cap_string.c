#include "main.h"
#include <ctype.h>
/**
 * *cap_string - capitalizes all words of a string
 * @CAPS: char parameter
 * Return: characters
 */

char *cap_string(char *CAPS)
{
	char *ptr = CAPS;
	int capital = 1;

	while (*ptr != '\0')
	{
		if (*ptr == ' ' || *ptr == '\t' || *ptr == '\n' || *ptr == ',' ||
				*ptr == ';' || *ptr == '.' || *ptr == '!' ||
				*ptr == '?' || *ptr == '\"' || *ptr == '(' ||
				*ptr == ')' || *ptr == '{' || *ptr == '}')
		{
			capital = 1;
		}
		else if (isalpha(*ptr))
		{
			if (capital)
			{
				*ptr = toupper(*ptr);
				capital = 0;
			}
			else
			{
				*ptr = tolower(*ptr);
			}
		}

		ptr++;
	}

	return (CAPS);
}

#include "main.h"

/**
 * *_strdup - a function that returns a pointer
 * @str: a string
 * Return: a pointer
 */

char *_strdup(char *str)
{
	char *duplicate;
	int i;
	int length = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[length] != '\0')
	{
		length++;
	}

	duplicate = (char *)malloc((length + 1) * sizeof(char));

	if (duplicate == NULL)
	{
		return (NULL);
	}

	for (i = 0; i <= length; i++)
	{
		duplicate[i] = str[i];
	}

	return (duplicate);
}

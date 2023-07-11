#include "main.h"

/**
 * *str_concat - a function that concanate two strings
 * @s1: first string parameter
 * @s2: second string string parameter
 * Return:Null
 */

char *str_concat(char *s1, char *s2)
{
	int i;
	char *concatenated;
	int length1 = 0;
	int length2 = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[length1] != '\0')
	{
		length1++;
	}
	while (s2[length2] != '\0')
	{
		length2++;
	}
	concatenated = (char *)malloc((length1 + length2 + 1) * sizeof(char));

	if (concatenated == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < length1; i++)
	{
		concatenated[i] = s1[i];
	}
	for (i = 0; i < length2; i++)
	{
		concatenated[length1 + i] = s2[i];
	}
	concatenated[length1 + length2] = '\0';
	return (concatenated);
}

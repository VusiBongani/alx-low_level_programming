#include "main.h"

/**
 * _strcmp - compares strings
 * @s1: char parameter
 * @s2: char parameter
 * Return: value
 */

int _strcmp(char *s1, char *s2);
{
	int i = 0;
	int p;

	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}

	p = s1[i] - s2[i];

	return (p);
}

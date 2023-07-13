#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - entry point
 * @argc: parameter
 * @argv: parameter
 * Return: value
 */

int main(int argc, char *argv[])
{
	int j;
	int i;
	int val;
	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (0);
			}
		}

		val = atoi(argv[i]);

		sum += val;
	}

	printf("%d\n", sum);

	return (0);
}

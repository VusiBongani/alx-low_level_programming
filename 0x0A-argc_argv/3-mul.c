#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: parameter
 * @argv: parameter
 * Return: value
 */

int main(int argc, char *argv[])
{
	int val1;
	int val2;
	int answer;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	val1 = atoi(argv[1]);
	val2 = atoi(argv[2]);

	answer = val1 * val2;

	printf("%d\n", answer);

	return (0);
}

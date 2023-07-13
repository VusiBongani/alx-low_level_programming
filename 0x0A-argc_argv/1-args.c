#include <stdio.h>

/**
 * main - entry point
 * @argc: command line arguements passed
 * @argv: An array
 * Return: value
 */

int main(int argc, char *argv[])
{
	(void)*argv;

	printf("%d\n", argc - 1);

	return (0);
}

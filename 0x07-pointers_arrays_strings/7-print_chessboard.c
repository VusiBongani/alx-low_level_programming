#include "main.h"
#include <stddef.h>

/**
 * print_chessboard - prints the chess board
 * @a: char parameter
 * Return:void
 */

void print_chessboard(char (*a)[8])
{
	int i;
	int j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			printf("%c ", a[i][j]);
		}
		printf("\n");
	}
}

#include "main.h"

/**
 * **alloc_grid - functions that returns a pointer
 * @width: parameter for the width
 * @height: parameter for int height
 * Return: a pointer
 */

int **alloc_grid(int width, int height)
{
	int row;
	int col;
	int **grid;
	int i;

	if (width <= 0 || height <= 0)
		return (NULL);
	grid = (int **)malloc(height * sizeof(int *));

	if (grid == NULL)
		return (NULL);

	for (row = 0; row < height; row++)
	{
		grid[row] = (int *)malloc(width * sizeof(int));

		if (grid[row] == NULL)
		{
			for (i = 0; i < row; i++)
				free(grid[i]);
			free(grid);
			return (NULL);
		}
		for (col = 0; col < width; col++)
			grid[row][col] = 0;
	}
	return (grid);
}

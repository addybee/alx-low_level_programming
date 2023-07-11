#include <stdlib.h>
#include "main.h"
/**
 * free_grid -  frees a 2 dimensional grid previously created
 * @grid: the 2d array
 * @height: num of rows
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}

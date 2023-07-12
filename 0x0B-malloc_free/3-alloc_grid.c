#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: an int variable
 * @height: an integer variable
 * Return: NULL on failure and 2 dimensional array on success
 */
int **alloc_grid(int width, int height)
{
	int **p;
	int i, j;

	if (width < 1 || height < 1)
		return (NULL);
	p = (int**)malloc(height * sizeof(p));
	if (p == NULL)
	{
		free(p);
                return (p);
	}
	for (i = 0; i < height; i++)
	{
		p[i] = malloc(width * sizeof(int));
		if (p[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(p[i]);
			free(p);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			p[i][j] = 0;
	}
	return (p);
}

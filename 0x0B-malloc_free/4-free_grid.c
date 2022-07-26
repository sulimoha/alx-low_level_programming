#include "main.h"
#include <stdlib.h>
#include <limits.h>
/**
 *free_grid - frees a 2 dimensional grid previously created by
 *your alloc_grid function
 *@grid : 2 dimensional grid previously created by
 *alloc_grid function
 *@height : int
 *
 * Return: void
*/
void free_grid(int **grid, int height)
{
	int i = 0;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}

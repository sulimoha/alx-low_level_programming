#include "main.h"
#include <stdlib.h>
#include <limits.h>
/**
 *alloc_grid - returns a pointer to a 2 dimensional array of integers
 *@width : int
 *@height : returns a pointer to a 2 dimensional array of integers.
 *
 * Return: a pointer to a newly allocated space in memory which
*/
int **alloc_grid(int width, int height)
{
	int **t;
	int i = 0;
	int j = 0;
	int k = 0;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	t = malloc(height * sizeof(int *));
	if (t == NULL)
	{
		return (NULL);
	}
	for (k = 0; k < height; k++)
	{
		t[k] = malloc(width * sizeof(int));
		if (t[k] == NULL)
		{
			free(t[k]);
			return (NULL);
		}
	}
	while (i < height)
	{
		j = 0;
		while (j < width)
		{
			t[i][j] = 0;
			j++;
		}
		i++;
	}
	return (t);
}

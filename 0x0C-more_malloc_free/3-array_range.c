#include "main.h"
#include <stdlib.h>
/**
 *array_range - creates an array of integers
 *@min : smin value in the array
 *@max : max value in the array
 *
 * Return: a pointer to the new created array, or NULL if it fails
*/
int *array_range(int min, int max)
{
	int *t;
	int i;

	if (min > max)
	{
		return (NULL);
	}
	t = malloc((max - min + 1) * sizeof(int));
	if (t == NULL)
	{
		return (NULL);
	}
	for (i = min; i <= max; i++)
	{
		t[i - min] = i;
	}
	return (t);
}

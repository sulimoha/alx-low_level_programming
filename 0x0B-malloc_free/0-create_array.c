#include "main.h"
#include <stdlib.h>
#include <limits.h>
/**
 *create_array - creates an array of chars, and initializes
 *it with a specific char
 *@size : suze of the array
 * @c : char
 *
 * Return: a pointer to the array, or NULL if it fails
*/
char *create_array(unsigned int size, char c)
{
	char *t;
	unsigned int i = 0;

	if (size == 0)
	{
		return (NULL);
	}
	t = malloc(size * sizeof(char));
	if (t == NULL)
	{
		return (NULL);
	}
	while (i < size)
	{
		t[i] = c;
		i++;
	}
	return (t);
}

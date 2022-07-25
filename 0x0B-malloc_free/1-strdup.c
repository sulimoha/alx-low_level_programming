#include "main.h"
#include <stdlib.h>
#include <limits.h>
/**
 *_strdup - returns a pointer to a newly allocated space in
 *memory, which contains a copy of the string given
 *as a parameter.
 *@str : string
 *
 * Return: a pointer to a newly allocated space in memory
*/
char *_strdup(char *str)
{
	char *t;
	int len = 0;
	int i = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	t = malloc(len * sizeof(char));
	if (t == NULL)
	{
		return (NULL);
	}
	while (i < len)
	{
		t[i] = str[i];
		i++;
	}
	return (t);
}

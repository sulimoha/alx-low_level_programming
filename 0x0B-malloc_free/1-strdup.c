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

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[len] != '\0')
	{
		len++;
	}

	t = malloc(len * sizeof(char) + 1);
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

#include "main.h"
#include <stdio.h>
/**
 *string_toupper - changes all lowercase letters of a string to uppercase
 * @* : string
 *
 * Return: char
*/
char *string_toupper(char *)
{
	int i = 0;
	int j = 0;
	int temp;

	while (*[i] != '\0')
	{
		i++;
	}
	for (j = 0; j < i; j++)
	{
		*[i] = *[i] - 32;
	}
	return (*);
}

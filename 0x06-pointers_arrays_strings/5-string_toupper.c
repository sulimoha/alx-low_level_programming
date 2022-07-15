#include "main.h"
#include <stdio.h>
/**
 *string_toupper - changes all lowercase letters of a string to uppercase
 * @s : string
 *
 * Return: char
*/
char *string_toupper(char *s)
{
	int i = 0;
	int j = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	for (j = 0; j < i; j++)
	{
		if (s[j] >= 97 && s[j] <= 122)
		{
			s[j] = s[j] - 32;
		}
	}
	return (s);
}

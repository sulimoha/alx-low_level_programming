#include "main.h"
#include <stdio.h>
/**
 *_strchr - locates a character in a string
 * @s : string
 * @c : charachter
 *
 * Return: char*
*/
char *_strchr(char *s, char c)
{
	int i = 0;
	int a;

	while (s[i])
	{
		i++;
	}
	for (a = 0; a <= i; a++)
	{
		if (s[a] == c)
		{
			s = s + a;
			return (s);
		}
	}
	return ('\0');
}

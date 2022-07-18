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
	
	if (s[i] = '\0')
	{
		_puthcar('\n');
	}
	while (s[i])
	{
		if (s[i] == c)
		{
			a = i;
			while (s[a])
			{
			return ((s + a));
			a++;
			}
		}
		i++;
	}
	return ('\0');
}

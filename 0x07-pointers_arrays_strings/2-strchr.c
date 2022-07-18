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
		if (s[i] == c)
		{
			a = i;
			while (s[a])
			{
				s = s + a;
				a++;
			}
			return (s);
		}
		i++;
	}
	return ('\0');
}

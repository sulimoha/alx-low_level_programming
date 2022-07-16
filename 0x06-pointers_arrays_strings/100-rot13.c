#include "main.h"
#include <stdio.h>
/**
 *rot13 - encodes a string using rot13
 * @s : string
 *
 * Return: char
*/
char *rot13(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if ((s[i] >= 'a' && s[i] < 'n') || (s[i] >= 'A' && s[i] < 'N'))
		{
			s[i] = s[i] + 13;
			i++;
		}
		else if (s[i] != '\0' && ((s[i] >= 'n' && s[i] <= 'z')
					|| (s[i] >= 'N' && s[i] <= 'Z')))
		{
			s[i] = s[i] - 13;
			i++;
		}
		else
		{
			i++;
		}
	}
	return (s);
}

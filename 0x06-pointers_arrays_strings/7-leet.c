#include "main.h"
#include <stdio.h>
/**
 *leet - encodes a string into 1337
 * @s : string
 *
 * Return: char
*/
char *leet(char *s)
{
	int i = 0;
	int j = 0;
	int a;
	int b;
	int c;
	char g[] = {'A', 'E', 'L', 'O', 'T'};
	char l[] = {'4', '3', '1', '0', '7'};

	while (s[i] != '\0')
	{
		for (j = 0; j < 5; j++)
		{
			a = g[j];
			b = a + 32;
			c = l[j];
			if (s[i] == a || s[i] == b)
			{
				s[i] = c;
			}
		}
		i++;
	}
	return (s);
}

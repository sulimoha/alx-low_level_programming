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
	char g[] = {101, 105, 114, 117, 124};
	char l[] = {52, 51, 49, 48, 55}; 

	while (s[i] != '\0')
	{
		for (j = 0; j < 5; j++)
		{
			a = g[j];
			b = a + 40;
			c = l[j];
			if (s[i] == a || b)
			{
				s[i] = c;
			}
		}
		i++;
	}
	return (s);
}

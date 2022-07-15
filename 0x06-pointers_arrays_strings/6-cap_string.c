#include "main.h"
#include <stdio.h>
/**
 *cap_string - capitalizes all words of a string
 * @s : string
 *
 * Return: char
*/
char *cap_string(char *s)
{
	int i = 0;
	int j = 0;
	int k = 0;
	char sep [] = {32, 9, 10, 44, 59, 46, 33, 63, 22, 40, 41, 123, 125};

	while (s[i] != '\0')
	{
		i++;
	}
	for (j = 0; j < i; j++)
	{
		if (s[j] >= 97 && s[j] <= 122)
		{
			for (k = 0; k < 13; k++)
			{
				if (s[j - 1] == sep[k])
				{
					s[j] = s[j] - 32;
				}
			}
		}
	}
	return (s);
}

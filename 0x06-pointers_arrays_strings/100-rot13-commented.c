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
		printf(" i % d s[i] at the beginning of loop %c \n", i, s[i]);
		if ((s[i] >= 'a' && s[i] < 'n') || (s[i] >= 'A' && s[i] < 'N'))
		{
			printf(" condition1 met\n");
			printf(" i %d s[i] before %c \n", i, s[i]);
			s[i] = s[i] + 13;
			printf(" i %d s[i] after %c \n", i, s[i]);
			i++;
		}
		else if (s[i] != '\0' && ((s[i] >= 'n' && s[i] <= 'z')
					|| (s[i] >= 'N' && s[i] <= 'Z')))
		{
			printf(" condition2 met\n");
			printf(" i %d s[i] before %c \n", i, s[i]);
			s[i] = s[i] - 13;
			printf(" i % d s[i] after %c \n", i, s[i]);
			i++;
		}
		else
		{
			i++;
		}
	}

	printf(" i % d s[i] at the end of loop %c \n", i, s[i]);
	return (s);
}

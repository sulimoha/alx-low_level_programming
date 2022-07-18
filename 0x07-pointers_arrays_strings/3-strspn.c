#include "main.h"
/**
 *_strspn - gets the length of a prefix substring
 * @s : string
 * @accept : charachter
 *
 * Return: number of bytes in the initial segment of s which
 * consist only of bytes from accept
*/
unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int j = 0;
	int a, b;
	unsigned int c = 0;

	while (s[i] != 32)
	{
		i++;
	}
	while (accept[j])
	{
		j++;
	}
	for (b = 0; b <= j; b++)
	{
		for (a = 0; a <= i; a++)
		{
			if (s[a] != 32)
			{
				if (accept[a] == s[b])
				{
					c++;
					break;
				}
			}
		}
	}
	return (c);
}

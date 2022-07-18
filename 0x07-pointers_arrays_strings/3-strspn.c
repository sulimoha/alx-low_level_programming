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

	while (accept[j])
	{
		i = 0;
		while (s[i] != 32)
		{
			if (accept[j] == s[i])
			{
				c++;
			}
			i++;
		}
		j++
	}
	return (c);
}

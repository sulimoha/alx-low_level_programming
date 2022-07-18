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
	unsigned int a;

	while (s[i])
	{
		while (accept[j])
		{
			if ( accept[j] == s[j])
			{
			a++;
			}
			j++;
		}
		i++;
	}
	return (a);
}

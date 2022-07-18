#include "main.h"
/**
 *_strpbrk - searches a string for any of a set of bytesi
 * @s : string
 * @accept : charachter
 *
 * Return: number of bytes in the initial segment of s which
 * consist only of bytes from accept
*/
char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	int j = 0;

	while (s[i])
	{
		j = 0;
		while (accept[j])
		{
			if (accept[j] == s[i])
			{
				return ((s + i));
			}
			j++;
		}
		i++;
	}
	return ('\0');
}

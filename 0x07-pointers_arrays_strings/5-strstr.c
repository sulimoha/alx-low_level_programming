#include "main.h"
/**
 *_strstr - locates a substring
 * @haystack : string
 * @needle : substring
 *
 * Return: a pointer to the beginning of the located substring, or NULL
 * if the substring is not found
*/
char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;
	int a = -1;
	int l = 0;
	int p = 0;

	while (haystack[l])
	{
		l++;
	}
	while (needle[p])
	{
		p++;
	}
	for (i = 0; i < l; i++)
	{
		for (j = 0; j < p; j++)
		{
			if (haystack[i] == needle[j])
			{
				a++;
				return (&(needle[j + a]));
			}
		}
	}
	return ('\0');
}

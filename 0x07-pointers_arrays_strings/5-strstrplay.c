#include "main.h"
#include <stdio.h>
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
	int a = 0;
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
	for (i = 0; i < l - 1; i++)
	{
		for (j = 0; j < p - 1; j++)
		{
			if ((haystack[i] == needle[j] && haystack
					[i + 1] == needle[j + 1])
					)
			{
				printf ("hay = %c, needle = %c\n", haystack[i], needle[j]);

				a++;
				if (a == p - 1)
				{
					printf ("a = %d, p = %d\n", a, p);
					return (needle);
				}
			}

		}
	}
	return ('\0');
}

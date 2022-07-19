#include "main.h"
#include "_putchar.c"
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
	int i = 0;
	int j = 0;

	while (haystack[i])
	{
		j = 0;
		while (needle[j])
		{
			if (needle[j] == haystack[i] && needle[j + 1] == haystack[i + 1])
			{
				if (needle[j] == '\0')
				{
					continue;
				}
				else
				{
				return (needle + j);
				}
			}
			j++;
		}
		i++;
	}
	return ('\0');
}

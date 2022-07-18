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
	int i = 0;
	int j = 0;

	while (haystack[i] != '\0')
	{
		j = 0;
		while (needle[j] != '\0')
		{
			if (needle[j] == haystack[i] && needle[j - 1] == haystack[i - 1])
			{
				return ((haystack + i - 1));
			}
			j++;
		}
		i++;
	}
	return ('\0');
}

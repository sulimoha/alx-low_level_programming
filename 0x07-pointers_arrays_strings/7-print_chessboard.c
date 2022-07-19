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

	while (haystack[i])
	{
		while (needle[j])
		{
			if (haystack[i + j] == needle[j])
			{
				break;
			}
			j++;
		}
		if (needle[j] == '\0')
		{
			return (haystack + i);
		}
		i++;
	}
	return ('\0');
}

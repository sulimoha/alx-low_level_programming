#include "main.h"
#include <stdlib.h>
#include <limits.h>
/**
 *str_concat - concatenates two strings.
 *@s1 : string
 *@s2 : string
 *
 * Return: a pointer to a newly allocated space in memory which
 * contains the contents of s1, followed by the contents
 * of s2, and null terminateda newly
 * allocated space in memory
*/
char *str_concat(char *s1, char *s2)
{
	char *t;
	int len1 = 0;
	int len2 = 0;
	int i = 0;
	int j = 0;

	if (s1 == NULL && s2 == NULL)
	{
		return ('\0');
	}
	if (s1 != NULL)
	{
		while (s1[len1] != '\0')
		{
			len1++;
		}
	}
	if (s2 != NULL)
	{
		while (s2[len2] != '\0')
		{
			len2++;
		}
	}
	t = malloc((len1 + len2) * sizeof(char) + 1);
	if (t == NULL)
	{
		return (NULL);
	}
	while (i < len1)
	{
		t[i] = s1[i];
		i++;
	}
	if (s2 == NULL)
	{
		return (t);
	}
	while (j < len1 + len2)
	{
		t[j + len1] = s2[j];
		j++;
	}
	return (t);
}

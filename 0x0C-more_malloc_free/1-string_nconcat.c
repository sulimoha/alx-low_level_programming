#include "main.h"
#include <stdlib.h>
/**
 *string_nconcat - concatenates two strings.
 *@s1 : string
 *@s2 : string
 *@n : n bytes of s2
 *
 *Return: a pointerto a newly allocated space in memory,
 * which contains s1, followed by the first n bytes of s2,
 * and null terminated
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *t;
	unsigned int len1 = 0, len2 = 0, i = 0, j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[len1])
	{
		len1++;
	}
	while (s2[len2])
	{
		len2++;
	}
	if (n >= len2)
		n = len2;
	t = malloc((len1 + n) * sizeof(char) + 1);
	if (t == NULL)
		return (NULL);
	while (i < len1)
	{
		t[i] = s1[i];
		i++;
	}
	while (j < n)
	{
		t[j + len1] = s2[j];
		j++;
	}
	t[len1 + n] = '\0';
	return (t);
}

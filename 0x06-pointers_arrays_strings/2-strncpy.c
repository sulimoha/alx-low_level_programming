#include "main.h"
#include <stdio.h>
/**
 *_strncpy -  copies a string
 * @dest : a pointer to dest
 * @src : apointer to src
 * @n : number of chars in src
 *
 * Return: char*
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	if (n <= 0)
	{
		return (dest);
	}
	else
	{
		while (dest[i] != '\0')
		{
			i++;
		}
		while (j < n && src[j] != '\0')
		{
			dest[j] = src[j];
			j++;
		}
		while (j < n)
		{
			dest[j] = '\0';
			j++;
		}
		return (dest);
	}
}

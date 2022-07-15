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
	int i;
	int destLen = 0;
	int srcLen = 0;

	if (n <= 0)
	{
		return (dest);
	}
	else
	{
		while (dest[destLen] != '\0')
		{
			destLen++;
		}
		while (src[srcLen] != '\0')
		{
			srcLen++;
		}
		if(destLen <= n)
		{
			destLen = n;
		}
		for (i = 0; i < n; i++)
		{
			dest[i] = src[i];
		}
		dest[destLen] = '\0';
		return (dest);
	}
}

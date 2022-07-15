#include "main.h"
#include <stdio.h>
/**
 *_strncat - concatenates two strings
 * @dest : a pointer to dest
 * @src : apointer to src
 * @n : number of chars in src
 *
 * Return: char*
*/
char *_strncat(char *dest, char *src, int n)
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
		if (n > srcLen)
		{
			n = srcLen - 1;
		}
		destLen = destLen + n;
		for (i = 0; i <= n; i++)
		{
			dest[destLen - n + i] = src[i];
		}
		dest[(destLen)] = '\0';
		return (dest);
	}
}

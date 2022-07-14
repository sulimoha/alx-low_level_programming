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

	while (dest[destLen] != '\0')
	{
		destLen++;
	}
	destLen = destLen + n;
	for (i = 0; i < n; i++)
	{
		dest[destLen - n + i] = src[i];
	}
	return (dest);
}

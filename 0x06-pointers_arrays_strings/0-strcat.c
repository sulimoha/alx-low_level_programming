#include "main.h"
#include <stdio.h>
/**
 *_strcat - concatenates two strings
 * @dest : a pointer to dest
 * @src : apointer to src
 *
 * Return: char*
*/
char *_strcat(char *dest, char *src)
{
	int i;
	int destLen = 0;
	int srcLen = 0;


	while (dest[destLen] != '\0')
	{
		destLen++;
	}
	while (src[srcLen] != '\0')
	{
		srcLen++;
	}
	destLen = destLen + srcLen;
	for (i = 0; i < srcLen; i++)
	{
		dest[destLen - srcLen + i] = src[i];
	}
	return (dest);
}

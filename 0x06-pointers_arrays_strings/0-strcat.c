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
	printf("destLen %d\n", destLen);
	while (src[srcLen] != '\0')
	{
		srcLen++;
	}
	printf("srcLen %d\n", srcLen);
	destLen = destLen + srcLen;
	printf("destLen %d\n", destLen);
	for (i = 0; i < srcLen; i++)
	{
		dest[destLen - srcLen + i] = src[i];
	}
	return (dest);
}

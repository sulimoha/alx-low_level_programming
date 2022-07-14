#include "main.h"
#include <string.h>
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


	while (dest[destLen])
	{
		destLen++;
	}
	while (src[srcLen])
	{
		srcLen++;
	}
	destLen = destLen - 1 + srcLen;
	for (i = 0; i < destLen - 1; i++)
	{
		dest[i + destLen - 1] = src[i];
	}
	return (dest);
}

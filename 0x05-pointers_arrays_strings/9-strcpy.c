#include "main.h"
#include <string.h>
/**
 * _strcpy - copies the string pointed to by src, including the terminating
 * null byte (\0), to the buffer pointed to by dest
 * @dest : a pointer to a buffer
 * @src : a pointer to a string
 *
 * Return: char
*/
char *_strcpy(char *dest, char *src)
{
	unsigned int long i;

	for (i = 0; i < strlen(src); i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}

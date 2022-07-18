#include "main.h"
/**
 *_memcpy - copies memory area
 * @src : memory area
 * @dest : memory area
 * @n : the first n bytes of the memory area
 *
 * Return: char*
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

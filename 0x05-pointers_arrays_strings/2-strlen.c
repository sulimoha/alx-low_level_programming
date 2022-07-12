#include "main.h"
#include <string.h>
/**
 * _strlen - returns the length of a string
 * @s : a pointer to s
 *
 * Return: int len
*/
int _strlen(char *s)
{
	int len;
	char c = *s;

	len = strlen(c);
	return (len);
}

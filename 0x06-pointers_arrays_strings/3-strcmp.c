#include "main.h"
#include <stdio.h>
/**
 *_strcmp -  copies a string
 * @s1 : a pointer to s1
 * @s2 : apointer to s2
 *
 * Return: int
*/
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int j = 0;
	int a = 0;
	int b = 0;
	
	while (s1[i] != '\0')
	{
		a = a + s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		b = b + s2[j];
		j++;
	}
	return (a - b);
}

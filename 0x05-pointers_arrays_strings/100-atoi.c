#include "main.h"
#include <string.h>
/**
 * _atoi - convert a string to an integer
 i* @s : a pointer to s
 *
 * Return: char
*/
int _atoi(char *s)
{
	int i;
	unsigned int j = 0;
	signed int sign = 1;

	for (i = 0; i < (int)strlen(s); i++)
	{
		if ((int)s[i] == 45)
		{
			sign = -1 * sign;
		}
	}
	for (i = 0; i < (int)strlen(s); i++)
	{
		if ((int)s[i] >= 48 && (int)s[i] <= 57)
		{
			j = (j * 10) + (s[i] - '0');
		}
	}
	j = sign * j;
	return (j);
}

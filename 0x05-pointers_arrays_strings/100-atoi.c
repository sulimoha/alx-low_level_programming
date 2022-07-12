#include "main.h"
#include <string.h>
/**
 * _atoi - convert a string to an integer
 * @s : a pointer to s
 *
 * Return: char
*/
int _atoi(char *s)
{
	int i;
	int j = -1;

	for (i = 0; i < (int)strlen(s); i++)
	{
		if (((int)s[i] >= 48 && (int)s[i] <= 57)
				|| (int)s[i] == 43 || (int)s[i] == 45)
		{
			j++;
			s[i] = s[i];
		}
		else
		{
			s[i] = '\0';
		}
	}
	if (j >= 0)
	{
		return (s - '0');
	}
	else 
	{
		return (0);
	}
}


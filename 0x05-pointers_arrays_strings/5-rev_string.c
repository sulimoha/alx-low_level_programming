#include "main.h"
#include <string.h>
/**
 * rev_string -  prints a string, in reverse, followed by a new line
 * @s : a pointer to s
 *
 * Return: void
*/
void rev_string(char *s)
{
	signed int long i;
	char temp[strlen(s)];
	signed int long j;

	for (i = (strlen(s) - 1); i > -1; i--)
	{
		temp [streln(s)-1-i] = s[i];
	}
	for (j = 0; j < strlen(temp); j++)
	{
		s[j] = temp [j];
	}
}

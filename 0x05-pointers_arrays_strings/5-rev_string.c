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
	int len = strlen(s);
	char temp[len];
	signed int long j;

	for (i = len - 1; i > -1; i--)
	{
		temp [len - 1 - i] = s[i];
	}
	for (j = 0; j < len; j++)
	{
		s[j] = temp [j];
	}
}

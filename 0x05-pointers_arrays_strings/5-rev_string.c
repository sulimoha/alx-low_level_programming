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
	char t[len];
	signed int long j;

	for (i = len - 1; i > -1; i--)
	{
		t [len - 1 - i] = s[i];
	}
	for (j = 0; j < len; j++)
	{
		s[j] = t [j];
	}
}

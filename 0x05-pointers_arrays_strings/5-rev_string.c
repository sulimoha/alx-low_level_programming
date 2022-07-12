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
	int l = strlen(s);
	char t[trlen(s)];
	signed int long j;

	for (i = l - 1; i > -1; i--)
	{
		t [l - 1 - i] = s[i];
	}
	for (j = 0; j < l; j++)
	{
		s[j] = t [j];
	}
}

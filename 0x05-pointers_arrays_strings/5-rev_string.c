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
	signed int long i, j, k;
	int l = 0;

	for (i = strlen(s) - 1; i > -1; i--)
	{
		l++;
	}
	char t[l];
	for (j = 0; j < l; j++)
	{
		t[j] = s [strlen(s) - 1 - i];
	}
	for (k = 0, k < l; k++)
	{
		s[k] = t[j];
	}
}


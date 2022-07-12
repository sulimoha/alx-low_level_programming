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

	for (i = (strlen(s) - 1); i > -1; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}

#include "main.h"
#include <string.h>
/**
 * print_rev -  prints a string, in reverse, followed by a new line
 * @s : a pointer to s
 *
 * Return: void
*/
void print_rev(char *s)
{
	signed int long i;

	for (i = (strlen(s)); i > -1; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}

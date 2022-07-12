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
	unsigned int long i;

	for (i = (strlen(s) - 1); i > 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}

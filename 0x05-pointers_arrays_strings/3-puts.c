#include "main.h"
#include <string.h>
/**
 * _puts -  prints a string, followed by a new line, to stdout
 * @str : a pointer to str
 *
 * Return: void
*/
void _puts(char *str)
{
	unsigned int long i;

	for (i = 0; i < strlen(str); i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

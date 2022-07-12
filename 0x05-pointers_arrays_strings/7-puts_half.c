#include "main.h"
#include <string.h>
/**
 * puts_half - prints half of a string, followed by a new line
 * @str : a pointer to str
 *
 * Return: void
*/
void puts_half(char *str)
{
	unsigned int long i;

	for (i = (strlen(str) - 1)/2; i < strlen(str); i++)
	{

		_putchar(str[i]);
	}
	_putchar('\n');
}

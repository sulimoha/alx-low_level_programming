#include "main.h"
#include <string.h>
/**
 * puts2 - prints every other character of a string, starting with the
 * first character, followed by a new line
 * @str : a pointer to str
 *
 * Return: void
*/
void puts2(char *str)
{
	unsigned int long i;

	for (i = 0; i < strlen(str); i++)
	{

		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}

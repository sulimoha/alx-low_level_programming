#include "main.h"
/**
 * main - entry point
 * @void: no parameters
 *
 * Return: 0
*/

void print_alphabet(void)
{
	char i;
	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}

#include "main.h"
/**
 * print_sign - entry point
 * @c: input charachter
 *
 * Return: 1 and prints + if n > 0 , returns 0 and prints 0 if n is 0, returns
 * -1 and prints - if n < 0
*/

int print_sign(int n)
{
	if (n > 0)
	{ 
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else 
	{
		_putchar('0');
		return (0);
	}
}

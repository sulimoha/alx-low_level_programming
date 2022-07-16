#include "main.h"
#include <stdio.h>
/**
 *print_number - prints an integer
 * @n : string
 *
 * Return: void
*/
void print_number(int n)
{
	if (n < 0)
	{
		n*= -1;
		_putchar('-');
		_putchar(n - '0');
	}
	else
	{
		_putchar(n - '0');
	}
}

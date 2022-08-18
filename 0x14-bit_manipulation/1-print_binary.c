#include "main.h"
/**
 * print_binary - a function that prints the binary representation of a number
 * @n: number to be printed in binary
 *
 *Return: void
*/
void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	_rshift(n);
}
/**
 * _rshift - to shift to the right
 * @n: number
 *
 * Return: void
*/
void _rshift(unsigned long int n)
{
	if (n < 1)
	{
		return;
	}
	_rshift(n >> 1);
	if (n & 1)
	{
		_putchar('1');
	}
	else
	{
		_putchar('0');
	}
}
